#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int x, y, dist, two, three;
    Node(int x, int y, int dist, int two, int three) : x(x), y(y), dist(dist), two(two), three(three) {}
};

int bfs(vector<vector<int>> &arr, int n, int m, pair<int, int> &src, pair<int, int> &dest)
{
    queue<Node> q;
    vector<vector<int>> vis(n, vector<int>(m, 0));
    vector<pair<int, int>> ans;
    q.push(Node(src.first, src.second, 0, 0, 0));
    vis[src.first][src.second] = true;

    vector<pair<int, int>> directions = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};

    while (!q.empty())
    {
        Node current = q.front();
        q.pop();
        if (current.x == dest.first && current.y == dest.second && current.two <= 2)
        {
            ans.push_back({current.three, current.dist});
            cout << "This is Answer" << endl;
        }
        cout << current.x << current.y << current.dist << current.three << current.two << endl;

        for (auto &dir : directions)
        {
            int newX = current.x + dir.first;
            int newY = current.y + dir.second;

            if (newX >= 0 && newY >= 0 && newX < n && newY < m && !vis[newX][newY] && arr[newX][newY] != 1 && current.two <= 2)
            {
                vis[newX][newY] = true;
                int isTwo = (arr[newX][newY] == 2);
                int isThree = (arr[newX][newY] == 3);
                q.push(Node(newX, newY, current.dist + 1, current.two + isTwo, current.three + isThree));
            }
        }
    }
    if (ans.size() == 0)
        return -1;
    sort(ans.begin(), ans.end());
    return ans[0].second;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n, m;
    cin >> n >> m;
    vector<vector<int>> arr(n, vector<int>(m));
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            cin >> arr[i][j];
        }
    }
    pair<int, int> src, dest;
    cin >> src.first >> src.second >> dest.first >> dest.second;

    int ans = bfs(arr, n, m, src, dest);

    if (ans == -1)
    {
        cout << "STUCK" << endl;
    }
    else
    {
        cout << ans << endl;
    }
    return 0;
}
