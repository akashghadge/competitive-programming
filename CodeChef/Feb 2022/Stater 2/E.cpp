#include <bits/stdc++.h>
using namespace std;
#define en "\n"
#define ll long long
#define v vector
#define vi vector<long long>
#define vll vector<ll>
#define vii vector<vector<long long>>
#define pii pair<long long, long long>
#define vpi vector<pair<long long, long long>>
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
long long sol(long long need, long long moves)
{
    ll curr = 1;
    ll ans = 0;
    for (int i = 0; i < moves; i++)
    {
        if (curr >= need)
            return moves - i;
        else
            curr *= 2;
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
    long long T;
    cin >> T;
    while (T--)
    {
        long long need, moves;
        cin >> need >> moves;
        cout << sol(need, moves) << en;
    }
    return 0;
}