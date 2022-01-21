#include <bits/stdc++.h>
using namespace std;
#define en "\n"
#define vi vector<int>
#define vii vector<vector<int>>
#define vll vector<ll>
#define ll long long
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
int mod = 1073741824;
int countDivisors(int n)
{
    int cnt = 0;
    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            // If divisors are equal,
            // count only one
            if (n / i == i)
                cnt++;

            else // Otherwise count both
                cnt = cnt + 2;
        }
    }
    return cnt;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    FAST;
    int a, b, c;
    cin >> a >> b >> c;
    vll dp(1e6 + 10, -1);
    ll ans = 0;
    for (int ai = 1; ai <= a; ai++)
    {
        for (int bi = 1; bi <= b; bi++)
        {
            for (int ci = 1; ci <= c; ci++)
            {
                int curr = ai * bi * ci;
                if (dp[curr] != -1)
                    ans = (ans % mod + dp[curr] % mod) % mod;
                else
                {
                    dp[curr] = countDivisors(curr);
                    ans = (ans % mod + dp[curr] % mod) % mod;
                }
            }
        }
    }
    cout << ans << en;
    return 0;
}