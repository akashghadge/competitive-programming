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
int safePos(int n, int k)
{
    // code here
    if (n == 1)
    {
        return 1;
    }
    return (safePos(n - 1, k) + k - 1) % n + 1;
}
int sol(int m, int x)
{
    for (int i = 1; i <= x; i++)
    {
        cout << safePos(i, m) << en;
    }
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
        int m, x;
        cin >> m >> x;
        sol(m, x);
    }

    return 0;
}