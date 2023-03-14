#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, x;
    cin >> n >> x;
    int a[100000];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a + n);
    int d = 0;
    while (a[(n - 1) / 2] != x)
    {
        a[n++] = x;
        sort(a, a + n);
        d++;
    }
    cout << d;
}
