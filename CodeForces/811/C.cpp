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
int n;
void input()
{
    cin >> n;
}
void sol()
{
    int sum = 0;
    string num = "";
    for (int i = 9; i >= 1; i--)
    {
        if (sum + i == n)
        {
            sum += i;
            num = to_string(i) + num;
        }
        else if (sum + i < n)
        {
            sum += i;
            num = to_string(i) + num;
        }
        else
            continue;
    }
    cout << num << en;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    FAST;
    int T = 1;
    cin >> T;
    while (T--)
    {
        input();
        sol();
    }
    return 0;
}