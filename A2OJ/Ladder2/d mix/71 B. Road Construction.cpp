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
bool safe(int curr, vpi &arr, int n)
{
    for (auto p : arr)
    {
        if (p.first == curr || p.second == curr)
            return false;
    }
    return true;
}
int sol(vpi arr, int n, int cities)
{
    int best_node = -1;
    for (int i = 1; i <= cities; i++)
    {
        if (safe(i, arr, n))
        {
            best_node = i;
            break;
        }
    }
    cout << cities - 1 << en;
    for (int i = 1; i <= cities; i++)
    {
        if (best_node != i)
            cout << best_node << " " << i << en;
    }
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
    vpi arr(m);
    for (int i = 0; i < m; i++)
    {
        cin >> arr[i].first >> arr[i].second;
    }

    sol(arr, m, n);

    return 0;
}