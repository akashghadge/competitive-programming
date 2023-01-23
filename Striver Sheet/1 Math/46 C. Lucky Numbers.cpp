/*
The numbers of all offices in the new building of the Tax Office of IT City will have lucky numbers.

Lucky number is a number that consists of digits 7 and 8 only. Find the maximum number of offices in the new building of the Tax Office given that a door-plate can hold a number not longer than n digits.

Input
The only line of input contains one integer n (1 ≤ n ≤ 55) — the maximum length of a number that a door-plate can hold.

Output
Output one integer — the maximum number of offices, than can have unique lucky numbers not longer than n digits.

Examples
inputCopy
2
outputCopy
6


*/
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
    ll ans = 0;
    for (int i = 1; i <= n; i++)
    {
        ans += pow(2, i);
    }
    cout << ans << en;
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