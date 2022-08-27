#include <bits/stdc++.h>
using namespace std;
#define en "\n"
#define ll long long
#define v vector

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ll a, b, k;
    cin >> k >> a >> b;
    int angle = 360 / k;
    if (a < b)
        swap(a, b);
    if ((a - b) * 2 == (k))
    {
        cout << 0 << endl;
    }
    else
    {
        cout << a - b - 1 << endl;
    }
}