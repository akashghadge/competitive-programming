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
vector<int> split(string str)
{
    vector<int> ans;
    stringstream ssss(str);
    string curr;
    // temp
    while (ssss >> curr)
    {
        ans.push_back(stoi(curr));
    }
    return ans;
}
bool out_of(int row, int col, int n, int m)
{
    if (row < 0 || col < 0 || row >= n || col >= m)
        return true;
    return false;
}
void rec(vii arr, int n, int m, int row, int col, int curr, int *min_cost, vii visited)
{
    if (out_of(row, col, n, m))
    {
        *min_cost = min(*min_cost, curr);
        return;
    }
    if (visited[row][col] || curr >= *min_cost)
        return;
    visited[row][col] = true;
    rec(arr, n, m, row - 1, col, curr + arr[row][col], min_cost, visited);
    rec(arr, n, m, row - 1, col + 1, curr + arr[row][col], min_cost, visited);
    rec(arr, n, m, row, col + 1, curr + arr[row][col], min_cost, visited);
    rec(arr, n, m, row + 1, col + 1, curr + arr[row][col], min_cost, visited);
    rec(arr, n, m, row + 1, col, curr + arr[row][col], min_cost, visited);
    rec(arr, n, m, row + 1, col - 1, curr + arr[row][col], min_cost, visited);
    rec(arr, n, m, row, col - 1, curr + arr[row][col], min_cost, visited);
    rec(arr, n, m, row - 1, col - 1, curr + arr[row][col], min_cost, visited);
}
int sol(vii arr, int n, int m)
{
    int min_cost = INT_MAX;
    int row = -1;
    int col = -1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] == 0)
            {
                row = i;
                col = j;
                break;
            }
        }
    }
    vii visited(n, vi(m, 0));
    rec(arr, n, m, row, col, 0, &min_cost, visited);
    return min_cost;
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
    string temp;
    getline(cin, temp);
    v<string> strs(n);
    for (int i = 0; i < n; i++)
    {
        getline(cin, strs[i]);
    }
    vii arr(n);
    for (int i = 0; i < n; i++)
    {
        arr[i] = split(strs[i]);
    }
    cout << sol(arr, n, m) << en;
    return 0;
}