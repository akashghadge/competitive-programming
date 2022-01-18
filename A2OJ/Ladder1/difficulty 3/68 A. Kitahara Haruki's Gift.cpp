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
bool allSame(vi arr)
{
    int temp = arr[0];
    for (auto val : arr)
    {
        if (temp != val)
            return false;
    }
    return true;
}
bool sol(vi arr, int n)
{
    if (n == 1)
        return false;
    if (allSame(arr) && n % 2 != 0)
        return false;
    for (auto &val : arr)
    {
        val /= 100;
    }
    int sum = accumulate(arr.begin(), arr.end(), 0);
    return sum % 2 == 0;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    FAST;
    int N;
    cin >> N;
    vi arr(N);
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }
    sol(arr, N) ? cout << "YES" : cout << "NO";
    cout << en;
    return 0;
}