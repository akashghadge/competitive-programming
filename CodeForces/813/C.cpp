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
/*input sections*/
ll n, k;
vi arr;
void input()
{
    cin >> n;
    arr.resize(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}
void sol()
{
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        mp[arr[i]] = i;
    }
    int mx = INT_MAX;
    int i = n - 1;
    while (i >= 0)
    {
        if (mx >= arr[i])
            i--;
        else
        {
            int mx_ptr = INT_MIN;
            int j = i;
            while (j >= 0)
            {
                mx_ptr = max(mx_ptr, mp[arr[j]]);
                j--;
            }
            
        }
    }
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    FAST;
    int T = 1;
    cin >> T;
    while (T--)
    {
        input();
        sol();
    }
    return 0;
}