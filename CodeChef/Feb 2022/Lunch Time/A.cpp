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
    ll temp = 0;
    long long sum = accumulate(arr.begin(), arr.end(), temp);
    long long curr = 0;
    long long min_value = INT64_MAX;
    for (long long i = 0; i < n; i++)
    {
        curr += arr[i];
        sum -= arr[i];
        min_value = min(min_value, max(sum, curr));
    }
    return min_value;
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
    }
    return 0;
}