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
bool sol(vpi arr, int n, int s)
{
    sort(arr.begin(), arr.end());
    for (int i = 0; i < n; i++)
    {
        if (s > arr[i].first)
            s += arr[i].second;
        else
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
    int s, n;
    cin >> s >> n;
    vpi arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i].first >> arr[i].second;
    }
    sol(arr, n, s) ? cout << "YES" : cout << "NO";
    cout << en;
    return 0;
}