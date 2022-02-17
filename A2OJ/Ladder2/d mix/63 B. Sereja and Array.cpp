/*
Sereja has got an array, consisting of n integers, a1, a2, ..., an. Sereja is an active boy, so he is now going to complete m operations. Each operation will have one of the three forms:

Make vi-th array element equal to xi. In other words, perform the assignment avi = xi.
Increase each array element by yi. In other words, perform n assignments ai = ai + yi (1 ≤ i ≤ n).
Take a piece of paper and write out the qi-th array element. That is, the element aqi.
Help Sereja, complete all his operations.

Input
The first line contains integers n, m (1 ≤ n, m ≤ 105). The second line contains n space-separated integers a1, a2, ..., an (1 ≤ ai ≤ 109) — the original array.

Next m lines describe operations, the i-th line describes the i-th operation. The first number in the i-th line is integer ti (1 ≤ ti ≤ 3) that represents the operation type. If ti = 1, then it is followed by two integers vi and xi, (1 ≤ vi ≤ n, 1 ≤ xi ≤ 109). If ti = 2, then it is followed by integer yi (1 ≤ yi ≤ 104). And if ti = 3, then it is followed by integer qi (1 ≤ qi ≤ n).

Output
For each third type operation print value aqi. Print the values in the order, in which the corresponding queries follow in the input.

Examples
inputCopy
10 11
1 2 3 4 5 6 7 8 9 10
3 2
3 9
2 10
3 1
3 10
1 1 10
2 10
2 10
3 1
3 10
3 9
outputCopy
2
9
11
20
30
40
39

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
void sol(vi arr, int n, vpi box, int b)
{
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    FAST;
    int N;
    cin >> N;
    int b;
    cin >> b;
    vi arr(N);
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }
    vpi box(b);
    for (int i = 0; i < b; i++)
    {
        cin >> box[i].first >> box[i].second;
    }
    sol(arr, N, box, b);
    return 0;
}