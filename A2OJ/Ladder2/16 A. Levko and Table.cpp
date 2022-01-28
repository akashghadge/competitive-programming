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
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    FAST;
    int n, k;
    cin >> n >> k;
    vii arr(n, vi(n, 0));
    for (int i = 0; i < n; i++)
    {
        arr[i][i] = k;
    }

    for (auto li : arr)
    {
        for (auto val : li)
        {
            cout << val << " ";
        }
        cout << en;
    }

    return 0;
}