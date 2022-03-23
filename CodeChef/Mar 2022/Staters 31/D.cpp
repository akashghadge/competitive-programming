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
ll sumN(long long num)
{
    return (num * (num + 1)) / 2;
}
long long sol(vi arr, long long n)
{
    ll lower = 1;
    ll upper = 2;
    ll ans = 0;
    while (upper <= 1e10)
    {
        long long curr = 0;
        for (auto val : arr)
        {
            if (lower <= val && val < upper)
            {
                curr++;
            }
        }
        ans += sumN(curr - 1);
        lower <<= 1;
        upper = lower << 1;
    }
    return ans;
}

long long temp(vi arr, ll n)
{
    ll ans = 0;
    for (long long i = 0; i < n; i++)
    {
        for (long long j = i + 1; j < n; j++)
        {
            if ((arr[i] ^ arr[j]) < (arr[i] & arr[j]))
            {
                // cout << arr[i] << " " << arr[j] << en;
                ans++;
            }
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
    FAST;
    long long T;
    cin >> T;
    while (T--)
    {
        long long N;
        cin >> N;
        vi arr(N);
        for (long long i = 0; i < N; i++)
        {
            cin >> arr[i];
        }
        cout << sol(arr, N) << en;
        // cout << temp(arr, N) << en;
    }
    return 0;
}