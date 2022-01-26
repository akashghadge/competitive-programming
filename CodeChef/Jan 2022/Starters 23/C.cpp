#include <bits/stdc++.h>
using namespace std;
#define en "\n"
#define vi vector<int>
#define vii vector<vector<int>>
#define vll vector<ll>
#define ll long long
#define v vector
#define pii pair<int, int>
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
int sol(int n, int k, string str)
{
    if (k == 1)
    {
        cout << "login" << en;
        return 0;
    }
    // sliding window
    int zeros = 0;
    int ans = 0;
    int used = 1;
    for (int i = 0; i < k; i++)
    {
        if (str[i] == '0')
            zeros++;
    }
    if (zeros == k)
    {
        ans++;
        zeros = 0;
    }
    else if (zeros == k - 1)
    {
        ans++;
        zeros = 0;
        used = 0;
    }
    for (int i = k; i < n; i++)
    {
        if (str[i - k] == '0')
            zeros--;
        if (str[i] == '0')
            zeros++;

        if (zeros == k)
        {
            ans++;
            zeros = 0;
        }
        else if (zeros == k - 1 && used)
        {
            ans++;
            zeros = 0;
            used = 0;
        }
    }
    return ans;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    FAST;
    int T;
    cin >> T;
    while (T--)
    {
        int n, k;
        cin >> n >> k;
        string str;
        cin >> str;
        cout << sol(n, k, str) << en;
    }
    return 0;
}