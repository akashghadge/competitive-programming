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
int numberOfArrays(vector<int> &differences, int lower, int upper)
{
    int n = differences.size();
    vector<long long> prefix(n + 1);
    prefix[0] = 0;
    for (int i = 0; i < n; i++)
    {
        prefix[i + 1] = prefix[i] + differences[i];
    }
    long long mn = *min_element(prefix.begin(), prefix.end());
    long long mx = *max_element(prefix.begin(), prefix.end());

    long long pd = upper - lower;
    long long curr = pd - abs(mn - mx);
    if (curr < 0)
        return 0;
    else
        return curr + 1;
    return 0;
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