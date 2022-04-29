/*
You are playing a new computer game in which you have to fight monsters. In a dungeon you are trying to clear, you met three monsters; the first of them has a health points, the second has b health points, and the third has c.

To kill the monsters, you can use a cannon that, when fired, deals 1 damage to the selected monster. Every 7-th (i. e. shots with numbers 7, 14, 21 etc.) cannon shot is enhanced and deals 1 damage to all monsters, not just one of them. If some monster's current amount of health points is 0, it can't be targeted by a regular shot and does not receive damage from an enhanced shot.

You want to pass the dungeon beautifully, i. e., kill all the monsters with the same enhanced shot (i. e. after some enhanced shot, the health points of each of the monsters should become equal to 0 for the first time). Each shot must hit a monster, i. e. each shot deals damage to at least one monster.

Input
The first line contains a single integer t (1≤t≤104) — the number of test cases.

Each test case consists of a single line that contains three integers a, b and c (1≤a,b,c≤108) — the number of health points each monster has.

Output
For each test case, print YES if you can kill all the monsters with the same enhanced shot. Otherwise, print NO. You may print each letter in any case (for example, YES, Yes, yes, yEs will all be recognized as positive answer).

Example
inputCopy
3
3 2 4
1 1 1
10 1 7
outputCopy
YES
NO
NO
Note
In the first test case, you can do as follows: 1-th shot to the first monster, 2-th shot to the second monster, 3-th shot to the third monster, 4-th shot to the first monster, 5-th shot to the third monster, 6-th shot to the third monster, and 7-th enhanced shot will kill all the monsters.

In the second test case, you can't kill monsters with the same enhanced shot, because the total number of health points of monsters is 3, and you will kill them in the first 3 shots.



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
ll a, b, c;
void input()
{
    cin >> a >> b >> c;
}
bool sol()
{
    ll sum = a + b + c;
    if (sum < 9)
        return false;
    int min_value = min(a, min(b, c));
    return (sum % 9 == 0 && min_value >= (sum / 9));
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
        sol() ? cout << "YES" : cout << "NO";
        cout << en;
    }
    return 0;
}