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
long long sol(vi arr, long long n, long long k)
{
    priority_queue<long long, vi, greater<long long>> pq;
    for (auto val : arr)
        pq.push(val);
    bool chance = 1;
    long long ans = 0;
    while (k > 0 && pq.size() != 0)
    {
        long long curr = pq.top();
        pq.pop();
        if (k >= curr)
        {
            k -= curr;
            ans++;
        }
        else if (chance && k < curr)
        {
            long long new_curr = curr / 2;
            if (curr % 2 != 0)
                new_curr++;
            if (k >= new_curr)
            {
                k -= new_curr;
                ans++;
            }
            else
                break;
        }
        else
        {
            break;
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
        long long N, k;
        cin >> N >> k;
        vi arr(N);
        for (long long i = 0; i < N; i++)
        {
            cin >> arr[i];
        }
        cout << sol(arr, N, k) << en;
    }
    return 0;
}