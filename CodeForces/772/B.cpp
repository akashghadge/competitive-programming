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
int sol(vi arr, int n)
{
    vector<bool> local_max(n, true);
    local_max[0] = false;
    local_max[n - 1] = false;
    for (int i = 1; i < n - 1; i++)
    {
        if (arr[i - 1] < arr[i] && arr[i] > arr[i + 1])
            local_max[i] = true;
        else
            local_max[i] = false;
    }
    int ans = 0;
    for (int i = 0; i < n;)
    {
        if (local_max[i])
        {
            if (i + 2 < n && local_max[i + 2])
            {
                arr[i + 1] = max(arr[i], arr[i + 2]);
                ans++;
                i += 3;
            }
            else
            {
                arr[i] = max(arr[i - 1], arr[i + 1]);
                ans++;
                i += 2;
            }
        }
        else
            i++;
    }
    cout << ans << en;
    for (auto val : arr)
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
        int N;
        cin >> N;
        vi arr(N);
        for (int i = 0; i < N; i++)
        {
            cin >> arr[i];
        }
        sol(arr, N);
    }
    return 0;
}