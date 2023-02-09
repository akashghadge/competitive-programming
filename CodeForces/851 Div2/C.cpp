#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
const ll MOD = 1e+9 + 7;

void MAIN()
{
    int n;
    cin >> n;
    if (n % 2)
    {
        cout << "Yes\n";
        n *= 2;
        int val = n + 1;
        vector<pair<int, int>> v(n / 2);
        for (int i = 0; i < n / 2; i++)
        {
            v[i] = {i + 1, n - i};
        }
        int n1 = n / 2;
        int l = 0, r = n1 / 2;
        while (l < r)
        {
            swap(v[l].second, v[r].second);
            l++;
            r--;
        }
        l = n1 / 2 + 1, r = n1 - 1;
        while (l < r)
        {
            swap(v[l].second, v[r].second);
            l++;
            r--;
        }
        for (auto [x, y] : v)
            cout << x << " " << y << '\n';
    }
    else
    {
        cout << "No\n";
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cout << fixed;
    cout << setprecision(10);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int t;
    cin >> t;
    while (t--)
        MAIN();
    return 0;
}
