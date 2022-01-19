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
        int N;
        cin >> N;
        if (N == 1)
        {
            cout << "YES" << en;
            cout << 1 << en;
        }
        if (N == 2)
        {
            cout << "NO" << en;
        }
        else
        {
            cout << "YES" << en;
            for (int i = 1; i <= N / 2; i++)
            {
                cout << i << " ";
            }
            for (int i = N; i > N / 2; i--)
            {
                cout << i << " ";
            }
            cout << en;
        }
    }

    return 0;
}