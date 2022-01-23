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
class Node
{
public:
    int row;
    int col;
    int dist;
    int price;
    Node(int r, int c, int d, int p)
    {
        row = r;
        col = c;
        dist = d;
        price = p;
    }
};
void util(vector<vector<int>> &grid, vector<vector<int>> &visited, int row, int col, int dist, int n, int m, vector<int> &pricing, vector<Node *> &res)
{
    if (row < 0 || col < 0 || row >= n || col >= m || visited[row][col] || grid[row][col] == 0)
    {
        return;
    }
    visited[row][col] = 1;
    // if not one and price in range
    if (grid[row][col] != 1 && pricing[0] <= grid[row][col] && grid[row][col] <= pricing[1])
    {
        res.push_back(new Node(row, col, dist, grid[row][col]));
    }
    util(grid, visited, row + 1, col, dist + 1, n, m, pricing, res);
    util(grid, visited, row - 1, col, dist + 1, n, m, pricing, res);
    util(grid, visited, row, col + 1, dist + 1, n, m, pricing, res);
    util(grid, visited, row, col - 1, dist + 1, n, m, pricing, res);
    visited[row][col] = 0;
}
vector<vector<int>> highestRankedKItems(vector<vector<int>> &grid, vector<int> &pricing, vector<int> &start, int k)
{
    int n = grid.size();
    int m = grid[0].size();
    vector<vector<int>> visited(n, vector<int>(m, false));
    vector<Node *> res;
    util(grid, visited, start[0], start[1], 0, n, m, pricing, res);
    for (auto val : res)
    {
        cout << val->col << " " << val->row << " " << val->dist << " " << val->price << en;
    }

    // work of k
    // work of k
    sort(res.begin(), res.end(), [](Node *n1, Node *n2)
         {
             if (n1->dist == n2->dist)
             {
                 if (n1->price == n2->price)
                 {
                     if (n1->row == n2->row)
                     {
                         return n1->col > n2->col;
                     }
                     return n1->row > n2->col;
                 }
                 return n1->price > n2->price;
             }
             return n1->dist > n2->dist;
         });
    vector<vector<int>> ans;
    for (int i = 0; i < k; i++)
    {
        vector<int> temp = {res[i]->row, res[i]->col};
        ans.push_back(temp);
    }
    return ans;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    FAST;

    return 0;
}