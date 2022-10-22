#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<vector<int>> arr(n, vector<int>(n, 0));
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> arr[i][j];
    int sum = 0;
    for (int i = 0; i < n; i++)
        sum += arr[i][i];
    for (int i = 0; i < n; i++)
        sum += arr[i][n - i - 1];
    if (n & 1)
        sum -= arr[n / 2][n / 2];
    cout << sum << endl;
}