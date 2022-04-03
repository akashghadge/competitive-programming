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
int sol(vi arr, int n, vi have, int m)
{
    int i = 0, j = 0;
    while (i < n && j < m)
    {
        if (arr[i] <= have[j])
        {
            i++;
        }
        j++;
    }
    return n - i;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    FAST;
    int N, m;
    cin >> N >> m;
    vi arr(N);
    vi have(m);
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }
    for (int j = 0; j < m; j++)
    {
        cin >> have[j];
    }
    cout << sol(arr, N, have, m) << en;
    return 0;
}