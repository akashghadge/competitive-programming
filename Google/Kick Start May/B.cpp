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
int n, x, y;
void input()
{
    cin >> n >> x >> y;
}
void help(int id, vector<vector<int>> &curr, vector<vector<vector<int>>> &res)
{
    if (id > n)
    {
        res.push_back(curr);
        return;
    }
    curr[0].push_back(id);
    help(id + 1, curr, res);
    curr[0].pop_back();
    curr[1].push_back(id);
    help(id + 1, curr, res);
    curr[1].pop_back();
}
int num = 1;
void print_google(string ans)
{
    cout << "Case #" << num << ": " << ans << en;
    num++;
}
void sol()
{
    vector<vector<vector<int>>> res;
    int limit = pow(n, 2);
    for (int i = 1; i <= limit; i++)
    {
        int ptr = 1;
        int curr = i;
        vector<vector<int>> sub(2);
        while (curr)
        {
            if (curr & 1 == 1)
            {
                sub[0].push_back(ptr);
            }
            else
            {
                sub[1].push_back(ptr);
            }
            ptr++;
            curr >>= 1;
        }
        if (sub[0].size() == 0 || sub[1].size() == 0)
            continue;
        int sum1 = accumulate(sub[0].begin(), sub[0].end(), 0);
        int sum2 = accumulate(sub[1].begin(), sub[1].end(), 0);
        int div = __gcd(sum1, sum2);
        sum1 /= div;
        sum2 /= div;
        if ((sum1 == x && sum2 == y) || (sum1 == y && sum2 == x))
        {
            print_google("POSSIBLE");
            cout << sub[0].size() << en;
            for (auto op : sub[0])
            {
                cout << op << " ";
            }
            cout << en;
            return;
        }
    }
    print_google("IMPOSSIBLE");
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    FAST;
    int T = 1;
    cin >> T;
    while (T--)
    {
        input();
        sol();
    }
    return 0;
}