#include <bits/stdc++.h>
using namespace std;
#define en "\n"
#define vi vector<int>
#define vii vector<vector<int>>
#define vll vector<ll>
#define ll long long
#define v vector
#define pii pair<int, int>
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
void sol(int n, int k, int x)
{
    if (k < x)
    {
        cout << -1 << en;
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            cout << i % x << " ";
        }
        cout << en;
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
        int N, K, X;
        cin >> N >> K >> X;
        sol(N, K, X);
    }
    return 0;
}