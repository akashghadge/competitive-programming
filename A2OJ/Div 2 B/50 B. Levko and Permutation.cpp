/*
Levko loves permutations very much. A permutation of length n is a sequence of distinct positive integers, each is at most n.

Let’s assume that value gcd(a, b) shows the greatest common divisor of numbers a and b. Levko assumes that element pi of permutation p1, p2, ... , pn is good if gcd(i, pi) > 1. Levko considers a permutation beautiful, if it has exactly k good elements. Unfortunately, he doesn’t know any beautiful permutation. Your task is to help him to find at least one of them.

Input
The single line contains two integers n and k (1 ≤ n ≤ 105, 0 ≤ k ≤ n).

Output
In a single line print either any beautiful permutation or -1, if such permutation doesn’t exist.

If there are multiple suitable permutations, you are allowed to print any of them.

Examples
inputCopy
4 2
outputCopy
2 4 3 1
inputCopy
1 1
outputCopy
-1
Note
In the first sample elements 4 and 3 are good because gcd(2, 4) = 2 > 1 and gcd(3, 3) = 3 > 1. Elements 2 and 1 are not good because gcd(1, 2) = 1 and gcd(4, 1) = 1. As there are exactly 2 good elements, the permutation is beautiful.

The second sample has no beautiful permutations.


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
void sol(int n, int k)
{
    if (k == n)
    {
        cout << -1 << en;
        return;
    }

    vi arr(n);
    for (int i = 0; i < n; i++)
    {
        arr[i] = i + 1;
    }
    k = n - k;
    if (k % 2 == 0)
    {
        k /= 2;
        int ptr = 0;
        int i = 0;
        while (ptr < k)
        {
            swap(arr[i], arr[i + 1]);
            i += 2;
            ptr++;
        }
    }
    else
    {
        k--;
        k /= 2;
        int ptr = 0;
        int i = 1;
        while (ptr < k)
        {
            swap(arr[i], arr[i + 1]);
            i += 2;
            ptr++;
        }
    }
    for (auto val : arr)
    {
        cout << val << " ";
    }
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    FAST;
    int n, k;
    cin >> n >> k;
    sol(n, k);
    return 0;
}