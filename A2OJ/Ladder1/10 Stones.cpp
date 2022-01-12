#include <bits/stdc++.h>
using namespace std;
#define en "\n"
#define vi vector<int>
#define vii vector<vector<int>>
#define vll vector<ll>
#define ll long long
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    string b;
    int a, c;
    c = 0;
    cin >> a >> b;
    for (int i = 0; i < a; i++)
    {
        if (b[i] == b[i + 1])
        {
            c++;
        }
    }
    cout << c;
}
