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
bool valid(v<string> arr, int row, int col)
{
    int b = 0;
    int w = 0;
    if (arr[row][col] == '.')
        w++;
    else
        b++;
    if (arr[row + 1][col] == '.')
        w++;
    else
        b++;
    if (arr[row][col + 1] == '.')
        w++;
    else
        b++;
    if (arr[row + 1][col + 1] == '.')
        w++;
    else
        b++;

    if (w >= 3)
        return true;
    if (b >= 3)
        return true;
    return false;
}
bool sol(v<string> arr, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (valid(arr, i, j))
                return true;
        }
    }
    return false;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    FAST;
    int n = 4;
    v<string> arr(4);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sol(arr, n) ? cout << "YES" : cout << "NO";
    cout << en;

    return 0;
}