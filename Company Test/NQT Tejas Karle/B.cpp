#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<ll>
int main()
{
    ll n, m;
    cin >> n >> m;
    vi b1(n);
    vi b2(m);
    for (int i = 0; i < n; i++)
        cin >> b1[i];
    for (int i = 0; i < m; i++)
        cin >> b2[i];
    (n == m and n == 1 and b1[0] == b2[0]) ? cout << "Banta" : cout << "Alice";
}