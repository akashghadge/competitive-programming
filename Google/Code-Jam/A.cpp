
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
void print_google(int num, string ans)
{
    cout << "Case #" << num << ": " << en;
}
void sol(int r, int c)
{
    for (int i = 0; i < r + (r - 1) + 2; i++)
    {
        for (int j = 0; j < c + (c - 1) + 2; j++)
        {
            if ((i == 0 && j == 0) || (i == 0 && j == 1) || (i == 1 && j == 0) || (i == 1 && j == 1))
            {
                cout << ".";
            }
            else if (i % 2 == 0 && j % 2 == 0)
            {
                cout << "+";
            }
            else if (i % 2 == 0)
            {
                cout << "-";
            }
            else if (j % 2 == 0)
            {
                cout << "|";
            }
            else
            {
                cout << ".";
            }
        }
        cout << en;
    }
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
    int curr = 1;
    while (T--)
    {
        int r, c;
        cin >> r >> c;
        print_google(curr, "");
        sol(r, c);
        curr++;
    }
    return 0;
}