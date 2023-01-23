/*
Caisa is playing a mobile game during his path. There are (n + 1) pylons numbered from 0 to n in this game. The pylon with number 0 has zero height, the pylon with number i (i > 0) has height hi. The goal of the game is to reach n-th pylon, and the only move the player can do is to jump from the current pylon (let's denote its number as k) to the next one (its number will be k + 1). When the player have made such a move, its energy increases by hk - hk + 1 (if this value is negative the player loses energy). The player must have non-negative amount of energy at any moment of the time.

Initially Caisa stand at 0 pylon and has 0 energy. The game provides a special opportunity: one can pay a single dollar and increase the height of anyone pylon by one. Caisa may use that opportunity several times, but he doesn't want to spend too much money. What is the minimal amount of money he must paid to reach the goal of the game?

Input
The first line contains integer n (1 ≤ n ≤ 105). The next line contains n integers h1, h2, ..., hn (1  ≤  hi  ≤  105) representing the heights of the pylons.

Output
Print a single number representing the minimum number of dollars paid by Caisa.

Examples
inputCopy
5
3 4 3 2 4
outputCopy
4
inputCopy
3
4 4 4
outputCopy
4
Note
In the first sample he can pay 4 dollars and increase the height of pylon with number 0 by 4 units. Then he can safely pass to the last pylon.


Codeforces (c) Copyright 2010-2022 Mike Mirzayanov
The only programming contests Web 2.0 platform
Server time: Apr/29/2022 13:29:15UTC+5.5 (j2).
Desktop version, switch to mobile version.
Privacy Policy
Supported by

*/

#include <iostream>
using namespace std;

int main()
{
    int n, e(0), d(0);
    cin >> n;
    int p[n];
    p[0] = 0;

    for (int i = 1; i <= n; i++)
    {
        cin >> p[i];
        e += p[i - 1] - p[i];
        if (e < 0)
        {
            d -= e;
            e = 0;
        }
    }

    cout << d << endl;
    return 0;
}