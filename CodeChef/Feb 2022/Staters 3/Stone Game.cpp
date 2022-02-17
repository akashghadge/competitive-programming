#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int i;
    long long n;
    cin >> n;
    string s1, s2;
    cin >> s1 >> s2;
    string res(2 * n, '0');
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());
    long long tm = n - 1, bm = 0, b = n - 1, a = 0;
    long long rt = 2 * n - 1, T = 0;
    for (i = 0; i < 2 * n; i++)
    {
        if (b < bm)
        {
            res[T] = s1[a];
            a += 1;
            T += 1;
            continue;
        }
        if (a > tm)
        {
            res[T] = s2[b];
            b -= 1;
            T += 1;
            continue;
        }
        if (i % 2 == 0)
        {
            if (s1[a] < s2[b])
            {
                res[T] = s1[a];
                a += 1;
                T += 1;
            }
            else
            {
                res[rt] = s1[tm];
                rt -= 1;
                tm -= 1;
            }
        }

        else
        {
            if (s2[b] > s1[a])
            {
                res[T] = s2[b];
                T += 1;
                b -= 1;
            }
            else
            {
                res[rt] = s2[bm];
                rt -= 1;
                bm += 1;
            }
        }
    }
    cout << res << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int tc = 1;
    cin >> tc;
    for (int t = 1; t <= tc; t++)
    {
        // cout << "Case #" << t << ": ";
        solve();
    }
}