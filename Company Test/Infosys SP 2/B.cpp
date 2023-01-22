#include <bits/stdc++.h>
using namespace std;

int get(int val, set<int> &st)
{
    int prev = 1;
    for (auto curr : st)
    {
        if (curr > val)
            return prev;
        if (curr == val)
            return curr;
        prev = curr;
    }
    return prev;
}
long long sol(vector<long long> &arr, long long n)
{
    set<int> st;
    long long ptr = 2, cn = 1, mod = 1e9 + 7;
    long long ans = 0;
    while (cn < 32)
    {
        st.insert(ptr - 1);
        ptr <<= 1;
        cn++;
    }
    for (auto val : arr)
    {
        ans = (ans + get(val, st)) % mod;
    }
    return ans;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    long long n;
    cin >> n;
    vector<long long> arr(n, 0);
    for (long long i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << sol(arr, n) << endl;
}