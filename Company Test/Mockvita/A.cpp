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
#define vs vector<string>
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
void sol(vs bus, int n, vpi arr, int t)
{
    cout << "hello" << en;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    FAST;
    int n, t;
    cin >> n;
    vector<string> buss(n);
    for (int i = 0; i < n; i++)
    {
        cin >> buss[i];
    }

    cin >> t;
    vpi arr(t);
    for (int i = 0; i < t; i++)
    {
        cin >> arr[i].first >> arr[i].second;
    }
    sol(buss, n, arr, t);

    return 0;
}