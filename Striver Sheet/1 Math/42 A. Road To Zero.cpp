/*
You are given two integers x and y. You can perform two types of operations:

Pay a dollars and increase or decrease any of these integers by 1. For example, if x=0 and y=7 there are four possible outcomes after this operation:
x=0, y=6;
x=0, y=8;
x=−1, y=7;
x=1, y=7.
Pay b dollars and increase or decrease both integers by 1. For example, if x=0 and y=7 there are two possible outcomes after this operation:
x=−1, y=6;
x=1, y=8.
Your goal is to make both given integers equal zero simultaneously, i.e. x=y=0. There are no other requirements. In particular, it is possible to move from x=1, y=0 to x=y=0.

Calculate the minimum amount of dollars you have to spend on it.

Input
The first line contains one integer t (1≤t≤100) — the number of testcases.

The first line of each test case contains two integers x and y (0≤x,y≤109).

The second line of each test case contains two integers a and b (1≤a,b≤109).

Output
For each test case print one integer — the minimum amount of dollars you have to spend.

Example
inputCopy
2
1 3
391 555
0 0
9 4
outputCopy
1337
0
Note
In the first test case you can perform the following sequence of operations: first, second, first. This way you spend 391+555+391=1337 dollars.

In the second test case both integers are equal to zero initially, so you dont' have to spend money.


*/

#include <bits/stdc++.h>
using namespace std;
#define en "\n"
#define ll long long
#define v vector
#define vi vector<ll>
#define vll vector<ll>
#define vii vector<vector<ll>>
#define pii pair<ll, ll>
#define vpi vector<pair<ll, ll>>
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
/*input sections*/
ll a, b, x, y;
void input()
{
    cin >> x >> y >> a >> b;
}
void sol()
{
    if (a == 0 && b == 0)
    {
        cout << 0 << en;
        return;
    }

    // main conditions
    if (x == 0)
    {
        cout << abs(y) * a << en;
    }
    else if (y == 0)
    {
        cout << abs(x) * a << en;
    }
    else if (x > 0 && y > 0)
    {
        // both decrease
        ll both = min(x, y);
        ll opb = both * b;
        ll opa = both * a * 2;
        ll ans = min(opa, opb);
        ans += (max(x, y) - min(x, y)) * a;
        cout << ans << en;
    }
    else if (x < 0 && y < 0)
    {
        x = abs(x);
        y = abs(y);
        // both decrease
        ll both = min(x, y);
        ll opb = both * b;
        ll opa = both * a * 2;
        ll ans = min(opa, opb);
        ans += (max(x, y) - min(x, y)) * a;
        cout << ans << en;
    }
    else
    {
        x = abs(x);
        y = abs(y);
        cout << (x + y) * a << en;
    }
}
int32_t main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    FAST;
    ll T = 1;
    cin >> T;
    while (T--)
    {
        input();
        sol();
    }
    return 0;
}