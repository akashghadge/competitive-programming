#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll solve(ll A, ll B, ll C, ll D)
{
    ll em = A;
    ll sap = 0;
    ll operations = 0;
    ll limit = 1e6;
    while (em > D * sap && limit && em<1e18)
    {
        em += B;
        sap += C;
        operations += 1;
        limit--;
    }

    if (em <= D * sap)
    {
        return operations;
    }
    else
    {
        return -1;
    }
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ll a, b, c, d;
    cin >> a >> b >> c >> d;
    cout << solve(a, b, c, d) << endl;
}