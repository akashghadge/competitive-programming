#include <bits/stdc++.h>
using namespace std;
#define en "\n"
#define vi vector<int>
#define vii vector<vector<int>>
#define vll vector<ll>
#define ll long long
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
int sol(vi arr, int n, int k)
{
    if (n == 1 && k == 1)
        return 1;
    if (k == 1)
    {
        return min_element(arr.begin(), arr.end()) - arr.begin() + 1;
    }
    int w = 0;
    for (int i = 0; i < k; i++)
        w += arr[i];
    int mn = w;
    int ans = 1;
    for (int i = k; i < n; i++)
    {
        w -= arr[i - k];
        w += arr[i];
        if (mn > w)
        {
            ans = i - k + 2;
            mn = w;
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
    int N, k;
    cin >> N;
    cin >> k;
    vi arr(N);
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }
    cout << sol(arr, N, k) << en;
    return 0;
}