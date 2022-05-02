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
int x, y;
void input()
{
    cin >> x >> y;
}
void sol()
{
    int ptr = 0;
    if (x > y or __gcd(x, y) == 1)
    {
        cout << "0 0" << en;
    }
    else
    {
        bool f = false;
        for (int i = 1; i <= 100; i++)
        {
            int curr = i;
            for (int j = 2; j <= 100 && curr <= 100; j++)
            {
                ptr++;
                curr *= i;
                if (curr * x == y)
                {
                    cout << j << " " << i << en;
                    f = true;
                    break;
                }
            }
            if (f)
                break;
        }
        if (!f)
        {
            cout << "0 0" << en;
        }
    }
    // cout << ptr << en;
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