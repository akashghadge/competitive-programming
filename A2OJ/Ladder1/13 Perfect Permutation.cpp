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
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    FAST;
    int n;
    cin >> n;
    if (n % 2 != 0)
        cout << -1 << en;
    else
    {
        int i = 2;
        int j = 1;
        while (j <= n)
        {
            cout << i << " ";
            cout << j << " ";
            i += 2;
            j += 2;
        }
    }
    return 0;
}