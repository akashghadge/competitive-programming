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
int sol(vector<pair<int, int>> cup)
{
    int onef = 0;
    int ones = 0;
    int n = cup.size();
    for (int i = 0; i < n; i++)
    {
        if (cup[i].first == 1)
        {
            onef++;
        }
        if (cup[i].second == 1)
        {
            ones++;
        }
    }

    int ans = min(onef, n - onef) + min(ones, n - ones);
    return ans;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    FAST;
    int n;
    cin >> n;
    vector<pair<int, int>> cup(n);
    for (int i = 0; i < n; i++)
    {
        cin >> cup[i].first >> cup[i].second;
    }
    cout << sol(cup) << en;
    return 0;
}