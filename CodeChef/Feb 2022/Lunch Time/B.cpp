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
void sol(long long n)
{
    if (n % 2 != 0)
    {
        cout << "-1" << en;
        return;
    }
    cout << "0 0" << en;
    cout << n << " 0" << en;
    cout << n / 2 << " " << n / 2 * -1 << en;
    cout << n / 2 << " " << n / 2 << en;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    FAST;
    long long n;
    cin >> n;
    sol(n);
    return 0;
}