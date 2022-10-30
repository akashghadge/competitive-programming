#include <bits/stdc++.h>
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n, m;
    cin >> n >> m;
    vector<vector<int>> arr(n, vector<int>(m, 0));
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> arr[i][j];

    pair<int, int> src;
    pair<int, int> dest;
    cin >> src.first >> src.second;
    cin >> dest.first >> dest.second;
    queue<pair<int, pair<int, int>>> q;
    q.push({0, src});
    bool f = 0;
    vector<vector<int>> vis(n, vector<int>(m, 0));
    int ans = INT_MAX;
    while (q.size())
    {
        auto curr = q.front();
        q.pop();
        auto cord = curr.second;
        if (cord.first < 0 or cord.second < 0 or cord.first >= n or cord.second >= m or vis[cord.first][cord.second] or arr[cord.first][cord.second] == 0)
            continue;
        vis[cord.first][cord.second] = 1;
        if (cord.first == dest.first and cord.second == dest.second)
        {
            f = 1;
            ans = min(ans, curr.first);
        }
        q.push({curr.first + 1, {cord.first + 1, cord.second}});
        q.push({curr.first + 1, {cord.first - 1, cord.second}});
        q.push({curr.first + 1, {cord.first, cord.second - 1}});
        q.push({curr.first + 1, {cord.first, cord.second + 1}});
    }
    if (f)
        cout << ans << endl;
    else
        cout << -1 << endl;
}