#include <bits/stdc++.h>
using namespace std;
bool solve(int a, int b)
{
    if (a == 88 or b == 88)
    {
        return true;
    }
    else if (a - b == 88 or b - a == 88 or a + b == 8)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n;
    cin >> n;
    solve(n);
}