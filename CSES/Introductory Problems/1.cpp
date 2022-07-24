#include <bits/stdc++.h>
using namespace std;
#define en "\n"
#define vi vector<long long>
#define vii vector<vector<long long>>
#define vll vector<ll>
#define ll long long
#define v vector 
#define pii pair<long long, long long>
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    FAST;
    long long n;
    cin >> n;
    while (n != 1)
    {
        cout << n << " ";
        if (n % 2 == 0)
        {
            n /= 2;
        }
        else
        {
            n *= 3;
            n++;
        }
    }

    cout << 1 << en;
}