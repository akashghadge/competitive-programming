/*
Your task is to calculate the number of trailing zeros in the factorial n!.

For example, 20!=2432902008176640000 and it has 4 trailing zeros.

Input

The only input line has an integer n.

Output

Print the number of trailing zeros in n!.

Constraints
1≤n≤109
Example

Input:
20

Output:
4
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
    int ans = 0;
    ll ptr = 0;
    for (int i = 5; i <= n; i *= 5)
    {
        ans += (n / i);
    }
    cout << ans << en;
}
int main()
{
    FAST;
    int T = 1;
    while (T--)
    {
        input();
        sol();
    }
    return 0;
}