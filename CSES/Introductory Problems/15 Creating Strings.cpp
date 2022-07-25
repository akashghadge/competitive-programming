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
/*input sections*/
string str;
void input()
{
    cin >> str;
}
void sol()
{
    set<string> ans;
    sort(str.begin(), str.end());
    do
    {
        ans.insert(str);
    } while (next_permutation(str.begin(), str.end()));
    cout << ans.size() << en;
    for (auto val : ans)
        cout << val << en;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    FAST;
    int T = 1;
    // cin >> T;
    while (T--)
    {
        input();
        sol();
    }
    return 0;
}