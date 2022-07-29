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
/*input sections*/
int n, k;
vi arr;
void input()
{
    cin >> n >> k;
    arr.resize(n, 0);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
}
void sol()
{
    int sum = accumulate(arr.begin(), arr.end(), 0);
    if (sum % k == 0)
    {
        int req = sum / k;
        int curr = 0;
        for (int i = 0; i < n; i++)
        {
            if (curr == req)
            {
                curr = 0;
                curr += arr[i];
            }
            else if (curr < req)
            {
                curr += arr[i];
            }
            else
            {
                cout << "No" << en;
                return;
            }
        }
        if (curr == req || curr == 0)
        {
            cout << "Yes" << en;
            return;
        }
    }
    cout << "No" << en;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    FAST;
    int T = 1;
    // cin >> T;
    while (T--)
    {
        input();
        sol();
    }
    return 0;
}