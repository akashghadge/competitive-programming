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
int sol(vpi arr, int n)
{
    sort(arr.begin(), arr.end(),
         [](pii first, pii second)
         {
             if (first.second == second.second)
                 return first.first > second.first;
             return first.second > second.second;
         });
    int ptr = 1;
    int point = 0;
    int i = 0;
    while (ptr-- && i < n)
    {
        ptr += arr[i].second;
        point += arr[i].first;
        i++;
    }
    return point;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    FAST;
    int N;
    cin >> N;
    vpi arr(N);
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i].first >> arr[i].second;
    }
    cout << sol(arr, N) << en;
    return 0;
}