/*

*/
#include <bits/stdc++.h>
using namespace std;
vector<int> get(int n)
{
    vector<int> ans(32, 0);
    int i = 0;
    while (n)
    {
        ans[i++] = n & 1;
        n >>= 1;
    }
    return ans;
}
vector<int> solve(vector<int> arr, int n)
{
    vector<int> bit = get(arr[0]), ans;
    ans.push_back(arr[0]);
    for (int i = 1; i < n; i++)
    {
        vector<int> next(32, 0), curr = get(arr[i]);
        for (int i = 0; i < 32; i++)
        {
            if (bit[i] and curr[i])
                next[i] = 0;
            else if (bit[i] or curr[i])
                next[i] = 1;
        }
        int res = 0;
        for (int i = 0; i < 32; i++)
            if (next[i])
                res += pow(2, i);
        ans.push_back(res);
        bit = curr;
    }
    return ans;
}
int main()
{
    int n;
    cin >> n;
    vector<int> arr(n, 0);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    vector<int> ans = solve(arr, n);
}