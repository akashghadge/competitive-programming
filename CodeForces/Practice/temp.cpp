/*

*/

#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    pair<int, int> dfs(int i, int j, int n, int m, vector<vector<int>> &arr, vector<vector<int>> &vis, int par)
    {
        pair<int, int> curr;
        curr.first = 0;
        curr.second = 0;
        if (i < 0 or j < 0)
        {
            curr.first = 1;
            return curr;
        }
        if (i >= n or j >= m)
        {
            curr.second = 1;
            return curr;
        }
        if (vis[i][j] or par < arr[i][j])
            return curr;

        vis[i][j] = true;
        pair<int, int> d = dfs(i + 1, j, n, m, arr, vis, arr[i][j]);
        pair<int, int> r = dfs(i, j + 1, n, m, arr, vis, arr[i][j]);
        pair<int, int> u = dfs(i - 1, j, n, m, arr, vis, arr[i][j]);
        pair<int, int> l = dfs(i, j - 1, n, m, arr, vis, arr[i][j]);
        vis[i][j] = false;
        curr.first = d.first or r.first or u.first or l.first;
        curr.second = d.second or r.second or u.second or l.second;
        return curr;
    }
    vector<vector<int>> pacificAtlantic(vector<vector<int>> &arr)
    {
        int n = arr.size();
        int m = arr[0].size();
        vector<vector<int>> ans;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                // vector<vector<int>> vis(n,vector<int>(m,0));
                pair<int, int> res;
                // =dfs(i,j,n,m,arr,vis,arr[i][j]);
                if (res.first and res.second)
                {
                    vector<int> temp;
                    temp.push_back(res.first);
                    temp.push_back(res.second);
                    ans.push_back(temp);
                }
            }
        }
        return ans;
    }
};
int main()
{
}