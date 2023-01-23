#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n, m;
    cin >> n >> m;
    int mult = n * m;
    int sum = n + m;
    int diff = abs(sum - mult);
    vector<int> fact;
    for (int i = 1; i <= diff; i++)
    {
        if (diff % i == 0)
            fact.push_back(i);
    }
    cout << accumulate(fact.begin(), fact.end(), 0) << endl;
}