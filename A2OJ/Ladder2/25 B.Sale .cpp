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
int sol(vi arr, int n, int k)
{
    sort(arr.begin(), arr.end());
    int ptr = 0;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0 && ptr < k)
        {
            ans += (arr[i] * -1);
            ptr++;
        }
        else
            break;
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