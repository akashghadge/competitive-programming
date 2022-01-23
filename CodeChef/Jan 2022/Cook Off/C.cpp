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
int lengthOfLIS(vector<int> &arr)
{
    // your code here
    int n = arr.size();
    vector<int> dp(n);
    dp[0] = 1;
    for (int i = 1; i < n; i++)
    {
        int max_sub_till_now = 0;
        for (int j = i - 1; j >= 0; j--)
        {
            if (arr[j] <= arr[i])
                max_sub_till_now = max(max_sub_till_now, dp[j]);
        }
        dp[i] = max_sub_till_now + 1;
    }
    return *max_element(dp.begin(), dp.end());
}
int sol(vi arr1, vi arr2, int n, int m)
{
    return lengthOfLIS(arr1) + lengthOfLIS(arr2);
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
        int N, M;
        cin >> N >> M;
        vi arr1(N);
        vi arr2(M);
        for (int i = 0; i < N; i++)
        {
            cin >> arr1[i];
        }
        for (int i = 0; i < M; i++)
        {
            cin >> arr2[i];
        }

        cout << sol(arr1, arr2, N, M) << en;
    }
    return 0;
}