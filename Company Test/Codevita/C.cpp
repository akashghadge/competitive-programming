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
int util(string str, int b, int g)
{
    string comp = "";
    int n = str.size();
    if (b < g)
    {
        bool flag = true;
        for (int i = 0; i < n; i++)
        {
            if (flag)
                comp.push_back('G');
            else
                comp.push_back('B');
            flag = !flag;
        }
    }
    else
    {
        bool flag = true;
        for (int i = 0; i < n; i++)
        {
            if (!flag)
                comp.push_back('G');
            else
                comp.push_back('B');
            flag = !flag;
        }
    }
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (comp[i] != str[i])
            ans++;
    }
    return ans / 2;
}
int util_equal(string str)
{
    string comp1 = "";
    string comp2 = "";
    int n = str.size();
    bool flag = 1;
    for (int i = 0; i < n; i++)
    {
        if (flag)
        {
            comp1 += 'G';
            comp2 += 'B';
        }
        else
        {
            comp1 += 'B';
            comp2 += 'G';
        }
        flag = !flag;
    }
    int cg = 0;
    int cb = 0;
    for (int i = 0; i < n; i++)
    {
        if (comp1[i] != str[i])
            cg++;
        if (comp2[i] != str[i])
            cb++;
    }
    return min(cb, cg) / 2;
}
int sol(string str)
{
    int g = 0;
    int b = 0;
    for (auto ch : str)
    {
        if (ch == 'G')
            g++;
        else
            b++;
    }

    if (abs(b - g) > 1)
    {
        return -1;
    }
    else if (abs(b - g) == 1)
    {
        return util(str, b, g);
    }
    else if (abs(b - g) == 0)
    {
        return util_equal(str);
    }
}
int main()
{
    FAST;
    string str;
    cin >> str;
    cout << sol(str) << en;
    return 0;
}