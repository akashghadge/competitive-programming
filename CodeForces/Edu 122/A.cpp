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
int change(int n)
{
    n /= 10;
    int ptr = 0;
    while (ptr < 10)
    {
        n *= 10;
        n += ptr;
        if (n % 7 == 0)
            break;

        n /= 10;
        ptr++;
    }
    return n;
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
        int n;
        cin >> n;
        if (n % 7 == 0)
        {
            cout << n << en;
        }
        else
        {
            cout << change(n) << en;
        }
    }
    return 0;
}