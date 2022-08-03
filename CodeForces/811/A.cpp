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
int n, h, m;
vpi arr;
void input()
{
    cin >> n >> h >> m;
    arr.resize(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i].first >> arr[i].second;
    }
}
void sol()
{
    int sleep = h * 60 + m;
    int mn = INT_MAX;
    for (auto val : arr)
    {
        int curr = val.first * 60 + val.second;
        int time;
        if (curr - sleep < 0)
        {
            time = curr - sleep + (60 * 24);
        }
        else
        {
            time = curr - sleep;
        }
        mn = min(time, mn);
    }
    cout << mn / 60 << " " << mn % 60 << en;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    FAST;
    int T = 1;
    cin >> T;
    while (T--)
    {
        input();
        sol();
    }
    return 0;
}