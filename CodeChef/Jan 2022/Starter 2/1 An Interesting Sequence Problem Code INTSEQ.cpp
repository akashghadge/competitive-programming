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
    FAST;
    int T;
    cin >> T;
    while (T--)
    {
        int k;
        cin >> k;
        int seq = 0;
        if (k % 2 != 0)
        {
            cout << seq << en;
        }
        else
        {
            while (k % 2 == 0)
            {
                k /= 2;
                seq++;
            }
            cout << seq << en;
        }
    }

    return 0;
}