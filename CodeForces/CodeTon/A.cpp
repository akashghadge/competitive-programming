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
string second, first;
int n, m;
void input()
{
    cin >> n >> m >> first >> second;
}
bool sol()
{
    if (n < m)
        return false;
    reverse(second.begin(), second.end());
    reverse(first.begin(), first.end());

    for (int i = 0; i < m - 1; i++)
    {
        if (first[i] != second[i])
            return false;
    }
    reverse(second.begin(), second.end());
    reverse(first.begin(), first.end());
    char need = second[0];
    for (int i = 0; i <= (first.size() - second.size()); i++)
    {
        if (first[i] == need)
            return true;
    }
    return false;
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
        sol() ? cout << "YES" : cout << "NO";
        cout << en;
    }
    return 0;
}