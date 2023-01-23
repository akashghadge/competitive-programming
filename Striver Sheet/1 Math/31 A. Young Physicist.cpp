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
int sol(vii f, int n)
{
    int a = 0;
    int b = 0;
    int c = 0;
    for (int i = 0; i < n; i++)
    {
        a += f[i][0];
        b += f[i][1];
        c += f[i][2];
    }
    return (a == 0 && b == 0 && c == 0);
}
int main()
{
    FAST;
    int n;
    cin >> n;
    vii f(n, vi(3, 0));
    for (int i = 0; i < n; i++)
    {
        cin >> f[i][0] >> f[i][1] >> f[i][2];
    }
    sol(f, n) ? cout << "YES" : cout << "NO";
    cout << en;

    return 0;
}