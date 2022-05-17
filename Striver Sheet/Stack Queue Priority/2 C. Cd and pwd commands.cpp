#include <bits/stdc++.h>
using namespace std;
#define en "\n"
#define ll long long
#define v vector
#define vi vector<int>
#define vll vector<ll>
#define vii vector<vector<int>>
#define pii pair<int, int>
#define vpi vector<pair<int, int>>
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
/*input sections*/
int n;
v<string> strs;
void input()
{
    cin >> n;
    strs.resize(n);
    cin.ignore();
    for (int i = 0; i < n; i++)
    {
        getline(cin, strs[i]);
    }
}
vector<string> tokenize(string s, string del = " ")
{
    vector<string> ans;
    int start = 0;
    int end = s.find(del);
    while (end != -1)
    {
        ans.push_back(s.substr(start, end - start));
        start = end + del.size();
        end = s.find(del, start);
    }
    ans.push_back(s.substr(start, end - start));
    return ans;
}
void print(deque<string> d)
{
    int t = d.size();
    if (d.size() == 0)
        cout << "/";
    while (d.size())
    {
        cout << "/";
        cout << d.front();
        d.pop_front();
    }
    if (t != 0)
        cout << "/";
    cout << en;
}
void sol()
{ 
    deque<string> d;
    for (auto str : strs)
    {
        if (str == "pwd")
        {
            print(d);
        }
        else
        {
            vector<string> res = tokenize(str, "/");
            // absolute
            if (str[3] == '/')
            {
                d.clear();
                for (int i = 1; i < res.size(); i++)
                {
                    if (res[i] == "..")
                        d.pop_back();
                    else
                        d.push_back(res[i]);
                }
            }
            else
            {
                vector<string> space_seprated = tokenize(res[0]);
                res.insert(res.begin() + 1, space_seprated[1]);
                for (int i = 1; i < res.size(); i++)
                {
                    if (res[i] == "..")
                        d.pop_back();
                    else
                        d.push_back(res[i]);
                }
            }
        }
    }
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    FAST;
    int T = 1;
    // cin >> T;
    while (T--)
    {
        input();
        sol();
    }
    return 0;
}