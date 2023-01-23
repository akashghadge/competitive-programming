#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n, b;
    cin >> n >> b;
    if (b == 0 or b == n)
    {
        cout << n << endl;
    }
    ll a = n - b;
    ll box = 0;
    while (a != b)
    {
        if (a > b)
        {
            box += b;
            a -= b;
        }
        else
        {
            box += a;
            b -= a;
        }
    }
    cout << box << endl;
}