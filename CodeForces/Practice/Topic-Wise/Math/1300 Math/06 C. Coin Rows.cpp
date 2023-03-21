#include <bits/stdc++.h>

#define forn(i, n) for (int i = 0; i < int(n); i++)

using namespace std;

const int INF = 2e9 + 10;

int main()
{
    int t;
    scanf("%d", &t);
    forn(_, t)
    {
        int n;
        scanf("%d", &n);
        vector<vector<int>> a(2, vector<int>(n));
        forn(i, 2) forn(j, n)
            scanf("%d", &a[i][j]);
        int ans = INF;
        int sum1 = 0, sum2 = 0;
        forn(i, n) sum1 += a[0][i];
        forn(i, n)
        {
            sum1 -= a[0][i];
            ans = min(ans, max(sum1, sum2));
            sum2 += a[1][i];
        }
        printf("%d\n", ans);
    }
}