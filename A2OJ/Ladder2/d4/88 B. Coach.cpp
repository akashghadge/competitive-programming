/*
A programming coach has n students to teach. We know that n is divisible by 3. Let's assume that all students are numbered from 1 to n, inclusive.

Before the university programming championship the coach wants to split all students into groups of three. For some pairs of students we know that they want to be on the same team. Besides, if the i-th student wants to be on the same team with the j-th one, then the j-th student wants to be on the same team with the i-th one. The coach wants the teams to show good results, so he wants the following condition to hold: if the i-th student wants to be on the same team with the j-th, then the i-th and the j-th students must be on the same team. Also, it is obvious that each student must be on exactly one team.

Help the coach and divide the teams the way he wants.

Input
The first line of the input contains integers n and m (3 ≤ n ≤ 48, . Then follow m lines, each contains a pair of integers ai, bi (1 ≤ ai < bi ≤ n) — the pair ai, bi means that students with numbers ai and bi want to be on the same team.

It is guaranteed that n is divisible by 3. It is guaranteed that each pair ai, bi occurs in the input at most once.

Output
If the required division into teams doesn't exist, print number -1. Otherwise, print  lines. In each line print three integers xi, yi, zi (1 ≤ xi, yi, zi ≤ n) — the i-th team.

If there are multiple answers, you are allowed to print any of them.

Examples
inputCopy
3 0
outputCopy
3 2 1
inputCopy
6 4
1 2
2 3
3 4
5 6
outputCopy
-1
inputCopy
3 3
1 2
2 3
1 3
outputCopy
3 2 1

*/
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
void dfs_help(int src, vii graph, vi &visited, vi &curr)
{
    if (visited[src])
        return;
    curr.push_back(src);
    visited[src] = true;
    for (auto nbr : graph[src])
    {
        if (!visited[nbr])
        {
            dfs_help(nbr, graph, visited, curr);
        }
    }
}
void dfs(vii graph, int n)
{
    vi visited(n, 0);
    vii connected;
    for (int i = 0; i < n; i++)
    {
        if (!visited[i])
        {
            vi curr;
            dfs_help(i, graph, visited, curr);
            connected.push_back(curr);
        }
    }
    vector<vector<vector<int>>> sizeways(4);
    bool flag = false;
    for (auto comp : connected)
    {
        if (comp.size() > 3)
        {
            flag = 1;
            continue;
        }
        sizeways[comp.size()].push_back(comp);
    }
    int twos = sizeways[2].size();
    int ones = sizeways[1].size();

    if (flag || (twos > ones))
    {
        cout << -1 << en;
        return;
    }

    int ptr1 = 0;
    int ptr2 = 0;
    // printing 3 groups
    for (auto threes : sizeways[3])
    {
        for (auto val : threes)
            cout << val + 1 << " ";
        cout << en;
    }

    while (ptr2 < sizeways[2].size())
    {
        for (auto val : sizeways[1][ptr1])
        {
            cout << val + 1 << " ";
        }

        for (auto val : sizeways[2][ptr2])
        {
            cout << val + 1 << " ";
        }

        ptr1++;
        ptr2++;
        cout << en;
    }

    while (ptr1 < sizeways[1].size())
    {
        for (auto val : sizeways[1][ptr1])
        {
            cout << val + 1 << " ";
        }
        ptr1++;
    }
}
void sol(vii graph, int n)
{
    dfs(graph, n);
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    FAST;
    int n, m;
    cin >> n >> m;
    vii graph(n);
    for (int i = 0; i < m; i++)
    {
        int vv, uu;
        cin >> uu >> vv;
        graph[uu - 1].push_back(vv - 1);
    }
    sol(graph, n);

    return 0;
}