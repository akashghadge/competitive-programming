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
int minOperations(int n, vector<int> &a)
{
    // Write your code here.
    unordered_map<int, int> mp;
    for (auto num : a)
        mp[num]++;
    int op = 0;

    for (auto val : mp)
    {
        if (val.first == val.second)
        {
            continue;
        }
        else if (val.first > val.second)
        {
            op += min(val.first - val.second, val.second);
        }
        else
        {
            op += val.second - val.first;
        }
    }
    return op;
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
        cout << minOperations(N, arr) << en;
    }
    return 0;
}