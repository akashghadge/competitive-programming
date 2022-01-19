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
    FAST;
    int n;
    cin >> n;
    int c = 0;
    while (n)
    {
        if (n & 1)
            c++;
        n >>= 1;
    }
    cout << c << en;
    ;

    return 0;
}