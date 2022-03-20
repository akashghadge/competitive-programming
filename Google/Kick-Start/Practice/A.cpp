#include <bits/stdc++.h>
using namespace std;
#define en "\n"
#define ll long long
#define v vector
#define vi vector<int>
#define vll vector<ll>
#define vii vector<vector<int>>
#define pii pair<int, int>
#define vpi vector<pair<int, int>>
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
// Case #x: y
int sol(int n, int k, string str)
{
    int ans = 0;
    int i = 0, j = n - 1;
    while (i < j)
    {
        if (str[i] == str[j])
            ans++;
        i++;
        j--;
    }

    if (k <= ans)
        return 0;
    return (k - ans);
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
    int curr = 1;
    while (T--)
    {
        int n, k;
        cin >> n >> k;
        string str;
        cin >> str;
        cout << "Case #" << curr << ": " << sol(n, k, str) << en;
        curr++;
    }
    return 0;
}