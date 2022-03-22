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
long long sol()
{
    long long n, B, x, y;
    cin >> n >> B >> x >> y;
    long long sum = 0;
    long long curr = 0;
    for (long long i = 1; i <= n; i++)
    {
        if (curr + x <= B)
        {
            curr += x;
            sum += curr;
        }
        else
        {
            curr -= y;
            sum += curr;
        }
    }
    return sum;
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
        cout << sol() << en;
    }
    return 0;
}