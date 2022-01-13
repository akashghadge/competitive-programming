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
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    FAST;
    int k, l, m, n, d;
    cin >> k >> l >> m >> n >> d;
    vi arr(d + 1, 1);
    int c = 0;
    for (int i = 1; i <= d; i++)
    {
        if (i % k == 0)
            arr[i] = false;
        if (i % l == 0)
            arr[i] = false;
        if (i % m == 0)
            arr[i] = false;
        if (i % n == 0)
            arr[i] = false;
        if (arr[i] == 1)
        {
            c++;
        }
    }
    cout << d - c << en;
    return 0;
}