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
string sol(int n, int k)
{
    string ans = "";
    if (n == k)
    {
        for (char i = 0; i < k; i++)
        {
            ans += 'a' + i;
        }
        return ans;
    }
    else if (k == 1)
    {
        for (int i = 0; i < n; i++)
        {
            ans += 'a';
        }
        return ans;
    }
    int i = 0;
    while (i < n - k + 2)
    {
        if (i % 2 == 0)
        {
            ans += 'a';
        }
        else
        {
            ans += 'b';
        }
        i++;
    }
    for (int i = 2; i < k; i++)
    {
        ans += 'a' + i;
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
        if (n == 1 && k == 1)
            cout << 'a' << en;
        else if (n < k || k == 1)
            cout << -1 << en;
        else
            cout << sol(n, k) << en;
    }
    return 0;
}