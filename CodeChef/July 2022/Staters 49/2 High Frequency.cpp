/*
Chef has an array AA of length NN.

Let F(A)F(A) denote the maximum frequency of any element present in the array.

For example:

If A = [1, 2, 3, 2, 2, 1]A=[1,2,3,2,2,1], then F(A) = 3F(A)=3 since element 22 has the highest frequency = 3=3.
If A = [1, 2, 3, 3, 2, 1]A=[1,2,3,3,2,1], then F(A) = 2F(A)=2 since highest frequency of any element is 22.
Chef can perform the following operation at most once:

Choose any subsequence SS of the array such that every element of SS is the same, say xx. Then, choose an integer yy and replace every element in this subsequence with yy.
For example, let A = [1, 2, 2, 1, 2, 2]A=[1,2,2,1,2,2]. A few examples of the operation that Chef can perform are:

[1, \textcolor{red}{2, 2}, 1, 2, 2] \to [1, \textcolor{blue}{5, 5}, 1, 2, 2][1,2,2,1,2,2]→[1,5,5,1,2,2]
[1, \textcolor{red}{2}, 2, 1, \textcolor{red}{2, 2}] \to [1, \textcolor{blue}{19}, 2, 1, \textcolor{blue}{19, 19}][1,2,2,1,2,2]→[1,19,2,1,19,19]
[\textcolor{red}{1}, 2, 2, 1, 2, 2] \to [\textcolor{blue}{2}, 2, 2, 1, 2, 2][1,2,2,1,2,2]→[2,2,2,1,2,2]
Determine the minimum possible value of F(A)F(A) Chef can get by performing the given operation at most once.

Input Format
The first line of input will contain a single integer TT, denoting the number of test cases.
Each test case consists of two lines of input.
The first line of each test case contains a single integer NN denoting the length of array AA.
The second line contains NN space-separated integers denoting the array AA.
Output Format
For each test case, output the minimum value of F(A)F(A) Chef can get if he performs the operation optimally.

Constraints
1 \leq T \leq 50001≤T≤5000
2 \leq N \leq 10^52≤N≤10
5

1 \leq A_i \leq N1≤A
i
​
 ≤N
The sum of NN over all test cases won't exceed 2 \cdot 10^52⋅10
5
 .
Sample 1:
Input
Output
3
4
1 2 1 2
5
1 1 1 1 1
6
1 2 2 1 2 2
2
3
2
Explanation:
Test case 11: Chef cannot reduce the value of F(A)F(A) by performing any operation.

Test case 22: Chef can perform the operation [\textcolor{red}{1}, 1, \textcolor{red}{1}, 1, \textcolor{red}{1}] \to [\textcolor{blue}{2}, 1, \textcolor{blue}{2}, 1, \textcolor{blue}{2}][1,1,1,1,1]→[2,1,2,1,2]. The value of F(A)F(A) in this case is 33, which is the minimum possible.

Test case 33: Chef can perform the operation [1, \textcolor{red}{2, 2}, 1, 2, 2] \to [1, \textcolor{blue}{5, 5}, 1, 2, 2][1,2,2,1,2,2]→[1,5,5,1,2,2]. The value of F(A)F(A) in this case is 22, which is the minimum possible.


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
int n;
vi arr;
void input()
{
    cin >> n;
    arr.resize(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}
void sol()
{

    unordered_map<int, int> mp;
    for (auto val : arr)
    {
        mp[val]++;
    }
    int mx = 0;
    for (auto val : mp)
        mx = max(mx, val.second);
    for (auto &val : mp)
    {
        if (mx == val.second)
        {
            if (val.second % 2 == 1)
                val.second++;
            val.second = val.second / 2;
            break;
        }
    }
    mx = 0;
    for (auto val : mp)
    {
        mx = max(mx, val.second);
    }
    cout << mx << en;
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