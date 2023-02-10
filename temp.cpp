#include <bits/stdc++.h>
using namespace std;
class Solution
{
private:
    typedef vector<vector<int>> vii;
    typedef vector<int> vi;
    int getPathValue(string s, vi &freq, vii &adj, vi &deg, int u)
    {
        int ret = ++freq[s[u] - 'a'];
        for (auto v : adj[u])
            ret = max(ret, getPathValue(s, freq, adj, deg, v));
        --freq[s[u] - 'a'];
        deg[u] = false;
        return ret;
    }

    void buildDigraph(vii &adj, vi &deg, int x[], int y[], int m)
    {
        for (int i = 0; i < m; i++)
        {
            deg[y[i] - 1] = false;
            adj[x[i] - 1].push_back(y[i] - 1);
        }
    }

public:
    int largestValuePath(int n, int m, string s, int x[], int y[])
    {
        int n = s.length();
        vii adj(n);
        vi deg(n, true);
        buildDigraph(adj, deg, x, y, m);
        int ret = -1;
        vi freq(26, 0);
        for (int v = 0; v < n; ++v)
            if (deg[v])
                ret = max(ret, getPathValue(s, freq, adj, deg, v));
        return ret;
    }
};
