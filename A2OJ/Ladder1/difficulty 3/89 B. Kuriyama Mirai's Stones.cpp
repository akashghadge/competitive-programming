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
    int N;
    cin >> N;
    vll arr(N + 1, 0);
    for (int i = 1; i <= N; i++)
    {
        cin >> arr[i];
    }
    vll s = arr;
    sort(s.begin(), s.end());

    // prefix sum
    for (int i = 1; i <= N; i++)
    {
        arr[i] = arr[i - 1] + arr[i];
    }

    for (int i = 1; i <= N; i++)
    {
        s[i] = s[i] + s[i - 1];
    }

    int m;
    cin >> m;
    while (m--)
    {
        int type, l, r;
        ll ans = 0;
        cin >> type >> l >> r;
        if (type == 1)
            ans = arr[r] - arr[l - 1];
        else
            ans = s[r] - s[l - 1];
        cout << ans << en;
    }

    return 0;
}