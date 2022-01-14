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
    string name1, name2, pile;
    cin >> name1 >> name2 >> pile;
    unordered_map<char, int> mp1;
    unordered_map<char, int> mp2;
    for (auto ch : name1)
    {
        mp1[ch]++;
    }
    for (auto ch : name2)
    {
        mp1[ch]++;
    }

    for (auto ch : pile)
    {
        mp2[ch]++;
    }
    if (mp1 == mp2)
    {
        cout << "YES" << en;
    }
    else
    {
        cout << "NO" << en;
    }

    return 0;
}