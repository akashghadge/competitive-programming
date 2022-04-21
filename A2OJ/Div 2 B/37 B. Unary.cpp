/*

*/
#include <bits/stdc++.h>
using namespace std;
#define en "\n"
#define ll long long
#define v vector
#define vi vector<long long>
#define vll vector<ll>
#define vii vector<vector<long long>>
#define pii pair<long long, long long>
#define vpi vector<pair<long long, long long>>
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
unordered_map<char, string> mp;
void init()
{
    mp['>'] = "1000";
    mp['<'] = "1001";
    mp['+'] = "1010";
    mp['-'] = "1011";
    mp['.'] = "1100";
    mp[','] = "1101";
    mp['['] = "1110";
    mp[']'] = "1111";
}
long long mod = 1000003;
long long power(long long x, unsigned long long y)
{
    long long res = 1;

    while (y > 0)
    {
        if (y & 1)
            res = ((res % mod) * (x % mod)) % mod;

        y = y >> 1;
        x = ((x % mod) * (x % mod)) % mod;
    }
    return (res % mod);
}
long long sol(string str)
{
    string res = "";
    for (auto ch : str)
    {
        res += mp[ch];
    }
    reverse(res.begin(), res.end());
    // cout << res << en;
    long long ans = 0;
    for (long long i = 0; i < res.size(); i++)
    {
        long long p = power(2, i);
        if (res[i] == '1')
            ans = ((ans % mod) + (p % mod)) % mod;
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
    init();
    string str;
    cin >> str;
    cout << sol(str) << en;
    return 0;
}