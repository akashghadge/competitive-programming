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
    v<string> arr;
    arr.push_back("0");
    arr.push_back("1");
    for (int i = 1; i < n; i++)
    {
        v<string> temp;
        for (auto str : arr)
            temp.push_back("0" + str);
        reverse(arr.begin(), arr.end());
        for (auto str : arr)
            temp.push_back("1" + str);
        arr = temp;
    }
    for (auto str : arr)
        cout << str << en;
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