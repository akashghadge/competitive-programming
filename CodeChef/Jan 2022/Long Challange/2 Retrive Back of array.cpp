/*
Dazzler had an array of N distinct non-negative integers. Somehow he lost the array, but he knows the bitwise XOR of all the elements in the array. You have to help him to retrieve the array.

You are given two positive integers N and X. Construct an array A of N elements with the following conditions:

For each i (1≤i≤N), 0≤Ai≤5⋅105.
All the elements in the array A should be pairwise distinct, i.e, Ai≠Aj if i≠j
The bitwise XOR of all the N elements in the array should be equal to X, i.e, A1⊕A2⊕…⊕AN=X, where ⊕ denotes the bitwise XOR operation.
If there are multiple possible solutions, you may print any of them.

Input Format
The first line of input contains a single integer T, denoting the number of test cases. The description of T test cases follows.
The first and only line of each test case contains two space-separated integers N and X — the size of the array and the bitwise XOR of the entire array.
Output Format
For each test case, output the N distinct non-negative integers satisfying the constraints above.

Constraints
1≤T≤2⋅105
1≤N≤105
1≤X≤5⋅105
0≤Ai≤5⋅105
The sum of N over all test cases does not exceed 3⋅105
Subtasks
Subtask 1 (30 points): 1≤X≤105
Subtask 2 (70 points): 1≤X≤5⋅105
Sample Input 1 
3
1 10
2 4
3 1
Sample Output 1 
10
7 3
5 6 2

*/

#include <bits/stdc++.h>
using namespace std;
#define en "\n"
#define vi vector<int>
#define vii vector<vector<int>>
#define vll vector<ll>
#define ll long long
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
void sol(int n, int x)
{
    if (n == 1)
    {
        cout << x << en;
        return;
    }
    
}
int main()
{
    FAST;
    int T;
    cin >> T;
    while (T--)
    {
        int n, x;
        cin >> n >> x;
        sol(n, x);
    }

    return 0;
}