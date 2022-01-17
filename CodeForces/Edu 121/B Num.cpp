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
string sol(string str)
{
    int n = str.size();
    if (n == 1)
        return str;
    if (n == 2)
    {
        int num = str[1] - '0' + str[0] - '0';
        return to_string(num);
    }
    for (int i = n - 2; i >= 0; i--)
    {
        int num = str[i + 1] - '0' + str[i] - '0';
        if (num >= 10)
        {
            string curr = to_string(num);
            str[i] = curr[0];
            str[i + 1] = curr[1];
            return str;
        }
    }
    int num = str[0] - '0' + str[1] - '0';
    string curr = to_string(num);
    string temp = str.substr(1);
    temp[0] = curr[0];
    return temp;
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
        string str;
        cin >> str;
        cout << sol(str) << en;
    }

    return 0;
}