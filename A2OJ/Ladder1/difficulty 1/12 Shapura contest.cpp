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
string sol(string n1, string n2)
{
    string ans = "";
    for (int i = 0; i < n1.size(); i++)
    {
        ans += (n1[i] != n2[i]) ? "1" : "0";
    }
    return ans;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    FAST;
    string n1, n2;
    cin >> n1 >> n2;
    cout << sol(n1, n2);
    return 0;
}