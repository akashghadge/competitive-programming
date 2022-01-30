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
int sol(string str, int n)
{
    int ones = 0;
    int zeros = 0;
    for (int i = 0; i < n; i++)
    {
        if (str[i] == '0')
            zeros++;
        else
            ones++;
    }

    if (n == 1)
        return true;
    else if (ones == 1 && zeros == 1)
        return true;
    else if (zeros >= 2 || ones >= 2)
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
    while (T--)
    {
        int n;
        string str;
        cin >> n >> str;
        sol(str, n) ? cout << "YES" : cout << "NO";
        cout << en;
    }
    return 0;
}