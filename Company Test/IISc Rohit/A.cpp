#include <bits/stdc++.h>
using namespace std;
int solve(int n)
{
    unsigned long int catalan[n + 1];
    catalan[0] = catalan[1] = 1;
    for (int i = 2; i <= n; i++)
    {
        catalan[i] = 0;
        for (int j = 0; j < i; j++)
            catalan[i] += catalan[j] * catalan[i - j - 1];
    }

    return catalan[n];
}
int main()
{
    int n;
    cin >> n;
    cout << solve(n) << endl;
}