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
ll k, x;
void input()
{
    cin >> k >> x;
}
bool digital(int num, int comp)
{
    while (num > 9)
    {
        int temp = 0;
        while (num)
        {
            temp += num % 10;
            num /= 10;
        }
        num = temp;
    }
    return (num == comp);
}
void sol()
{
    cout << 9 * (k - 1) + x << '\n';
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