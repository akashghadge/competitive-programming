/*
Theofanis really likes sequences of positive integers, thus his teacher (Yeltsa Kcir) gave him a problem about a sequence that consists of only special numbers.

Let's call a positive number special if it can be written as a sum of different non-negative powers of n. For example, for n=4 number 17 is special, because it can be written as 40+42=1+16=17, but 9 is not.

Theofanis asks you to help him find the k-th special number if they are sorted in increasing order. Since this number may be too large, output it modulo 109+7.

Input
The first line contains a single integer t (1≤t≤104) — the number of test cases.

The first and only line of each test case contains two integers n and k (2≤n≤109; 1≤k≤109).

Output
For each test case, print one integer — the k-th special number in increasing order modulo 109+7.

Example
inputCopy
3
3 4
2 12
105 564
outputCopy
9
12
3595374
Note
For n=3 the sequence is [1,3,4,9...]

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
ll n, k;
void input()
{
    cin >> n >> k;
}
long long binpow(long long a, long long b, long long m)
{
    a %= m;
    long long res = 1;
    while (b > 0)
    {
        if (b & 1)
            res = res * a % m;
        a = a * a % m;
        b >>= 1;
    }
    return res;
}

void sol()
{
    ll res = 0;
    ll ptr = 0;
    ll mod = 1e9 + 7;
    while (k)
    {
        if (k & 1 == 1)
        {
            res = (res + binpow(n, ptr, mod)) % mod;
        }
        k >>= 1;
        ptr++;
    }
    cout << res << en;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    FAST;
    int T = 1;
    cin >> T;
    while (T--)
    {
        input();
        sol();
    }
    return 0;
}