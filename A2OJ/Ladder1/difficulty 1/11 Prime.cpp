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
vi prime(51, 1);
int init()
{
    prime[0] = prime[1] = 0;
    for (int i = 2; i < 51; i++)
    {
        for (int j = i + i; j < 51; j += i)
        {
            prime[j] = 0;
        }
    }
}
int sol(int n, int m)
{
    init();
    for (int i = n + 1; i <= m; i++)
    {
        if (prime[i])
        {
            if (i != m)
                return false;
            else
                return true;
        }
    }
    return false;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    FAST;
    int n, m;
    cin >> n >> m;
    sol(n, m) ? cout << "YES" : cout << "NO";
    cout << en;
    return 0;
}