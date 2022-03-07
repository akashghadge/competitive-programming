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
int sol(vii graph, int n, int h)
{
    
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    FAST;
    int n, h, m, l;
    cin >> n >> h >> m >> l;
    vii graph(n);
    for (int i = 0; i < n - 1; i++)
    {
        int uu, vv;
        cin >> uu >> vv;
        graph[uu - 1].push_back(vv - 1);
        graph[vv - 1].push_back(uu - 1);
    }
    cout << sol(graph, n, h) << en;
    return 0;
}