#include <bits/stdc++.h>
using namespace std;
#define en "\n"
#define ll long long
#define v vector
#define vi vector<int>
#define vll vector<ll>
#define vii vector<vector<int>>
#define pii pair<int, int>
#define vpi vector<pair<int, int>>
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
void sol(int a, int b, int c)
{
    int sum = a + b + c;
    if (sum % 2 != 0)
    {
        cout << "Impossible" << en;
        return;
    }
    if (sum % 2 == 0)
    {
        sum /= 2;
        int x = sum - c;
        int y = sum - a;
        int z = sum - b;

        if (x >= 0 && y >= 0 && z >= 0)
            printf("%d %d %d\n", x, y, z);
        else
            printf("Impossible\n");
    }
    else
        printf("Impossible\n");
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    FAST;
    int a, b, c;
    cin >> a >> b >> c;
    sol(a, b, c);
    return 0;
}