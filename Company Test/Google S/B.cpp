#include <bits/stdc++.h>
using namespace std;

const vector<pair<int, int>> dirs = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
const vector<char> dir_chars = {'U', 'D', 'L', 'R'};

int minCost(vector<vector<char>> &grid, pair<int, int> src, pair<int, int> dest)
{
    int rows = grid.size(), cols = grid[0].size();
    vector<vector<int>> cost(rows, vector<int>(cols, INT_MAX));
    cost[src.first][src.second] = 0;

    priority_queue<tuple<int, int, int>, vector<tuple<int, int, int>>, greater<>> pq;
    pq.push({0, src.first, src.second});

    while (!pq.empty())
    {
        auto [cur_cost, x, y] = pq.top();
        pq.pop();

        if (make_pair(x, y) == dest)
            return cur_cost;

        for (int i = 0; i < 4; ++i)
        {
            int nx = x + dirs[i].first, ny = y + dirs[i].second;
            if (nx >= 0 && nx < rows && ny >= 0 && ny < cols)
            {
                int new_cost = cur_cost + (grid[x][y] != dir_chars[i]);
                if (new_cost < cost[nx][ny])
                {
                    cost[nx][ny] = new_cost;
                    pq.push({new_cost, nx, ny});
                }
            }
        }
    }
    return -1;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    vector<vector<char>> grid = {
        {'R', 'R', 'R', 'R'},
        {'R', 'R', 'R', 'R'},
        {'R', 'R', 'R', 'R'},
        {'R', 'R', 'R', 'R'}};
    cout << "Minimum cost to reach destination: " << minCost(grid, {0, 0}, {3, 3}) << endl;
    return 0;
}