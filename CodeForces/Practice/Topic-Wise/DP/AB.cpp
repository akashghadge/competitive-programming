#include <bits/stdc++.h>
using namespace std;
bool pre(vector<int> &a, int n, int m, int mid)
{
    vector<int> cn(m + 1, 0);
    vector<int> t(m + 1, mid);
    t[0] = 0;
    for (auto val : a)
        cn[val]++;
    // serve all cached requests
    for (int i = 1; i <= m; i++)
    {
        t[i] -= min(cn[i], mid);
        cn[i] -= min(cn[i], mid);
    }
    int curr = 0;
    for (int i = 1; i <= m; i++)
    {
        curr += t[i] / 2;
    }
    for (int i = 1; i <= m; i++)
    {
        curr -= cn[i];
    }
    return curr >= 0;
}

int fun(int n, vector<int> &a)
{
    int m = a.size();
    int lo = 1;
    int hi = 1e9 + 1;
    int ans = 0;
    while (lo <= hi)
    {
        int mid = lo + (hi - lo) / 2;
        if (pre(a, m, n, mid))
        {
            ans = mid;
            hi = mid - 1;
        }
        else
        {
            lo = mid + 1;
        }
    }
    return ans;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n, m;
    cin >> n >> m;
    vector<int> a(m, 0);
    for (int i = 0; i < m; i++)
        cin >> a[i];

    for (int i = 1; i <= 4; i++)
    {
    }
    // cout << pre(a, m, n, 2) << endl;
    cout << fun(n, a) << endl;
}