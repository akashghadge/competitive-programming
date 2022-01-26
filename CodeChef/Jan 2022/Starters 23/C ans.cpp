#include <bits/stdc++.h>
#define ll long long
using namespace std;

const ll z = 1000000007;

void solve()
{
    int n, k;
    cin >> n >> k;
    string str;
    cin >> str;

    int left[n], right[n];

    left[0] = (str[0] == '0');
    right[n - 1] = (str[n - 1] == '0');

    for (int i = 1; i < n; i++)
    {
        if (str[i] == '0')
            left[i] = left[i - 1] + 1;
        else
            left[i] = 0;
    }

    for (int i = n - 2; i >= 0; i--)
    {
        if (str[i] == '0')
            right[i] = right[i + 1] + 1;
        else
            right[i] = 0;
    }

    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (left[i] == 0 && i > 0)
            ans += (left[i - 1] / k);
    }

    ans += left[n - 1] / k;
    int orig_ans = ans;

    for (int i = 0; i < n; i++)
    {
        if (str[i] == '0')
            continue;

        int orig_left = 0, orig_right = 0;
        if (i > 0)
            orig_left = left[i - 1];
        if (i < n - 1)
            orig_right = right[i + 1];

        int change = (orig_left + orig_right + 1) / k - orig_right / k - orig_left / k;
        ans = max(ans, orig_ans + change);
    }
    cout << ans << endl;
    return;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("inputf.txt", "r", stdin);
    freopen("outputf.txt", "w", stdout);
    freopen("error.txt", "w", stderr);
#endif

    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}