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
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    FAST;
    int n, k;
    cin >> n >> k;
    int i = 1;
    while (k > 0)
    {
        if (k - i == 0)
        {
            cout << 0 << en;
            break;
        }
        else if (k - i < 0)
        {
            cout << k << en;
            break;
        }
        else if (k - i > 0)
        {
            k -= i;
        }
        i++;
        if (i > n)
            i = 1;
    }

    return 0;
}