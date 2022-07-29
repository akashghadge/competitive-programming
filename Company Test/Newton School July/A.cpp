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
int a, b, c;
void input()
{
    cin >> a >> b >> c;
}
void sol()
{
    vi arr;
    arr.push_back(a);
    arr.push_back(b);
    arr.push_back(c);
    sort(arr.begin(), arr.end());
    (arr[2] * arr[2] == (arr[1] * arr[1]) + (arr[0] * arr[0])) ? cout << "YES" : cout << "NO";
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