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
int n;
vpi arr;
void input()
{
    cin >> n;
    arr.resize(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i].first >> arr[i].second;
    }
}
void sol()
{
    int mxx = 0;
    int mnx = 0;
    int mny = 0;
    int mxy = 0;
    for (auto val : arr)
    {
        if (val.first < 0)
        {
            mnx = max(abs(val.first), mnx);
        }
        else
        {
            mxx = max(val.first, mxx);
        }
        if (val.second < 0)
        {
            mny = max(abs(val.second), mny);
        }
        else
        {
            mxy = max(val.second, mxy);
        }
    }
    cout << (mxy * 2) + mxx * 2 + mnx * 2 + mny * 2 << en;
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