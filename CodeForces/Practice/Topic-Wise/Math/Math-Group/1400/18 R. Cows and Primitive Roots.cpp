#include <bits/stdc++.h>
using namespace std;
int a, b = 0, i;
main()
{
    cin >> a;
    for (i = 1; i < a; i++)
        if (__gcd(a - 1, i) == 1)
            b++;
    cout << b;
}
 