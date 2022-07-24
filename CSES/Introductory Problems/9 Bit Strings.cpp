/*
Your task is to calculate the number of bit strings of length n.

For example, if n=3, the correct answer is 8, because the possible bit strings are 000, 001, 010, 011, 100, 101, 110, and 111.

Input

The only input line has an integer n.

Output

Print the result modulo 109+7.

Constraints
1≤n≤106
Example

Input:
3

Output:
8

*/
#include <bits/stdc++.h>
using namespace std;
#define en "\n"
#define ll long long
#define v vector
#define vi vector<ll>
#define vll vector<ll>
#define vii vector<vector<ll>>
#define pii pair<ll, ll>
#define vpi vector<pair<ll, ll>>
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
/*input sections*/
ll n;
void input()
{
    cin >> n;
}
long long binpow(long long a, long long b)
{
    long long res = 1;
    ll mod = 1e9 + 7;
    while (b > 0)
    {
        if (b & 1)
            res = (res * a) % mod;
        a = (a * a) % mod;
        b >>= 1;
    }
    return res;
}
void sol()
{
    cout << binpow(2, n) << en;
}
int main()
{
    FAST;
    ll T = 1;
    // cin >> T;
    while (T--)
    {
        input();
        sol();
    }
    return 0;
}