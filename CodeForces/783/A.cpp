#include <bits/stdc++.h>
using namespace std;
#define en "\n"
#define ll long long
#define v vector
#define vi vector<long long>
#define vll vector<ll>
#define vii vector<vector<long long>>
#define pii pair<long long, long long>
#define vpi vector<pair<long long, long long>>
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
long long sol(long long n, long long m)
{
    if (n == 1 && m == 1)
        return 0;
    else if ((n == 1 && m == 2) || (n == 2 && m == 1))
        return 1;
    else if (n == 1 || m == 1)
        return -1;
    else
    {
        if (n == m)
        {
            return (n - 1) * 2;
        }
        else if (n < m)
        {
            if ((m - n) % 2 == 0)
            {
                return ((n - 1) * 2) + (m - n) * 2;
            }
            else
            {
                return ((n - 1) * 2) + ((m - n) * 2) - 1;
            }
        }
        else
        {
            swap(n, m);
            if ((m - n) % 2 == 0)
            {
                return ((n - 1) * 2) + (m - n) * 2;
            }
            else
            {
                return ((n - 1) * 2) + ((m - n) * 2) - 1;
            }
        }
    }
    return 0;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    FAST;
    long long T;
    cin >> T;
    while (T--)
    {
        long long n, m;
        cin >> n >> m;
        cout << sol(n, m) << en;
    }
    return 0;
}