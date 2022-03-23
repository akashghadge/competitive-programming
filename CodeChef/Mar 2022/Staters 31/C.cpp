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
long long sol(long long num)
{
    ll ptr = 2;
    ll curr = 0;
    int i = 0;
    while (ptr <= num)
    {
        ptr <<= 1;
        curr += pow(2, i) - 1;
        i++;
    }
    ptr >>= 1;
    if (ptr < num)
        curr += num - ptr;
    return curr;
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
        long long n;
        cin >> n;
        cout << sol(n) << en;
    }
    return 0;
}