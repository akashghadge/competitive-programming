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
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("inputf.txt", "r", stdin);
    freopen("outputf.txt", "w", stdout);
    freopen("error.txt", "w", stderr);
#endif

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        if (n == 2)
        {
            cout << "NO\n";
            continue;
        }

        cout << "YES\n";
        if (n % 2 == 1)
        {
            int val = n / 2;
            for (int i = 1; i <= val; i++)
                cout << i << ' ';
            for (int i = n; i > val; i--)
                cout << i << ' ';
            cout << '\n';
        }
        else
        {
            int val = (n / 2);

            for (int i = 2; i <= val; i++)
                cout << i << ' ';
            cout << 1 << ' ';
            for (int i = n; i > val; i--)
                cout << i << ' ';
            cout << '\n';
        }
    }
    return 0;
}