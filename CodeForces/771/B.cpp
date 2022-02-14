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
bool allEvens(vi arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 != 0)
            return false;
    }
    return true;
}
bool notSorted(vi arr, int n)
{
    for (int i = 1; i < n; i++)
    {
        if (arr[i - 1] > arr[i])
            return true;
    }
    return false;
}
bool sol(vi arr, int n)
{
    // if (!notSorted(arr, n))
    //     return true;
    // if (allEvens(arr, n) && notSorted(arr, n))
    //     return false;
    int last_even = -1;
    int last_odd = -1;
    for (int i = 0; i < n; i++)
    {
        int curr = arr[i];
        if (curr % 2 == 0)
        {
            if (last_even == -1)
            {
                last_even = curr;
            }
            else if (last_even > curr)
            {
                return false;
            }
            else
            {
                last_even = curr;
            }
        }
        else
        {
            if (last_odd == -1)
            {
                last_odd = curr;
            }
            else if (last_odd > curr)
            {
                return false;
            }
            else
            {
                last_odd = curr;
            }
        }
    }
    return true;
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
        sol(arr, N) ? cout << "YES" : cout << "NO";
        cout << en;
    }
    return 0;
}