#include <bits/stdc++.h>
using namespace std;
#define pii pair<int, int>
#define vpi vector<pair<int, int>>
int solve(vpi &arr, int n)
{
    sort(arr.begin(), arr.end(), [](pii &f, pii &s)
         {if(f.first==s.first)
            return f.second<s.second;
            return f.first>s.first; });
    int mx = 0;
    int ans = 0;
    int total_mx = arr[0].first;
    for (int i = 0; i < n; i++)
    {
        if (arr[i].second >= mx or total_mx == arr[i].first)
        {
            mx = arr[i].second;
            ans++;
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
    int n;
    cin >> n;
    vpi arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i].first;
        cin >> arr[i].second;
    }
    cout << solve(arr, n) << endl;
}