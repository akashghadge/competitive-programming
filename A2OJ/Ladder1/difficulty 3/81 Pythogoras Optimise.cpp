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
int pythagoreanTriplets(int limit)
{

    int a, b, c = 0;

    int m = 2;
    int ans = 0;
    while (c < limit)
    {

        for (int n = 1; n < m; ++n)
        {
            a = m * m - n * n;
            b = 2 * m * n;
            c = m * m + n * n;

            if (c > limit)
                break;
            ans++;
        }
        m++;
    }
    return ans;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    FAST;
    int n;
    cin >> n;
    cout << pythagoreanTriplets(n) << en;
    return 0;
}