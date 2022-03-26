#include <bits/stdc++.h>
using namespace std;

#define en "\n"
#define ll long long
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

int solve()
{
    string elems = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
    int sss = elems.size();
    unordered_map<string, int> mping;
    for (int i = 0; i < sss; i++)
    {
        string stt(1, elems[i]);
        mping[stt] = i;
    }

    string rin;
    getline(cin, rin);

    vector<string> arr;
    int n = rin.size();
    string bol = "";
    for (int i = 0; i < n; i++)
    {
        if (rin[i] == ' ')
        {
            arr.push_back(bol);
            bol = "";
        }
        else
        {
            bol += rin[i];
        }
    }
    arr.push_back(bol);

    unordered_map<string, int> mp;
    for (string i : arr)
    {
        if (i.size() == 1)
        {
            mp[i] = mping[i];
        }
        else
        {
            string fs(1, i[0]);
            string sc(1, i[1]);
            int ans = (mping[sc] + 1) * mping[fs] + mping[sc];
            mp[i] = ans;
        }
    }
    int ma = INT_MIN;
    for (auto i : arr)
    {
        for (auto j : arr)
        {
            if (i != j)
                ma = max(ma, __gcd(mp[i], mp[j]));
        }
    }
    return ma;
}

int main()
{

    ll t = 1;
    while (t--)
    {
        cout << solve();
    }

    return 0;
}