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
bool sol(ll num)
{
    int c = 0;
    while (num)
    {
        int digit = num % 10;
        if (digit == 7 || digit == 4)
            c++;
        num /= 10;
    }
    return c == 7 || c == 4;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    FAST;
    ll num;
    cin >> num;
    sol(num) ? cout << "YES" : cout << "NO";
    cout << en;
    return 0;
}