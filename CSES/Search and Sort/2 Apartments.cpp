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
/*input sections*/
int n, m, k;
vi req;
vi apartments;
void input()
{
    cin >> n >> m >> k;
    req.resize(n, 0);
    apartments.resize(m, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> req[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> apartments[i];
    }
}
void sol()
{
    sort(req.begin(), req.end());
    sort(apartments.begin(), apartments.end());
    int ans = 0;
    for (int i = 0, j = 0; i < n && j < m;)
    {
        if (req[i] - k <= apartments[j] && apartments[j] <= req[i] + k)
        {
            i++;
            j++;
            ans++;
        }
        else if (apartments[j] < req[i] - k)
        {
            j++;
        }
        else
        {
            i++;
        }
    }
    cout << ans << en;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    FAST;
    int T = 1;
    // cin >> T;
    while (T--)
    {
        input();
        sol();
    }
    return 0;
}