#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n, x, y;
    cin >> n;
    int mr = 0, mw = 0, cnt = 0, j = 0;
    vector<vector<int>> arr;
    while (j < n)
    {
        cin >> x >> y;
        arr.push_back({x, y});
        j++;
    }

    for (int i = 0; i < n; i++)
    {
        bool f = 0;
        for (int j = 0; j < n; j++)
        {
            if (i != j && arr[i][0] < arr[j][0] && arr[i][1] < arr[j][1])
            {
                f = 1;
                break;
            }
        }
        if (!f)
            cnt++;
    }

    cout << cnt << endl;
    return 0;
}