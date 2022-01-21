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
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    FAST;
    int n, m;
    cin >> n >> m;
    string ans = "";
    int i = 0;
    if (n > m)
        i++;
    while (n && m)
    {
        if (i & 1)
        {
            ans += "B";
            n--;
        }
        else
        {
            ans += "G";
            m--;
        }
        i++;
    }

    cout << ans;
    while (n)
    {
        cout << "B";
        n--;
    }
    while (m)
    {
        cout << "G";
        m--;
    }

    return 0;
}