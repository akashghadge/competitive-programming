/*
Let's define a multiplication operation between a string a and a positive integer x: a⋅x is the string that is a result of writing x copies of a one after another. For example, "abc" ⋅ 2 = "abcabc", "a" ⋅ 5 = "aaaaa".

A string a is divisible by another string b if there exists an integer x such that b⋅x=a. For example, "abababab" is divisible by "ab", but is not divisible by "ababab" or "aa".

LCM of two strings s and t (defined as LCM(s,t)) is the shortest non-empty string that is divisible by both s and t.

You are given two strings s and t. Find LCM(s,t) or report that it does not exist. It can be shown that if LCM(s,t) exists, it is unique.

Input
The first line contains one integer q (1≤q≤2000) — the number of test cases.

Each test case consists of two lines, containing strings s and t (1≤|s|,|t|≤20). Each character in each of these strings is either 'a' or 'b'.

Output
For each test case, print LCM(s,t) if it exists; otherwise, print -1. It can be shown that if LCM(s,t) exists, it is unique.

Example
inputCopy
3
baba
ba
aa
aaa
aba
ab
outputCopy
baba
aaaaaa
-1
Note
In the first test case, "baba" = "baba" ⋅ 1 = "ba" ⋅ 2.

In the second test case, "aaaaaa" = "aa" ⋅ 3 = "aaa" ⋅ 2.


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
string s, t;
void input()
{
    cin >> s >> t;
}
void sol()
{
    
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