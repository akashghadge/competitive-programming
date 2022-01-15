/*
not solved
*/
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
string sol(string str, int n, int t)
{
    for (int i = 0; i < n; i++)
    {
        if (str[i] == 'B' && str[i + 1] == 'G')
        {
            int j = i + 1;
            while (j < n && j - i < t && str[i] == 'B' && str[j] == 'G')
            {
                j++;
            }
            if (j == n)
                swap(str[i], str[j - 1]);
            else
                swap(str[i], str[j]);
            i = j;
        }
    }
    return str;
}
int main()
{
    FAST;
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n, t;
    cin >> n >> t;
    string str;
    cin >> str;
    cout << sol(str, n, t) << en;
    return 0;
}