#include <bits/stdc++.h>
using namespace std;
int sol(vector<int> &b, vector<int> &c, int n, int m)
{
    int total = accumulate(b.begin(), b.end(), 0);
    if (total <= m)
        return 0;
    priority_queue<pair<int, pair<int, int>>> pq;
    for (int i = 0; i < n; i++)
    {
        pair<int, pair<int, int>> p = {b[i] * c[i], {b[i], c[i]}};
        pq.push(p);
    }

    while (m)
    {
        auto temp = pq.top().second;
        pq.pop();
        if (temp.first == 0)
            break;
        pair<int, pair<int, int>> np = {(temp.first - 1) * temp.second, {temp.first - 1, temp.second}};
        pq.push(np);
        m--;
    }
    return pq.top().first;
}
int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> b(n, 0);
    vector<int> c(n, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }

    for (int i = 0; i < n; i++)
    {
        cin >> c[i];
    }
    cout << sol(b, c, n, m) << endl;
}

/*
5 10
1 2 2 3 3
1 1 1 1 1
*/