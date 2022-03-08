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
ll sol(long long l, long long r, long long a)
{
    long long e = l / a;
    long long f = l % a;
    long long g = r / a;
    long long h = r % a;
    if (e == g)
    {
        return h + g;
    }
    else
    {
        return max(g + h, g + a - 2);
    }
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    FAST;
    long long T;
    cin >> T;
    while (T--)
    {
        long long l, r, a;
        cin >> l >> r >> a;
        cout << sol(l, r, a) << en;
    }
    return 0;
}