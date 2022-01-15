#include <bits/stdc++.h>
using namespace std;
#define en "\n"
#define vi vector<int>
#define vii vector<vector<int>>
#define vll vector<ll>
#define ll long long
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
    int n, k, ml, l, s, salt, need_ml, needsalt;
    cin >> n >> k >> ml >> l >> s >> salt >> need_ml >> needsalt;
    cout << min(min(ml * k / need_ml, l * s), salt / needsalt) / n << en;
    return 0;
}