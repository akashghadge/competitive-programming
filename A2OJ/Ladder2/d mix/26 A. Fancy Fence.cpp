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
const int max_size = 1000;
vector<float> pre(max_size);
void init()
{
    for (int i = 0; i < max_size; i++)
    {
        if (i <= 2)
            continue;
        pre[i] = float(i - 2) * 180 / i;
    }
    // cout<<pre[max_size-1]<<en;
}
bool sol(int n)
{
    return binary_search(pre.begin(), pre.end(), n);
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    FAST;
    init();
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        sol(n) ? cout << "YES" : cout << "NO";
        cout << en;
    }
    return 0;
}