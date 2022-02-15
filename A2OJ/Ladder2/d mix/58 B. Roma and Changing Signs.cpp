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
    sort(arr.begin(), arr.end());
    for (int i = 0; i < n; i++)
    {
        if (k == 0)
            break;
        if (arr[i] < 0)
        {
            arr[i] *= -1;
            k--;
        }
    }
    sort(arr.begin(), arr.end());
    arr[0] *= (k % 2 == 0) ? 1 : -1;

    return accumulate(arr.begin(), arr.end(), 0);
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