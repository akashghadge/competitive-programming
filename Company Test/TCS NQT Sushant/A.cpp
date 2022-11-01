#include <bits/stdc++.h>
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n, k;
    cin >> n >> k;
    vector<int> arr(n, 0);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    priority_queue<int> pq;
    for (auto val : arr)
        pq.push(val);
    int ans = 0;
    while (pq.size() >= k)
    {
        vector<int> temp;
        int i = 0;
        while (pq.size() and i < k)
            temp.push_back(pq.top()), pq.pop(), i++;
        for (auto val : temp)
        {
            if (val - temp[k - 1] != 0)
                pq.push(val - temp[k - 1]), ans += val;
        }
    }
}