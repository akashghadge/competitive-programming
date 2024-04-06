#include <bits/stdc++.h>
using namespace std;
bool valid(long long n)
{
    while (n)
    {
        if (n % 2 != 1)
            return false;
        n /= 10;
    }
    return true;
}
long long findNextOddNum(long long x)
{
    x++;
    while (x)
    {
        if (valid(x))
        {
            break;
        }
        x++;
    }
    return x;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int T;
    cin >> T;
    while (T--)
    {
        long long x;
        cin >> x;
        long long res = findNextOddNum(x);
        cout << res << endl;
    }

    return 0;
}
