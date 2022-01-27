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
int test_case()
{
    int n;
    cin >> n;
    vi arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    vi prefix(n, 0);
    int num = arr[n - 1];
    prefix[n - 1] = 1;
    for (int i = n - 2; i >= 0; i--)
    {
        if (num == arr[i])
            prefix[i] = prefix[i + 1] + 1;
        else
            prefix[i] = 0;
    }

    int ans = 0;
    int jump = 0;
    for (int i = n - 1; i >= 0;)
    {
        // candidaate is different
        if (prefix[i] == 0)
        {
            jump *= 2;
            i -= (jump)-1;
            ans++;
        }
        else
        {
            jump++;
            i--;
        }
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
        cout << test_case() << en;

    return 0;
}