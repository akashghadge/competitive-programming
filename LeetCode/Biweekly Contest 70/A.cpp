#include <bits/stdc++.h>
using namespace std;
#define en "\n"
#define vi vector<int>
#define vii vector<vector<int>>
#define vll vector<ll>
#define ll long long
#define v vector
#define pii pair<int, int>
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
int minimumCost(vector<int> &cost)
{
    priority_queue<int> pq;
    for (auto val : cost)
    {
        pq.push(val);
    }
    int ans = 0;
    while (pq.size() != 0)
    {
        // first candy
        ans += pq.top();
        pq.pop();
        if (pq.size() != 0)
        {
            ans += pq.top();
            pq.pop();
            if (pq.size() != 0)
                pq.pop();
            else
                break;
        }
        else
            break;
    }
    return ans;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    FAST;

    return 0;
}