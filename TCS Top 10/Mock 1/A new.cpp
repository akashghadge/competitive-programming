#include <bits/stdc++.h>
using namespace std;
#define en "\n"
#define ll long long
#define v vector
#define vi vector<int>
#define vll vector<ll>
#define vii vector<vector<int>>
#define ii pair<int, int>
#define vpi vector<pair<int, int>>

/*input sections*/

void sol()
{
    ll n, m, i, j, r, c, x, y;
    cin >> n >> m;
    vii arr(n, vi(m, 0));
    for (int i = 0; i < n; i++)
    {
        // string str;
        // cin >> str;
        // cout << str << endl;
        for (int j = 0; j < m; j++)
        {
            // arr[i][j] = str[j] - '0';
            cin >> arr[i][j];
        }
    }
    vii vis(n, vi(m, 0));
    cin >> i >> j >> r >> c >> x >> y;

    // for (auto row : arr)
    // {
    //     for (auto val : row)
    //         cout << val << " ";
    //     cout << endl;
    // }
    queue<pair<ii, ll>> q;
    q.push({{i, j}, 0});
    while (q.size())
    {
        auto val = q.front();
        ll cx = val.first.first;
        ll cy = val.first.second;
        ll ct = val.second;
        q.pop();
        if (cx == r and cy == c)
        {
            cout << ct << endl;
            return;
        }
        if (cx < 0 || cy < 0 || cy >= m || cx >= n || arr[cx][cy] || vis[cx][cy])
            continue;
        vis[cx][cy] = 1;
        q.push({{cx + x, cy + y}, ct + 1});
        q.push({{cx - y, cy + x}, ct + 1});
        q.push({{cx - x, cy - y}, ct + 1});
        q.push({{cx + y, cy - x}, ct + 1});
    }
    return;
}
int main()
{
    int T = 1;
    while (T--)
    {
        sol();
    }
    return 0;
}