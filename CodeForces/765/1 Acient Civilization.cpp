#include <bits/stdc++.h>
using namespace std;
#define en "\n"
#define vi vector<int>
#define vii vector<vector<int>>
#define vll vector<ll>
#define ll long long
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
int addBits(int num, vi &bits)
{
    int ptr = 0;
    while (num)
    {
        bits[ptr] += (1 & num);
        num = num >> 1;
        ptr++;
    }
}
int sol(vi nums, int n, int l)
{
    int ans = 0;
    for (auto val : nums)
    {
        ans ^= val;
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
    int T;
    cin >> T;
    while (T--)
    {
        int n, l;
        cin >> n >> l;
        vi nums(n, 0);
        for (int i = 0; i < n; i++)
        {
            cin >> nums[i];
        }
        cout << sol(nums, n, l) << en;
    }

    return 0;
}