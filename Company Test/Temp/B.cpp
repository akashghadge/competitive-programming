#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    string str;
    cin >> n >> str;
    unordered_map<char, int> mp;
    for (auto ch : str)
        mp[ch]++;
    cout << mp.size() << endl;
}