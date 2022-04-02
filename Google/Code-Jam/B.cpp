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
void print_google(int num, string ans = "IMPOSSIBLE")
{
    cout << "Case #" << num << ": " << ans << en;
}
string sol(vii &colors)
{
    int n = colors.size();
    int m = colors[0].size();
    int req = 1e6;
    int sum = 0;
    for (int i = 0; i < m; i++)
    {
        int min_value = INT_MAX;
        for (int j = 0; j < n; j++)
        {
            min_value = min(min_value, colors[j][i]);
        }
        sum += min_value;
    }
    if (sum < req)
    {
        return "";
    }
    vector<int> ans(4);
    sum = 0;
    for (int i = 0; i < m; i++)
    {
        int min_value = INT_MAX;
        for (int j = 0; j < n; j++)
        {
            min_value = min(min_value, colors[j][i]);
        }
        if (sum + min_value > req)
        {
            ans[i] = req - sum;
            break;
        }
        else
        {
            ans[i] = min_value;
        }
        sum += min_value;
    }
    string res = "";
    for (int i = 0; i < 4; i++)
    {
        res += to_string(ans[i]) + " ";
    }
    return res;
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
        int n = 3;
        int m = 4;
        vii color(n, vi(m, 0));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> color[i][j];
            }
        }
        string ans = sol(color);
        if (ans.size() == 0)
            print_google(curr);
        else
            print_google(curr, ans);
        curr++;
    }
    return 0;
}