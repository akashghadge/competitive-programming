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
int sol(vi arr, int n)
{
    int mx = arr[0];
    int mn = arr[0];
    int ans = 0;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < mn)
        {
            mn = arr[i];
            ans++;
        }
        else if (arr[i] > mx)
        {
            mx = arr[i];
            ans++;
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
    int N;
    cin >> N;
    vi arr(N);
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }
    cout << sol(arr, N) << en;
    return 0;
}