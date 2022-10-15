#include <bits/stdc++.h>
using namespace std;
int solve(string str, char ch)
{
    int cn = 0;
    int n = str.size();
    for (int i = 0; i < n; i++)
    {
        if (ch == str[i])
            cn++;
    }
    if (cn == 0)
        return 0;
    while (cn <= (n / 2))
    {
        n--;
    }
    return n;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int t;
    cin >> t;
    while (t--)
    {
        string str;
        char ch;
        cin >> str >> ch;
        cout << solve(str, ch) << endl;
    }
}