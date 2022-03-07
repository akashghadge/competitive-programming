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
int mod = 1e9 + 7;
int minCost(vi arr)
{
    int cost = 0;
    int n = arr.size();
    sort(arr.begin(), arr.end());

    int K = arr[n / 2];
    for (int i = 0; i < n; ++i)
        cost += (abs(arr[i] - K) % mod);

    if (n % 2 == 0)
    {
        int tempCost = 0;

        K = arr[(n / 2) - 1];

        for (int i = 0; i < n; ++i)
            tempCost += (abs(arr[i] - K) % mod);

        cost = (min(cost, tempCost) % mod);
    }

    return cost;
}
int sol(vi arr, int n, int k)
{
    if (k == 0 || k == n)
        return 0;

    int op = 0;
    for (int i = 0; i < k; i++)
    {
        vi temp;
        int j = i;
        while (j < n)
        {
            temp.push_back(arr[j]);
            j += k;
        }
        op += (minCost(temp) % mod);
    }
    return op;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    FAST;
    int N, k;
    cin >> N >> k;
    vi arr(N);
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }
    cout << sol(arr, N, k) << en;
    return 0;
}