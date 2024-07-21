/*

*/
#include <bits/stdc++.h>
using namespace std;
vector<int> help(const std::vector<int> &arr)
{
    vector<int> result(arr.size(), -1);
    stack<int> st;
    for (int i = 0; i < arr.size(); ++i)
    {
        while (!st.empty() && arr[i] < arr[st.top()])
        {
            result[st.top()] = i;
            st.pop();
        }
        st.push(i);
    }
    return result;
}
long long binpow(long long a, long long b, long long m)
{
    a %= m;
    long long res = 1;
    while (b > 0)
    {
        if (b & 1)
            res = res * a % m;
        a = a * a % m;
        b >>= 1;
    }
    return res;
}
long long sol(int n, vector<int> a)
{
    vector<int> d = help(a);
    bool f = 1;
    for (auto val : d)
        if (val != -1)
            f = 0;
    long long mod = 1e9 + 7;

    if (!f)
    {
        int mi = INT_MAX;
        int diff = 0;
        for (int i = 0; i < n; i++)
        {
            if (d[i] != -1)
            {
                if (d[i] - i == mi)
                {
                    diff = a[i] - a[d[i]];
                }
                else if (d[i] - i < mi)
                {
                    diff = a[i] - a[d[i]];
                    mi = d[i] - i;
                }
            }
        }
        return (diff * 1LL * binpow(1e8, (n - mi), 1e9 + 7)) % mod;
    }
    else
    {
        unordered_map<int, int> mp;
        bool zero = 0;
        for (auto val : a)
        {
            mp[val]++;
            if (mp[val] >= 2)
                zero = 1;
        }
        if (zero)
            return 0;

        int diff = INT_MAX;
        for (int i = 1; i < n; i++)
        {
            diff = min(diff, a[i - 1] - a[i]);
        }
        return diff * 1LL * binpow(1e8, 1, 1e9 + 7) % mod;
    }
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    cout << sol(n, a) << endl;
}