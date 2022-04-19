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
bool sol(vi arr, int n, int m)
{
    if (n > m)
        return false;
    sort(arr.begin(), arr.end(), greater<int>());
    ll need = 0;
    need += (arr[0] * 2) + 1;
    for (int i = 1; i < n; i++)
    {
        int curr = arr[i];
        if (i == n - 1)
            need += 1;
        else
            need += (curr + 1);
        if (need > m)
        {
            return false;
        }
    }
    if (need > m)
    {
        return false;
    }

    return true;
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
        int n, m;
        cin >> n >> m;
        vi arr(n, 0);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sol(arr, n, m) ? cout << "YES" : cout << "NO";
        cout << en;
        ;
    }
    return 0;
}