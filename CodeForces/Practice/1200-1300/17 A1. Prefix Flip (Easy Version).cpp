#include <bits/stdc++.h>
using namespace std;

int t, n;
string a, b;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> t;
    while (t--)
    {
        cin >> n >> a >> b;
        vector<int> ops;
        for (int i = 0; i < n; i++)
        {
            if (a[i] != b[i])
            {
                if (i > 0)
                    ops.push_back(i + 1);
                ops.push_back(1);
                if (i > 0)
                    ops.push_back(i + 1);
            }
        }
        cout << ops.size() << ' ';
        for (int x : ops)
        {
            cout << x << ' ';
        }
        cout << '\n';
    }
}
