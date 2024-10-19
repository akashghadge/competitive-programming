/**
 *    author:  tourist
 *    created: 05.10.2024 23:06:32
 **/
#include <bits/stdc++.h>

using namespace std;

#ifdef LOCAL
#include "algo/debug.h"
#else
#define debug(...) 42
#endif

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt;
    cin >> tt;
    while (tt--)
    {
        int n, x;
        cin >> n >> x;
        vector<int64_t> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        map<int, int64_t> mp;
        for (int64_t &v : a)
        {
            int r = v % x;
            auto it = mp.find(r);
            if (it != mp.end())
            {
                v = max(v, it->second + x);
                it->second = v;
            }
            else
            {
                mp[r] = v;
            }
        }
        sort(a.begin(), a.end());
        if (a[0] > 0)
        {
            cout << 0 << '\n';
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                if (i == n - 1 || a[i + 1] - a[i] > 1)
                {
                    cout << a[i] + 1 << '\n';
                    break;
                }
            }
        }
    }
    return 0;
}
