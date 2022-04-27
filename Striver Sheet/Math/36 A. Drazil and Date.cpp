/*
Someday, Drazil wanted to go on date with Varda. Drazil and Varda live on Cartesian plane. Drazil's home is located in point (0, 0) and Varda's home is located in point (a, b). In each step, he can move in a unit distance in horizontal or vertical direction. In other words, from position (x, y) he can go to positions (x + 1, y), (x - 1, y), (x, y + 1) or (x, y - 1).

Unfortunately, Drazil doesn't have sense of direction. So he randomly chooses the direction he will go to in each step. He may accidentally return back to his house during his travel. Drazil may even not notice that he has arrived to (a, b) and continue travelling.

Luckily, Drazil arrived to the position (a, b) successfully. Drazil said to Varda: "It took me exactly s steps to travel from my house to yours". But Varda is confused about his words, she is not sure that it is possible to get from (0, 0) to (a, b) in exactly s steps. Can you find out if it is possible for Varda?

Input
You are given three integers a, b, and s ( - 109 ≤ a, b ≤ 109, 1 ≤ s ≤ 2·109) in a single line.

Output
If you think Drazil made a mistake and it is impossible to take exactly s steps and get from his home to Varda's home, print "No" (without quotes).

Otherwise, print "Yes".

Examples
inputCopy
5 5 11
outputCopy
No
inputCopy
10 15 25
outputCopy
Yes
inputCopy
0 5 1
outputCopy
No
inputCopy
0 0 2
outputCopy
Yes
Note
In fourth sample case one possible route is: .



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
ll a, b, s;
void input()
{
    cin >> a >> b >> s;
}
bool sol()
{
    ll req = abs(a) + abs(b);
    s -= req;
    if (s < 0)
        return false;
    else if (s % 2 == 0)
        return true;
    else
        return false;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    FAST;
    ll T = 1;
    // cin >> T;
    while (T--)
    {
        input();
        sol() ? cout << "YES" : cout << "NO";
        cout << en;
    }
    return 0;
}