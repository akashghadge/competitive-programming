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
vi prime(1299709 + 1, 1);
void init()
{
    prime[0] = 0;
    prime[1] = 0;
    for (int i = 2; i <= 1299709; i++)
    {
        for (int j = i + i; j <= 1299709; j += i)
        {
            prime[j] = 0;
        }
    }
}
void sol(int n)
{
    init();
    for (int i = 0; i <= 1299709; i++)
    {
        if (prime[i])
        {
            cout << i << " ";
            n--;
        }
        if (n == 0)
            break;
    }
    cout << en;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    FAST;
    int n;
    cin >> n;
    sol(n);
    return 0;
}