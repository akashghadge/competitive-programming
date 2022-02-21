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
int sol(vi arr, int n, int k)
{
    vi ans(k, 0);
    for (int i = 0; i < k; i++)
    {
        ans[i] = i + 1;
    }

    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            reverse(ans.begin(), ans.begin() + arr[i]);
        }
        else
        {
            reverse(ans.begin() + arr[i - 1], ans.begin() + arr[i]);
        }
    }
    reverse(ans.begin() + arr[n - 1], ans.end());
    for (auto val : ans)
    {
        cout << val << " ";
    }
    cout << en;
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
        int N, k;
        cin >> k >> N;
        vi arr(N);
        for (int i = 0; i < N; i++)
        {
            cin >> arr[i];
        }
        sol(arr, N, k);
    }
    return 0;
}