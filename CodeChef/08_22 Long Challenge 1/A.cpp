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
vi arr;
void input()
{
    cin >> n;
    arr.resize(n - 1);
    for (int i = 0; i < n - 1; i++)
    {
        cin >> arr[i];
    }
}
void sol()
{
    if (n == 2)
    {
        cout << arr[0] * 2 << en;
        return;
    }
    int a = arr[0];
    int b = arr[0];
    for (int i = 1; i < n - 1; i++)
    {
        a += arr[i];
        b += arr[i - 1];
        if (a - b > 0)
        {
            b += a - b;
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