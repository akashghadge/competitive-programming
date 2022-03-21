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
int sol(vii arr, int n, int total, int size)
{
    vi ans(total, -1);
    for (int i = 0; i < n; i++)
    {
        set<int> used = {1, 2, 3};
        for (int j = 0; j < size; j++)
            if (ans[arr[i][j]] != -1)
                used.erase(ans[arr[i][j]]);

        for (int j = 0; j < size; j++)
        {
            if (ans[arr[i][j]] == -1)
                ans[arr[i][j]] = *used.begin(), used.erase(*used.begin());
        }
    }
    for (auto val : ans)
        cout << val << " ";
    cout << en;
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
    int size = 3;
    vii arr(m, vi(size));
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < size; j++)
        {
            int temp;
            cin >> temp;
            arr[i][j] = temp - 1;
        }
    }
    sol(arr, m, n, size);
    return 0;
}