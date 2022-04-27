/*
While sailing on a boat, Inessa noticed a beautiful water lily flower above the lake's surface. She came closer and it turned out that the lily was exactly H centimeters above the water surface. Inessa grabbed the flower and sailed the distance of L centimeters. Exactly at this point the flower touched the water surface.


Suppose that the lily grows at some point A on the lake bottom, and its stem is always a straight segment with one endpoint at point A. Also suppose that initially the flower was exactly above the point A, i.e. its stem was vertical. Can you determine the depth of the lake at point A?

Input
The only line contains two integers H and L (1≤H<L≤106).

Output
Print a single number — the depth of the lake at point A. The absolute or relative error should not exceed 10−6.

Formally, let your answer be A, and the jury's answer be B. Your answer is accepted if and only if |A−B|max(1,|B|)≤10−6.

Examples
inputCopy
1 2
outputCopy
1.5000000000000
inputCopy
3 5
outputCopy
2.6666666666667
*/

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
/*input sections*/
float n, m;
void input()
{
    cin >> n >> m;
}
void sol()
{
    if (n < m)
        swap(n, m);
    float num = pow(n, 2) - pow(m, 2);
    float dm = 2 * m;
    cout << setprecision(10);
    cout << num / dm << en;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    FAST;
    int T = 1;
    // cin >> T;
    while (T--)
    {
        input();
        sol();
    }
    return 0;
}