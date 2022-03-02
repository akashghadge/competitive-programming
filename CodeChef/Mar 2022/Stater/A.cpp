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
vector<int> mov = {6, 7, 13, 14, 20, 21, 27, 28};
int sol(vi arr, int n)
{
    int ans = 8;
    for (auto val : arr)
    {
        bool flag = false;
        for (auto curr : mov)
        {
            if (val == curr)
                flag = true;
        }
        if (!flag)
            ans++;
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
        int N;
        cin >> N;
        vi arr(N);
        for (int i = 0; i < N; i++)
        {
            cin >> arr[i];
        }
        cout << sol(arr, N) << en;
    }
    return 0;
}