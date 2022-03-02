#include <bits/stdc++.h>
using namespace std;
#define en "\n"
#define ll long long
#define v vector
#define vi vector<int>
#define vll vector<ll>
#define vii vector<vector<int>>
#define pii pair<int, int>
#define vpi vector<pair<int, int>>
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

int nodes[1000000];

int root(int first)
{
    if (first == nodes[first])
        return first;
    return nodes[first] = root(nodes[first]);
}

void connect(int first, int second)
{
    first = root(first);
    second = root(second);

    if (first != second)
        nodes[second] = first;
}

int connectedComponents(int n)
{
    set<int> ans_set;

    for (int i = 0; i < n; i++)
        ans_set.insert(root(nodes[i]));

    return ans_set.size();
}

int printAnswer(int N,
                vector<vector<int>> edges)
{

    for (int i = 0; i <= N; i++)
        nodes[i] = i;

    for (int i = 0; i < edges.size(); i++)
    {
        connect(edges[i][0], edges[i][1]);
    }

    // Print answer
    return connectedComponents(N);
}

ll sol(vii edges, int V)
{
    int res = printAnswer(V, edges);
    return res - 1;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    FAST;
    int T;
    cin >> T;
    while (T--)
    {
        int V, E;
        cin >> V >> E;
        vii edges;
        for (int i = 0; i < E; i++)
        {
            int uu, vv;
            cin >> uu >> vv;
            edges.push_back({uu - 1, vv - 1});
        }
        cout << sol(edges, V) << en;
    }
    return 0;
}