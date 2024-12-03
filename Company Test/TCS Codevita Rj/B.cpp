#include <bits/stdc++.h>
using namespace std;

const vector<pair<int, int>> dirArr = {{-1, 0}, {0, 1}, {1, 0}, {0, -1}};

int changeDir(int way, char shape)
{
    if (shape == '/')
    {
        if (way == 0)
            return 1;
        if (way == 1)
            return 0;
        if (way == 2)
            return 3;
        if (way == 3)
            return 2;
    }
    else if (shape == '\\')
    {
        if (way == 0)
            return 3;
        if (way == 1)
            return 2;
        if (way == 2)
            return 1;
        if (way == 3)
            return 0;
    }
    return way;
}

int dfs(int x, int y, int way, vector<string> &arrTemp, vector<vector<vector<bool>>> &vis)
{
    int m = arrTemp.size(), n = arrTemp[0].size();
    int count = 0;

    while (true)
    {
        if (vis[x][y][way])
            return count;
        vis[x][y][way] = true;
        count++;

        x += dirArr[way].first;
        y += dirArr[way].second;

        if (x < 0 || x >= m || y < 0 || y >= n)
            break;

        if (arrTemp[x][y] == '/' || arrTemp[x][y] == '\\')
            way = changeDir(way, arrTemp[x][y]);
    }
    return 0;
}

int main()
{
    int m, n;
    cin >> m >> n;
    vector<string> arrTemp(m);
    for (int i = 0; i < m; i++)
        cin >> arrTemp[i];

    vector<vector<vector<bool>>> vis(m, vector<vector<bool>>(n, vector<bool>(4, false)));
    int maxLoop = 0;

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            for (int way = 0; way < 4; way++)
            {
                if (!vis[i][j][way])
                    maxLoop = max(maxLoop, dfs(i, j, way, arrTemp, vis));
            }
        }
    }

    cout << maxLoop << endl;
    return 0;
}
