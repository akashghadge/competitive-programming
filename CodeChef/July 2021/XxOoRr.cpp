/*
Given an array A1,A2…AN, find the minimum number of operations (possibly zero) required to convert all integers in A to 0.

In one operation, you

choose a non-negative integer p (p≥0),
select at most K indices in the array A, and
for each selected index i, replace Ai with Ai⊕2p. Here, ⊕ denotes bitwise XOR.
Input
The first line contains an integer T - the number of test cases. Then T test cases follow.
The first line of each test case contains two integers N, K - the size of the array and the maximum number of elements you can select in an operation.
The second line of each test case contains N integers A1,A2…AN.
Output
For each test case, output the minimum number of operations to make all elements of the array 0.

Constraints
1≤T≤105
1≤N,K≤105
0≤Ai≤109
The sum of N over all test cases does not exceed 2⋅105
Subtasks
Subtask #1 (100 points): Original Constraints
Sample Input
1
3 2
3 6 10
Sample Output
5
Explanation
Here is one way to achieve [0,0,0] from [3,6,10] in 5 operations:

Choose p=0 and indices {1}. Now A becomes [2,6,10].
Choose p=1 and indices {1,2}. Now A becomes [0,4,10].
Choose p=1 and indices {3}. Now A becomes [0,4,8].
Choose p=2 and indices {2}. Now A becomes [0,0,8].
Choose p=3 and indices {3}. Now A becomes [0,0,0].
It can be shown that at least 5 operations are required.


*/

#include <bits/stdc++.h>
#define en "\n"
#define ll long long
using namespace std;
int N, K;
int sol(vector<ll> &arr)
{
    int numberOfMoves = 0;
    for (int p = 0; p < 63; p++)
    {
        int setBits = 0;
        ll mask = (1LL << p);
        for (int i = 0; i < arr.size(); i++)
        {
            if ((mask & arr[i]) != 0)
            {
                setBits++;
            }
        }
        numberOfMoves += setBits / K;
        if ((setBits % K) != 0)
        {
            numberOfMoves++;
        }
    }
    return numberOfMoves;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin >> T;
    while (T--)
    {
        cin >> N >> K;
        vector<ll> arr(N, 0);
        for (int i = 0; i < N; i++)
        {
            cin >> arr[i];
        }
        cout << sol(arr) << en;
    }

    return 0;
}