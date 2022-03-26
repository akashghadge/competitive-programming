#include <bits/stdc++.h>
using namespace std;
#define en "\n"
#define ll long long
#define v vector
#define vi vector<long long>
#define vll vector<ll>
#define vii vector<vector<long long>>
#define pii pair<long long, long long>
#define vpi vector<pair<long long, long long>>
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
/*
Tc S Be Li Er In Dy As I Ac
H O C N Au Ag Cl

*/
unordered_map<string, int> mp;
vector<string> split(string str)
{
    vector<string> ans;
    stringstream ssss(str);
    string curr;
    // temp
    while (ssss >> curr)
    {
        ans.push_back(curr);
    }

    return ans;
}
void init()
{
    string temp = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
    int n = temp.size();
    for (int i = 0; i < n; i++)
    {
        string curr(1, temp[i]);
        mp[curr] = i;
    }
}
unordered_map<string, int> decode(v<string> &strs)
{
    unordered_map<string, int> ans;
    for (auto str : strs)
    {
        if (str.size() == 1)
        {
            ans[str] = mp[str];
        }
        else
        {
            string curr_first(1, str[0]);
            string curr_second(1, str[1]);
            int res = (mp[curr_second] + 1) * mp[curr_first] + mp[curr_second];
            ans[str] = res;
        }
    }
    return ans;
}
long long sol(unordered_map<string, int> &arr, vector<string> strs)
{
    int ans = INT_MIN;
    for (auto first : strs)
    {
        for (auto second : strs)
        {
            if (first != second)
                ans = max(ans, __gcd(arr[first], arr[second]));
        }
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
    init();
    v<string> strs;
    string str;
    getline(cin, str);
    strs = split(str);
    unordered_map<string, int> arr = decode(strs);
    cout << sol(arr, strs);
    return 0;
}