/*
For a binary string AA, let f(A)f(A) denote its badness, defined to be the difference between the number of zeros and number of ones present in it. That is, if the string has c_0c
0
​
  zeros and c_1c
1
​
  ones, its badness is |c_0 - c_1|∣c
0
​
 −c
1
​
 ∣. For example, the badness of "0101" is |1 - 1| = 0∣1−1∣=0, the badness of "100100" is |2 - 1| = 1∣2−1∣=1, the badness of "11011101" is |1 - 3| = 2∣1−3∣=2, and the badness of the empty string is |0 - 0| = 0∣0−0∣=0.

You are given an integer NN and a binary string SS.

You would like to partition SS into KK disjoint subsequences (some of which may be empty), such that the maximum badness among all these KK subsequences is minimized. Find this value.

Formally,

Let S_1, S_2, \ldots, S_KS
1
​
 ,S
2
​
 ,…,S
K
​
  be a partition of SS into disjoint subsequences. Every character of SS must appear in one of the S_iS
i
​
 . Some of the S_iS
i
​
  may be empty.
Then, find the minimum value of \max(f(S_1), f(S_2), \ldots, f(S_K))max(f(S
1
​
 ),f(S
2
​
 ),…,f(S
K
​
 )) across all possible choices of S_1, S_2, \ldots, S_KS
1
​
 ,S
2
​
 ,…,S
K
​
  satisfying the first condition.
Input Format
The first line of input will contain a single integer TT, denoting the number of test cases.
The description of each test case is as follows:
The first line contains two space-separated integers NN and KK.
The second line contains the binary string SS of length NN.
Output Format
​For each test case, print the minimum possible value of the maximum badness when SS is partitioned into KK subsequences.

Constraints
1 \leq T \leq 10001≤T≤1000
1 \leq N \leq 2 \cdot 10^51≤N≤2⋅10
5

1 \leq K \leq 10^91≤K≤10
9

SS is a binary string, i.e, contains only the characters 00 and 11
The sum of NN across all test cases doesn't exceed 2 \cdot 10^52⋅10
5

Sample 1:
Input
Output
3
7 5
1010100
4 1
1100
6 2
101111
1
0
2
Explanation:
Test case 11: Let's take a couple of examples.

Suppose the partition is \{"10", "10", "0", "10", "\ "\}{"10","10","0","10"," "}, obtained as \textcolor{red}{10}\textcolor{blue}{10}\textcolor{orange}{10}01010100 (elements of one color form a subsequence). The respective badness values are \{0, 0, 1, 0, 0\}{0,0,1,0,0}, the maximum of which is 11.
Suppose the partition is \{"101", "00", "\ ", "10", "\ "\}{"101","00"," ","10"," "}, obtained as \textcolor{red}{10}10\textcolor{red}{1}\textcolor{blue}{00}1010100. The respective badness values are \{1, 2, 0, 0, 0\}{1,2,0,0,0}, the maximum of which is 22.
The first partition, with a maximum badness of 11, is one of the optimal partitions.

Test case 22: The only possible partition is \{"1100"\}{"1100"}, which has a badness of 00.

Test case 33: The partitions \{"1011", "11"\}{"1011","11"} and \{"0111", "11"\}{"0111","11"} both lead to a badness of \max(2, 0) = 2max(2,0)=2, which is the minimum possible.


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
    int T = 1;
    cin >> T;
    while (T--)
    {
        int n, k;
        cin >> n >> k;
        string str;
        cin >> str;
        int one = 0;
        int zero = 0;
        for (auto val : str)
            if (val == '1')
                one++;
            else
                zero++;
        int mn = min(zero, one);
        zero -= mn;
        one -= mn;
        int curr = max(one, zero);
        if (curr % k == 0)
        {
            cout << curr / k << en;
        }
        else
        {
            cout << (curr / k) + 1 << en;
        }
    }
    return 0;
}