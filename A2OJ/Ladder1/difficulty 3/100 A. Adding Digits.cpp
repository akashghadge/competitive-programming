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
    int a, b, n;
    cin >> a >> b >> n;
    bool flag = 0;
    int i = 0;
    for (i = 0; i <= 9; i++)
    {
        int temp = a;
        temp *= 10;
        temp += i;
        if (temp % b == 0)
        {
            flag = true;
            break;
        }
    }

    if (flag)
    {
        string ans = to_string(a) + to_string(i);
        ans.insert(ans.end(), n - 1, '0');
        cout << ans << en;
    }
    else
    {
        cout << -1 << en;
    }

    return 0;
}