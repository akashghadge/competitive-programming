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
/*input sections*/
int n, x;
vi arr;
void input()
{
    cin >> n >> x;
    arr.resize(n, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}
void sol()
{
    sort(arr.begin(), arr.end());
    int i = 0, j = n - 1;
    int ans = 0;
    while (i <= j)
    {
        if (arr[i] + arr[j] <= x)
            i++;
        j--, ans++;
    }
    cout << ans << en;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    FAST;
    int T = 1;
    // cin >> T;
    while (T--)
    {
        input();
        sol();
    }
    return 0;
}