/*
Let's define the following recurrence:
an+1=an+minDigit(an)⋅maxDigit(an).
Here minDigit(x) and maxDigit(x) are the minimal and maximal digits in the decimal representation of x without leading zeroes. For examples refer to notes.

Your task is calculate aK for given a1 and K.

Input
The first line contains one integer t (1≤t≤1000) — the number of independent test cases.

Each test case consists of a single line containing two integers a1 and K (1≤a1≤1018, 1≤K≤1016) separated by a space.

Output
For each test case print one integer aK on a separate line.

Example
inputCopy
8
1 4
487 1
487 2
487 3
487 4
487 5
487 6
487 7
outputCopy
42
487
519
528
544
564
588
628
Note
a1=487

a2=a1+minDigit(a1)⋅maxDigit(a1)=487+min(4,8,7)⋅max(4,8,7)=487+4⋅8=519

a3=a2+minDigit(a2)⋅maxDigit(a2)=519+min(5,1,9)⋅max(5,1,9)=519+1⋅9=528

a4=a3+minDigit(a3)⋅maxDigit(a3)=528+min(5,2,8)⋅max(5,2,8)=528+2⋅8=544

a5=a4+minDigit(a4)⋅maxDigit(a4)=544+min(5,4,4)⋅max(5,4,4)=544+4⋅5=564

a6=a5+minDigit(a5)⋅maxDigit(a5)=564+min(5,6,4)⋅max(5,6,4)=564+4⋅6=588

a7=a6+minDigit(a6)⋅maxDigit(a6)=588+min(5,8,8)⋅max(5,8,8)=588+5⋅8=628
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
ll a, k;
void input()
{
    cin >> a >> k;
}
ll minD(ll a)
{
    ll min_val = INT_MAX;
    while (a)
    {
        min_val = min(min_val, a % 10);
        a /= 10;
    }
    return min_val;
}
ll maxD(ll a)
{
    ll min_val = INT_MIN;
    while (a)
    {
        min_val = max(min_val, a % 10);
        a /= 10;
    }
    return min_val;
}

void sol()
{
    for (ll i = 1; i < k; i++)
    {
        a = a + (minD(a) * maxD(a));
        if (minD(a) == 0 || maxD(a) == 0)
            break;
    }
    cout << a << en;
}
int main()
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