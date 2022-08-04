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
int n;
void input()
{
    cin >> n;
}
void print(vi arr)
{
    for (auto val : arr)
        cout << val << " ";
    cout << en;
}
void sol()
{
    vi arr(n);
    for (int i = 0; i < n; i++)
        arr[i] = i + 1;
    cout << n << en;
    print(arr);
    for (int i = 0; i < n - 1; i++)
    {
        swap(arr[i], arr[i + 1]);
        print(arr);
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