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
float sol(vi arr, float n)
{
    sort(arr.begin(), arr.end());
    float l = 0;
    for (int i = 0; i < n - 1; i++)
    {
        l += arr[i];
    }
    l = l / (n - 1);
    return l + arr[n - 1];
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
        std::cout << std::fixed;
        std::cout << std::setprecision(6);
        std::cout << sol(arr, N) << en;
    }
    return 0;
}