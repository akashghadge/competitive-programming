/*
Problem
Alice likes all the numbers which are divisible by AA. Bob does not like the numbers which are divisible by BB and likes all the remaining numbers. Determine the smallest number greater than or equal to NN which is liked by both Alice and Bob. Output -1−1 if no such number exists.

Input Format
The first line contains a single integer TT — the number of test cases. Then the test cases follow.
The first and only line of each test case contains three space-separated integers AA, BB and NN — the parameters mentioned in the problem statment.
Output Format
For each test case, output the smallest number \ge≥ NN which is divisible by AA and is not divisible by BB. Output -1−1 if no such number exists.

Constraints
1 \leq T \leq 10001≤T≤1000
1 \leq A, B, N \leq 10^91≤A,B,N≤10
9

Sample 1:
Input
Output
3
5 2 11
4 3 24
7 7 100
15
28
-1
Explanation:
Test case 11: 1515 is the smallest number \ge≥ 1111 which is divisible by 55 and is not divisible by 22.

Test case 22: 2828 is the smallest number \ge≥ 2424 which is divisible by 44 and is not divisible by 33.

Test case 33: There does not exist any number which is divisible by A = 7A=7 and is not divisible by B = 7B=7.

accepted
Accepted
337
total-Submissions
Submissions
1431
accuracy
Accuracy
25.02

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
ll a, b, n;
void input()
{
    cin >> a >> b >> n;
}
void sol()
{
    if (a % b == 0)
    {
        cout << -1 << en;
    }
    else
    {
        ll div = n / a;
        if (n % a != 0)
            div++;
        ll num = div * a;
        while (num % b == 0)
        {
            num += a;
        }
        cout << num << en;
    }
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
        sol();
    }
    return 0;
}