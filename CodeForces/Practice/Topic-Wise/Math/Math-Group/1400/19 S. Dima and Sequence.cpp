#include <bits/stdc++.h>
using namespace std;
int n, a;
int cnt[32];
int main()
{
    cin >> n;
    long long ans = 0;
    while (n--)
    {
        cin >> a;
        a = __builtin_popcount(a);
        ans += cnt[a];
        cnt[a]++;
    }
    cout << ans << '\n';
}
