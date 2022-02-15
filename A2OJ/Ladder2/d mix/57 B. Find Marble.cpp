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
int sol(vi arr, int n, int s, int e)
{
    int ans = 0;
    vi visited(n + 1);
    visited[0] = true;
    while (s != e)
    {
        if (visited[s])
            return -1;
        visited[s] = true;
        s = arr[s];
        ans++;
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
    int N, start, end;
    cin >> N >> start >> end;
    vi arr(N);
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }
    arr.insert(arr.begin(), 0);
    cout << sol(arr, N, start, end) << en;
    return 0;
}