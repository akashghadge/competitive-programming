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
int sol(int n, int a)
{
    if (n == 1)
    {
        if (a % 2 == 0)
            cout << "Even" << en;
        else
            cout << "Odd" << en;
    }

    else if (a % 2 != 0)
    {
        if (n % 2 == 0)
        {
            cout << "Even" << en;
        }
        else
        {
            cout << "Odd" << en;
        }
    }
    else
    {
        cout << "Impossible" << en;
    }
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    FAST;
    int T;
    cin >> T;
    while (T--)
    {
        int n, a;
        cin >> n >> a;
        sol(n, a);
    }

    return 0;
}