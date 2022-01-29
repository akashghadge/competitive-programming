#include <bits/stdc++.h>
using namespace std;
#define en "\n"
#define vi vector<int>
#define vii vector<vector<int>>
#define vll vector<ll>
#define ll long long
#define v vector
#define pii pair<int, int>
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
int sol(int n)
{
    vi arr(n, 0);
    for (int i = 0; i < n; i++)
    {
        arr[i] = i + 1;
    }

    int max_sum = 0;
    vi ans;
    do
    {
        int x = 0;
        int i = 1;
        for (auto val : arr)
        {
            x += (val ^ i);
            i++;
        }
        if (max_sum <= x)
        {
            ans = arr;
            max_sum = x;
        }
    } while (next_permutation(arr.begin(), arr.end()));
    for (auto val : ans)
    {
        cout << val << " ";
    }
    cout << en;
    cout << "Value is :" << max_sum << en;
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
        int n;
        cin >> n;
        sol(n);
    }
    return 0;
}