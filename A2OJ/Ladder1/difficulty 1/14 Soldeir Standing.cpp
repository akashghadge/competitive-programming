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
    int mn = 0;
    int mx = 0;
    int temp = INT_MIN;
    // find max element close the start
    for (int i = 0; i < n; i++)
    {
        if (temp < arr[i])
        {
            temp = arr[i];
            mx = i;
        }
    }
    temp = INT_MAX;
    // find min elment close the end
    for (int i = 0; i < n; i++)
    {
        if (temp >= arr[i])
        {
            temp = arr[i];
            mn = i;
        }
    }

    if (mn < mx)
        return (mx + (n - mn - 1)) - 1;
    else
        return (mx + (n - mn - 1));
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