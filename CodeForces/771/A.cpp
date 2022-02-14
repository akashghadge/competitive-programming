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
int sol(vi arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == i + 1)
            continue;
        else
        {
            int j = i;
            for (j = i; j < n; j++)
            {
                if (arr[j] == i + 1)
                    break;
            }
            reverse(arr.begin() + i, arr.begin() + j + 1);
            break;
        }
    }

    for (auto val : arr)
    {
        cout << val << " ";
    }
    cout << en;
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
        sol(arr, N);
    }
    return 0;
}