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
vector<string> split(string str)
{
    cout << str << en;
    vector<string> ans;
    stringstream ssss(str);
    string curr;
    // temp
    while (ssss >> curr)
    {
        ans.push_back(curr);
    }

    return ans;
}
int sol(vi graph, vi arr)
{
    sort(arr.begin(), arr.end());
    sort(graph.begin(), graph.end());
    int sum = 0;
    int n = arr.size();
    int m = graph.size();
    for (int i = 0, j = 0; i < n, j < m; i++, j++)
    {
        sum += (arr[i] * graph[j]);
    }
    return sum;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n, m;
    cin >> n >> m;
    vi graph(n, 0);
    for (int i = 0; i < m; i++)
    {
        int uu, vv;
        cin >> uu >> vv;
        graph[uu - 1] += 1;
        graph[vv - 1] += 1;
    }
    vi arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << sol(graph, arr);
}