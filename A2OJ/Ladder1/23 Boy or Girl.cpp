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
bool sol(string str)
{
    unordered_set<char> s;
    for (auto ch : str)
    {
        s.insert(ch);
    }
    return s.size() % 2 == 0;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    FAST;
    string str;
    cin >> str;
    sol(str) ? cout << "CHAT WITH HER!" : cout << "IGNORE HIM!";
    cout << en;
    return 0;
}