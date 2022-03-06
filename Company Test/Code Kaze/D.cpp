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
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    FAST;
    // vi nums = {131, 157, 183};
    // vi div = {36, 26, 13, 28};
    // for (auto d : div)
    // {
    //     cout << d << en;
    //     for (auto num : nums)
    //     {
    //         cout << num % d << " ";
    //     }
    //     cout << en;
    // }
    // cout << (420 * 100) / (3 * 14) << en;9

    vi arr = {34, 35, 36, 33};
    for (auto val : arr)
    {
        ll sum = pow(7, 12) - pow(4, 12);
        if (sum % val == 0)
            cout << val << en;
    }

    return 0;
}