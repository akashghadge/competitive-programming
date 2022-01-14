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
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    FAST;
    string str;
    cin >> str;
    vi d;
    for (auto ch : str)
    {
        if (ch != '+')
        {
            d.push_back(ch - '0');
        }
    }

    sort(d.begin(), d.end());
    string ans = "";
    for (int val : d)
    {
        ans.append(to_string(val) + "+");
    }
    ans.pop_back();

    cout << ans << en;

    return 0;
}