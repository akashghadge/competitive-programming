#include <bits/stdc++.h>
using namespace std;
#define en "\n"
#define vi vector<int>
#define vii vector<vector<int>>
#define vll vector<ll>
#define ll long long
#define v vector
#define pii pair<int, int>
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
int sol(v<pii> arr, int n, int k)
{
    sort(arr.begin(), arr.end(),
         [](pii p1, pii p2)
         {
             if (p1.first == p2.first)
                 return p1.second > p2.second;
             return p1.first < p2.first;
         });

    for (auto val : arr)
    {
        if (val.first <= k)
            k += val.second;
        else
            break;
    }
    return k;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    FAST;
    int T;
    cin >> T;
    while (T--)
    {
        int n, k;
        cin >> n >> k;
        v<pii> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i].first;
        }
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i].second;
        }

        cout << sol(arr, n, k) << en;
    }
    return 0;
}