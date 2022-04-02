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
int sol(vpi &z, vpi &x, int p, int q, int l, int r)
{
    int n = 1005;
    vi timeline(n, 0);
    for (auto val : z)
    {
        for (int i = val.first; i <= val.second; i++)
        {
            timeline[i] = 1;
        }
    }

    int ans = 0;
    for (int delta = l; delta <= r; delta++)
    {
        bool flag = false;
        for (auto curr_slot : x)
        {
            auto after_delta = curr_slot;
            after_delta.first += delta;
            after_delta.second += delta;
            if (after_delta.first > 1000)
                continue;
            if (after_delta.second > 1000)
                after_delta.second = 1000;
            for (int check = after_delta.first; check <= after_delta.second; check++)
            {
                if (timeline[check])
                {
                    flag = true;
                    break;
                }
            }
            if (flag)
                break;
        }
        if (flag)
            ans++;
    }
    return ans;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    FAST;
    int p, q, l, r;
    cin >> p >> q >> l >> r;
    vpi z(p);
    for (int i = 0; i < p; i++)
    {
        cin >> z[i].first >> z[i].second;
    }
    vpi x(q);
    for (int i = 0; i < q; i++)
    {
        cin >> x[i].first >> x[i].second;
    }
    cout << sol(z, x, p, q, l, r) << en;

    return 0;
}