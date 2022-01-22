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
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    FAST;
    int n, k;
    cin >> n >> k;
    v<pii> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i].first;
        cin >> arr[i].second;
    }
    sort(arr.begin(), arr.end(),
         [](pii p1, pii p2)
         {
             if (p1.first == p2.first)
                 return p1.second < p2.second;
             return p1.first > p2.first;
         });

    pii p = arr[k - 1];
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (p == arr[i])
            ans++;
    }
    cout << ans << en;
    return 0;
}