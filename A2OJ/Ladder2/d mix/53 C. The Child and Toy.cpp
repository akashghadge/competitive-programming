/*
On Children's Day, the child got a toy from Delayyy as a present. However, the child is so naughty that he can't wait to destroy the toy.

The toy consists of n parts and m ropes. Each rope links two parts, but every pair of parts is linked by at most one rope. To split the toy, the child must remove all its parts. The child can remove a single part at a time, and each remove consume an energy. Let's define an energy value of part i as vi. The child spend vf1 + vf2 + ... + vfk energy for removing part i where f1, f2, ..., fk are the parts that are directly connected to the i-th and haven't been removed.

Help the child to find out, what is the minimum total energy he should spend to remove all n parts.

Input
The first line contains two integers n and m (1 ≤ n ≤ 1000; 0 ≤ m ≤ 2000). The second line contains n integers: v1, v2, ..., vn (0 ≤ vi ≤ 105). Then followed m lines, each line contains two integers xi and yi, representing a rope from part xi to part yi (1 ≤ xi, yi ≤ n; xi ≠ yi).

Consider all the parts are numbered from 1 to n.

Output
Output the minimum total energy the child should spend to remove all n parts of the toy.

Examples
inputCopy
4 3
10 20 30 40
1 4
1 2
2 3
outputCopy
40
inputCopy
4 4
100 100 100 100
1 2
2 3
2 4
3 4
outputCopy
400
inputCopy
7 10
40 10 20 10 20 80 40
1 5
4 7
4 5
5 2
5 7
6 4
1 6
1 3
4 3
1 4
outputCopy
160
Note
One of the optimal sequence of actions in the first sample is:

First, remove part 3, cost of the action is 20.
Then, remove part 2, cost of the action is 10.
Next, remove part 4, cost of the action is 10.
At last, remove part 1, cost of the action is 0.
So the total energy the child paid is 20 + 10 + 10 + 0 = 40, which is the minimum.

In the second sample, the child will spend 400 no matter in what order he will remove the parts.


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
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    FAST;

    return 0;
}