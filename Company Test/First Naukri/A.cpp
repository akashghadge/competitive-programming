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
void dfs(vector<vector<int>> matrix, vector<vector<int>> &visited, int row, int col, int n, int m, int *ans)
{
    if (row < 0 || col < 0 || row >= n || col >= m || visited[row][col] || matrix[row][col] == 0)
        return;
    *ans = *ans + 1;
    visited[row][col] = true;
    dfs(matrix, visited, row + 1, col, n, m, ans);
    dfs(matrix, visited, row - 1, col, n, m, ans);
    dfs(matrix, visited, row, col + 1, n, m, ans);
    dfs(matrix, visited, row, col - 1, n, m, ans);
}
int biggestNeighbourSize(vector<vector<int>> matrix)
{
    // Write your code here
    int n = matrix.size();
    int m = matrix[0].size();
    vector<vector<int>> visited(n, vector<int>(m, 0));
    int final_ans = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            int ans = 0;
            dfs(matrix, visited, i, j, n, m, &ans);
            final_ans = max(ans, final_ans);
        }
    }
    return final_ans;
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