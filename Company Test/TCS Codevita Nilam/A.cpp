/*

*/
#include <bits/stdc++.h>
using namespace std;
int cn = 0;
void dfs(vector<vector<int>> &arr, int n, int m, int x, int y, int r, int c, int dist, int two, int three, vector<pair<int, int>> &ans, vector<vector<int>> &vis)
{

    if (x < 0 or y < 0 or x >= n or y >= m or vis[x][y] or arr[x][y] == 1 or two > 2)
        return;
    cn++;
    if (x == r and y == c)
    {
        if (two <= 2)
        {
            ans.push_back({three, dist});
        }
        return;
    }
    vis[x][y] = true;
    int isTwo = (arr[x][y] == 2);
    int isThree = (arr[x][y] == 3);
    dfs(arr, n, m, x + 1, y, r, c, dist + 1, two + isTwo, three + isThree, ans, vis);
    dfs(arr, n, m, x - 1, y, r, c, dist + 1, two + isTwo, three + isThree, ans, vis);
    dfs(arr, n, m, x, y + 1, r, c, dist + 1, two + isTwo, three + isThree, ans, vis);
    dfs(arr, n, m, x, y - 1, r, c, dist + 1, two + isTwo, three + isThree, ans, vis);
    vis[x][y] = false;
}

int solve(vector<vector<int>> &arr, int n, int m, pair<int, int> &src, pair<int, int> &dest)
{
    if (src.first == dest.first and src.second == dest.second)
        return 0;

    vector<vector<int>> vis(n, vector<int>(m, 0));
    vector<pair<int, int>> anss;

    dfs(arr, n, m, src.first, src.first, dest.first, dest.second, 0, 0, 0, anss, vis);

    if (anss.size() == 0)
        return -1;
    sort(anss.begin(), anss.end());
    return anss[0].second;
}
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
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    pair<int, int> src, dest;
    cin >> src.first >> src.second;
    cin >> dest.first >> dest.second;
    int ans = solve(arr, n, m, src, dest);
    if (ans == -1)
    {
        cout << "STUCK" << endl;
    }
    else
        cout << ans << endl;
    cout << cn;
}