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
void sol(int n)
{
    if (n == 1)
    {
        cout << "1" << en;
        return;
    }
    vii ans(n, vi(n));
    int value = 1;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            for (int j = 0; j < n; j++)
            {
                ans[j][i] = value;
                value++;
            }
        }
        else
        {
            for (int j = n - 1; j >= 0; j--)
            {
                ans[j][i] = value;
                value++;
            }
        }
    }
    for (auto li : ans)
    {
        for (auto val : li)
        {
            cout << val << " ";
        }
        cout << en;
    }
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
    sol(n);
    return 0;
}