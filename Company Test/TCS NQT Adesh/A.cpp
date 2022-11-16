#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n, q;
    cin >> n >> q;
    vector<pair<int, int>> que(q);
    for (int i = 0; i < q; i++)
        cin >> que[i].first >> que[i].second;
    vector<int> arr(n, 0);
    for (int i = 0; i < q; i++)
    {
        int id = (i * que[i].first) + que[i].second;
        cout << id << endl;
        if (id - 1 >= 0 and id - 1 < n)
            arr[id - 1]++;
    }
    for (auto val : arr)
        cout << val << " ";
    cout << endl;
}