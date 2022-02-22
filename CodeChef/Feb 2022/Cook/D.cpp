#include <bits/stdc++.h>
using namespace std;

#define int long long

int32_t main()
{
    int n, edges;
    cin >> n >> edges;

    int total = n * (n - 1);
    total /= 2;

    int missing_edges = total - edges;

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        sum += x;
    }

    for (int i = 0; i < edges; i++)
    {
        int waste;
        cin >> waste >> waste;
    }

    int q;
    cin >> q;

    while (q--)
    {
        char ch;
        cin >> ch;

        if (ch == '+')
        {
            int waste;
            cin >> waste >> waste;
            edges++;
            missing_edges--;
        }
        else if (ch == '-')
        {
            int waste;
            cin >> waste >> waste;
            edges--;
            missing_edges++;
        }
        else
            cout << sum + edges - missing_edges << "\n";
    }
    return 0;
}