#include <bits/stdc++.h>
using namespace std;

vector<int> get(int val)
{
    vector<int> ans(32, 0);
    int ptr = 0;
    while (ptr < 32)
    {
        ans[ptr] = val & 1;
        val >>= 1;
        ptr++;
    }
    return ans;
}
int get2(vector<int> &arr)
{
    int ptr = 0;
    int ans = 0;
    while (ptr < 32)
    {
        ans += (arr[ptr] ? pow(2, ptr) : 0);
        ptr++;
    }
    return ans;
}

long long sol(vector<long long> &arr, long long n)
{
    int ans = 0;
    int mod = 1e9 + 7;
    for (auto val : arr)
    {
        if (val == 1 or val == 2)
        {
            ans = (ans + 1) % mod;
            continue;
        }
        vector<int> bits = get(val);
        int end = 0, start = 0;
        for (int i = 31; i >= 0; i--)
        {
            if (bits[i])
            {
                end = i;
                break;
            }
        }
        for (int i = 0; i < 31; i++)
        {
            if (bits[i])
            {
                start = i;
                break;
            }
        }
        int cn = accumulate(bits.begin(), bits.end(), 0);

        int type = (cn == end - start + 1);

        vector<int> temp(32, 0);
        if (!type)
        {
            for (int i = end - 1; i >= 0; i--)
                temp[i] = 1;
        }
        else
        {
            temp[end] = 1;
            for (int i = end - 1; i >= 0; i--)
            {
                if (!arr[i])
                    temp[i] = 1;
            }
        }
        int curr = get2(temp);
        cout << curr << endl;
        ans = (ans + curr) % mod;
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