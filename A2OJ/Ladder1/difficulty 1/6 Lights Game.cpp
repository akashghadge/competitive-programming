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
int util(vii p, int i, int j, int n)
{
    int ans = p[i][j];
    if (i + 1 < n)
        ans += p[i + 1][j];
    if (j + 1 < n)
        ans += p[i][j + 1];
    if (i - 1 >= 0)
        ans += p[i - 1][j];
    if (j - 1 >= 0)
        ans += p[i][j - 1];
    return (ans % 2 == 0);
}
template <class printVal>
void printVector(vector<printVal> vec)
{
    for (int i = 0; i < vec.size(); i++)
    {
        for (auto val : vec[i])
        {
            cout << val;
        }
        cout << en;
    }
}
void sol(vii p)
{
    int n = p.size();
    vii ans(n, vi(n, 1));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            ans[i][j] = util(p, i, j, n);
        }
    }
    printVector(ans);
}
int main()
{
    FAST;
    // INOUT;
    int n = 3;
    vii p(n, vi(n, 1));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> p[i][j];
        }
    }
    sol(p);
    return 0;
}