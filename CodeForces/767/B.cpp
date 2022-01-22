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
int count_odd(int L, int R)
{

    int N = (R - L) / 2;
    if (R % 2 != 0 || L % 2 != 0)
        N += 1;

    return N;
}
bool sol(int l, int r, int k)
{
    if (l == r && l == 1)
        return false;
    else if (l == r)
        return true;
    int odds = count_odd(l, r);
    if (odds <= k)
        return true;
    else
        return false;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    FAST;
    int T;
    cin >> T;
    const int size = 1e9 + 1;
    while (T--)
    {
        int l, r, k;
        cin >> l >> r >> k;
        sol(l, r, k) ? cout << "YES" : cout << "NO";
        cout << en;
    }
    return 0;
}