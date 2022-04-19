#include <bits/stdc++.h>
using namespace std;
#define en "\n"
#define ll long long
#define v vector
#define vi vector<long long>
#define vll vector<ll>
#define vii vector<vector<long long>>
#define pii pair<long long, long long>
#define vpi vector<pair<long long, long long>>
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
long long sol(vi arr, long long n)
{
    ll ans = INT64_MAX;
    for (long long i = 0; i < n; i++)
    {
        ll cmin = 0;
        ll loc = 0;
        for (long long j = i - 1; j >= 0; j--)
        {
            loc += cmin / arr[j] + 1;
            cmin = arr[j] * (cmin / arr[j] + 1);
        }
        ll cmax = 0;
        for (long long j = i + 1; j < n; j++)
        {
            loc += cmax / arr[j] + 1;
            cmax = arr[j] * (cmax / arr[j] + 1);
        }
        ans = min(ans, loc);
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
    long long N;
    cin >> N;
    vi arr(N);
    for (long long i = 0; i < N; i++)
    {
        cin >> arr[i];
    }
    cout << sol(arr, N) << en;
    return 0;
}