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
    int n, sx, sy, ex, ey;
    cin >> n >> sx >> sy >> ex >> ey;
    vector<char> dir(n);
    for (int i = 0; i < n; i++)
    {
        cin >> dir[i];
    }

    // sol
    int sec = 0;
    for (int i = 0; i < n; i++)
    {
        char ch = dir[i];
        if (sx == ex && sy == ey)
            break;
        // east down
        if (ch == 'E')
        {
            if (sx < ex)
                sx++;
        }
        // right
        else if (ch == 'N')
        {
            if (sy < ey)
                sy++;
        }
        // up
        else if (ch == 'W')
        {
            if (sx > ex)
                sx--;
        }
        // left
        else if (ch == 'S')
        {
            if (sy > ey)
                sy--;
        }

        sec++;
    }
    if (sx == ex and sy == ey)
        cout << sec << en;
    else
        cout << -1 << en;

    return 0;
}