#include <bits/stdc++.h>
using namespace std;
long long n, g;
int main()
{
    cin >> n;
    for (long long i = 2; i * i <= n; i++)
        if (n % i == 0)
            g = __gcd(g, __gcd(i, n / i));
    if (g == 0)
        g = n;
    cout << g;
}
