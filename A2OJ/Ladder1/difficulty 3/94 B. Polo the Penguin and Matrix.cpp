#include <bits/stdc++.h>
using namespace std;
#define en "\n"
#define vi vector<int>
#define vii vector<vector<int>>
#define vll vector<ll>
#define ll long long
#define v vector
#define pii pair<int, int>
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
int sol(vi arr, int n, int d)
{
    set<int> s;
    for (int i = 0; i < n; i++)
    {
        s.insert(arr[i] % d);
    }
    if (s.size() > 1)
        return -1;
    sort(arr.begin(), arr.end());
    int mid = n / 2;
    int median = arr[mid];
    int minimum_no_of_moves = 0;
    for (int i = 0; i < n; i++)
        minimum_no_of_moves += abs(arr[i] - median) / d;

    return minimum_no_of_moves;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    FAST;
    int N, M, d;
    cin >> N >> M >> d;
    vi arr(N * M);
    for (int i = 0; i < N * M; i++)
    {
        cin >> arr[i];
    }
    cout << sol(arr, N * M, d) << en;

    return 0;
}