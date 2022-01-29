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
bool predicate(vi arr, int n, int len, int k)
{
    cout << len << "-> ";
    int total_steps = 0;
    for (int i = len - 1; i >= 0; i--)
    {
        int curr_needed = (10 - arr[i] + total_steps) % 10;
        total_steps += curr_needed;
        cout << total_steps << " ";
        if (total_steps > k)
        {
            cout << en;
            return false;
        }
    }
    cout << en;
    return true;
}
void test_case()
{
    int n, k;
    cin >> n >> k;
    vi arr(n, 0);
    string str;
    cin >> str;
    for (int i = 0; i < n; i++)
    {
        arr[i] = (str[i] - '0');
    }
    // binary search
    long long low = 0;
    long long high = n;
    long long ans = -1;
    while (low <= high)
    {
        long long mid = ((high - low) / 2) + low;
        if (predicate(arr, n, mid, k))
        {
            ans = mid;
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    cout << ans << en;
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
        test_case();
    }
    return 0;
}