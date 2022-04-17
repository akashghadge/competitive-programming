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
/*
3
_X_X_X_X_X_X_X_X_X_X_
X_X_X_X_X_X_X_X_X_X_X
_X_X_X_X_X_X_X_X_X_X_
2,3,4,5,6,7,8,9,10

1
_X_X_X_X_X_X_X_X_X_X_
1,2,1,1,2,2,1,1
*/
vi split(string s, string sep = ",")
{
    vi ans;
    int i = 0;
    int j = s.find(sep);
    while (j != -1)
    {
        ans.push_back(stoi(s.substr(i, j - i)));
        i = j + sep.size();
        j = s.find(sep, i);
    }
    ans.push_back(stoi(s.substr(i, j - i)));
    return ans;
}
vii decode(v<string> strs)
{
    int n = strs.size();
    int m = strs[0].size();
    vii ans(n, vi(m, 0));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            ans[i][j] = strs[i][j] == '_' ? 0 : -1;
        }
    }
    return ans;
}
vpi decode_priority(vi groups, int m)
{
    vpi priority(m);
    int ptr = m;
    for (int i = 0; i < m / 2; i++)
    {
        priority[i].first = groups[i];
        priority[i].second = ptr;
        ptr--;
    }
    ptr = 1;
    for (int i = (m / 2); i < m; i++)
    {
        priority[i].first = groups[i];
        priority[i].second = ptr;
        ptr++;
    }
    return priority;
}
bool valid(pii group, vi &arr)
{
    int rem = 0;
    for (auto val : arr)
        if (val == 0)
            rem++;
    if (rem >= group.first)
        return true;
    return false;
}
void place(pii group, vi &arr)
{
    int rem = group.first;
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0 && rem != 0)
        {
            arr[i] = group.second;
            rem--;
        }
    }
}

void sol(v<string> strs, int n, vector<int> groups, int m)
{
    vii arr = decode(strs);
    vpi priority = decode_priority(groups, m);
    sort(priority.begin(), priority.end(),
         [](auto f, auto s)
         {
             if (f.second == s.second)
                 return f.first < s.first;
             return f.second < s.second;
         });
    int times = n;
    while (times--)
    {
        for (auto group : priority)
        {
            for (auto &row : arr)
            {
                if (valid(group, row))
                {
                    place(group, row);
                    break;
                }
            }
        }
    }

    for (auto li : arr)
    {
        for (auto val : li)
        {
            if (val == -1)
                cout << "X";
            else if (val == 0)
                cout << "_";
            else
                cout << val;
        }
        cout << en;
    }
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    FAST;
    int n;
    cin >> n;
    v<string> strs(n);
    for (int i = 0; i < n; i++)
    {
        cin >> strs[i];
    }
    string str;
    cin >> str;
    vector<int> groups = split(str);
    sol(strs, n, groups, groups.size());
    return 0;
}