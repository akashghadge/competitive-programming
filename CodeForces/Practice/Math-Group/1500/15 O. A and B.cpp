/*
Assume that a>b
. Let's denote the minimum number of operations required to make a
 and b
 equal as x
.

There are two restrictions on x
:

At first, x(x+1)/2≥a−b
, because if x(x+1)/2<a−b
 then a
 will be greater than b
 (after applying all operations);
Secondly, integers x(x+1)/2
 and a−b
 must have the same parity, because if they have different parity, then a
 and b
 will have different parity (after applying all operations).
It turns out that we always can make integers a
 and b
 equal after applying x
 operations. It's true because we have to add x(x+1)/2−a+b2+a−b
 to b
 and the rest to a
. And we can get any integer from 0
 to z(z+1)/2
 as a sum of subset of set {1,2,…,z}
*/
#include <bits/stdc++.h>

using namespace std;

int t, a, b;

bool ok(int res, int d)
{
    long long sum = res * 1LL * (res + 1) / 2;
    if (sum < d)
        return false;
    return sum % 2 == d % 2;
}

int main()
{
    cin >> t;
    for (int tc = 0; tc < t; ++tc)
    {
        cin >> a >> b;
        int d = abs(a - b);
        if (d == 0)
        {
            cout << "0\n";
            continue;
        }

        int res = 1;
        while (!ok(res, d))
            ++res;
        cout << res << endl;
    }
    return 0;
}
