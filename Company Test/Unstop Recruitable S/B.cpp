#include <bits/stdc++.h>
using namespace std;
int main()
{
    int lo, hi, f;
    cin >> lo >> hi >> f;
    f *= 1000;
    int mx = 1;
    int mn = -1;
    for (int i = 1; i <= 1000000; i++)
    {
        int curr = f / i;
        int fl = curr;
        int cl = ceil(f / i);
        if (lo <= curr and cl <= hi and mn == -1)
        {
            mn = i;
        }
        if (lo <= curr and cl <= hi)
        {
            mx = i;
        }
    }
    cout << mn << endl;
    cout << mx << endl;
}