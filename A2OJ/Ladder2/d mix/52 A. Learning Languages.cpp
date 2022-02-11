/*
The "BerCorp" company has got n employees. These employees can use m approved official languages for the formal correspondence. The languages are numbered with integers from 1 to m. For each employee we have the list of languages, which he knows. This list could be empty, i. e. an employee may know no official languages. But the employees are willing to learn any number of official languages, as long as the company pays their lessons. A study course in one language for one employee costs 1 berdollar.

Find the minimum sum of money the company needs to spend so as any employee could correspond to any other one (their correspondence can be indirect, i. e. other employees can help out translating).

Input
The first line contains two integers n and m (2 ≤ n, m ≤ 100) — the number of employees and the number of languages.

Then n lines follow — each employee's language list. At the beginning of the i-th line is integer ki (0 ≤ ki ≤ m) — the number of languages the i-th employee knows. Next, the i-th line contains ki integers — aij (1 ≤ aij ≤ m) — the identifiers of languages the i-th employee knows. It is guaranteed that all the identifiers in one list are distinct. Note that an employee may know zero languages.

The numbers in the lines are separated by single spaces.

Output
Print a single integer — the minimum amount of money to pay so that in the end every employee could write a letter to every other one (other employees can help out translating).

Examples
inputCopy
5 5
1 2
2 2 3
2 3 4
2 4 5
1 5
outputCopy
0
inputCopy
8 7
0
3 1 2 3
1 1
2 5 4
2 6 7
1 3
2 7 4
1 1
outputCopy
2
inputCopy
2 2
1 2
0
outputCopy
1
Note
In the second sample the employee 1 can learn language 2, and employee 8 can learn language 4.

In the third sample employee 2 must learn language 2.


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

void dfs(int src, vii graph, vi &visited)
{
    if (visited[src])
        return;
    visited[src] = true;
    for (auto nbr : graph[src])
    {
        if (!visited[nbr])
            dfs(nbr, graph, visited);
    }
}
int connected_comp(vii graph, int n)
{
    int ans = 0;
    vi visited(n);
    for (int i = 0; i < n; i++)
    {
        if (visited[i])
            continue;
        dfs(i, graph, visited);
        ans++;
    }
    return ans;
}
int sol(vii lang, int n, int m)
{
    unordered_map<int, vector<int>> lang_known_by;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < lang[i].size(); j++)
        {
            lang_known_by[lang[i][j]].push_back(i);
        }
    }
    vii graph(n);
    for (auto val : lang_known_by)
    {
        // know one knows this lang
        if (val.second.size() == 0)
            continue;
        int first_from_know = val.second[0];
        for (int i = 1; i < val.second.size(); i++)
        {
            graph[first_from_know].push_back(val.second[i]);
            graph[val.second[i]].push_back(first_from_know);
        }
    }
    return connected_comp(graph, n) - 1;
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
    vii lang(n);
    int limit_zero = 0;
    for (int i = 0; i < n; i++)
    {
        int limit;
        cin >> limit;
        if (limit == 0)
            limit_zero++;
        for (int j = 0; j < limit; j++)
        {
            int curr;
            cin >> curr;
            lang[i].push_back(curr);
        }
    }
    if (limit_zero == n)
        cout << n << en;
    else
        cout << sol(lang, n, m) << en;

    return 0;
}