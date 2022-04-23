/*
Ichihime is the current priestess of the Mahjong Soul Temple. She claims to be human, despite her cat ears.

These days the temple is holding a math contest. Usually, Ichihime lacks interest in these things, but this time the prize for the winner is her favorite — cookies. Ichihime decides to attend the contest. Now she is solving the following problem.



You are given four positive integers a, b, c, d, such that a≤b≤c≤d.

Your task is to find three integers x, y, z, satisfying the following conditions:

a≤x≤b.
b≤y≤c.
c≤z≤d.
There exists a triangle with a positive non-zero area and the lengths of its three sides are x, y, and z.
Ichihime desires to get the cookie, but the problem seems too hard for her. Can you help her?

Input
The first line contains a single integer t (1≤t≤1000)  — the number of test cases.

The next t lines describe test cases. Each test case is given as four space-separated integers a, b, c, d (1≤a≤b≤c≤d≤109).

Output
For each test case, print three integers x, y, z  — the integers you found satisfying the conditions given in the statement.

It is guaranteed that the answer always exists. If there are multiple answers, print any.

Example
inputCopy
4
1 3 5 7
1 5 5 7
100000 200000 300000 400000
1 1 977539810 977539810
outputCopy
3 4 5
5 5 5
182690 214748 300999
1 977539810 977539810
Note
One of the possible solutions to the first test case:



One of the possible solutions to the second test case:




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
int a, b, c, d;
void input()
{
    cin >> a >> b >> c >> d;
}
void sol()
{
    cout << a << " " << c << " " << c << en;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    FAST;
    int T = 1;
    cin >> T;
    while (T--)
    {
        input();
        sol();
    }
    return 0;
}