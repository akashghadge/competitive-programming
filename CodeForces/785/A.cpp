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
    if (str.size() == 1)
    {
        cout << "Bob " << str[0] - 'a' + 1 << en;
    }
    else if (str.size() == 2)
    {
        cout << "Alice " << (str[0] - 'a') + (str[1] - 'a') + 2 << en;
    }
    else
    {
        int n = str.size();
        if (n % 2 != 0)
        {
            int ans = 0;
            int ans1 = 0;
            for (int i = 1; i < n - 1; i++)
            {
                ans += (str[i] - 'a') + 1;
            }
            if (str[0] > str[n - 1])
            {
                ans += (str[0] - 'a') + 1;
                ans1 = str[n - 1] - 'a' + 1;
            }
            else
            {
                ans += (str[n - 1] - 'a') + 1;
                ans1 = str[0] - 'a' + 1;
            }
            if (ans > ans1)
                cout << "Alice " << ans - ans1 << en;
            else
                cout << "Bob " << ans1 - ans << en;
        }
        else
        {
            int ans = 0;
            for (auto ch : str)
                ans += ch - 'a' + 1;
            cout << "Alice " << ans << en;
        }
    }
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