#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin >> str;
    unordered_map<char, int> mp;
    for (auto val : str)
        mp[val]++;

    vector<pair<char, int>> arr(mp.begin(), mp.end());
    sort(arr.begin(), arr.end(), [](auto f, auto s)
         {
        if(f.second==s.second)
            return f.first<s.first;
            return f.second<s.second; });
    string ans = "";
    for (auto val : arr)
    {
        while (val.second--)
        {
            ans += val.first;
        }
    }
    cout << ans << endl;
}