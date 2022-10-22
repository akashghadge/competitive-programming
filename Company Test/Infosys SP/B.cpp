#include <bits/stdc++.h>
using namespace std;
bool palindrome(string s, int st, int end)
{
    while (st <= end)
    {
        if (s[st] == s[end])
        {
            st++;
            end--;
        }
        else
            return false;
    }
    return true;
}

int partition(string s)
{
    unordered_map<int, vector<vector<string>>> um;
    vector<string> temp2;
    um[-1].push_back(temp2);
    for (int i = 0; i < s.length(); i++)
    {
        for (int j = i; j >= 0; j--)
        {
            if (palindrome(s, j, i))
            {
                vector<vector<string>> first = um[j - 1];
                string str = s.substr(j, i - j + 1);
                for (int k = 0; k < first.size(); k++)
                {
                    vector<string> v = first[k];
                    v.push_back(str);
                    um[i].push_back(v);
                }
            }
        }
    }
    vector<vector<string>> curr = um[s.length() - 1];
    int mx = 0;
    for (auto val : curr)
    {
        int ans = 0;
        for (auto str : val)
        {
            ans += (str.size() * str.size());
        }
        mx = max(ans, mx);
    }
    return mx;
}
int main()
{
    string str;
    int n;
    cin >> n >> str;
    if (palindrome(str, 0, n))
        cout << n * n << endl;
    else
        cout << partition(str) << endl;
}