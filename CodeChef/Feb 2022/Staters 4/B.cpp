#include <bits/stdc++.h>
using namespace std;
#define en "\n"
#define ll long long
#define v vector
#define vi vector<int>
#define vll vector<ll>
#define vii vector<vector<int>>
#define pii pair<int, int>
#define vpi vector<pair<int, int>>
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
int sol(string str, int n)
{
    int ans = n;
    char prev = str[0];
    for (int i = 1; i < n; i++)
    {
        if (prev == str[i])
        {
            ans--;
        }
        prev = str[i];
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
        int n;
        string str;
        cin >> n;
        cin >> str;
        cout << sol(str, n) << en;
    }
    return 0;
}