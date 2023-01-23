/*
The problem statement is really simple. You are to write all primes less than 10^8

Input
There is not input

Output
To make the problem less output related write out only the 1st, 101st, 201st, ... 1st mod 100.

Example
Input:

Output:
2
547
1229
...
99995257
99996931
99998953


*/
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
/*input sections*/

void input()
{
}
ll n = 10000000;
vector<bool> isPrime(n + 1, true);
void sol()
{
    isPrime[1] = isPrime[0] = false;
    for (ll i = 2; i <= sqrt(n); i++)
    {
        for (ll j = i * i; j <= n; j += i)
        {
            isPrime[j] = false;
        }
    }
    ll c = 1;
    cout << 2 << en;
    for (ll ptr = 3; ptr <= n; ptr += 2)
    {
        if (isPrime[ptr])
        {
            c++;
            if (c % 100 == 1)
            {
                cout << ptr << en;
            }
        }
    }
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    FAST;
    int T = 1;
    // cin >> T;
    while (T--)
    {
        input();
        sol();
    }
    return 0;
}