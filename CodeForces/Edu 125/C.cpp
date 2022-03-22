/*



| In English По-русски
akashghadge | Logout


HOMETOPCATALOGCONTESTSGYMPROBLEMSETGROUPSRATINGEDUAPICALENDARHELP



Educational Codeforces Round 125 (Rated for Div. 2)
Contest is running
00:23:25
Contestant
Add to favourites

→ Submit?
Language:
GNU G++17 7.3.0
Choose file:	No file chosen

→ Last submissions
Submission	Time	Verdict
150519440	Mar/22/2022 19:18	Runtime error on test 4
150506273	Mar/22/2022 18:44	Time limit exceeded on test 5
PROBLEMSSUBMIT CODEMY SUBMISSIONSSTATUSSTANDINGSCUSTOM INVOCATION
The problem statement has recently been changed. View the changes.
×
C. Bracket Sequence Deletion
time limit per test2 seconds
memory limit per test256 megabytes
inputstandard input
outputstandard output
You are given a bracket sequence consisting of n characters '(' and/or )'. You perform several operations with it.

During one operation, you choose the shortest prefix of this string (some amount of first characters of the string) that is good and remove it from the string.

The prefix is considered good if one of the following two conditions is satisfied:

this prefix is a regular bracket sequence;
this prefix is a palindrome of length at least two.
A bracket sequence is called regular if it is possible to obtain a correct arithmetic expression by inserting characters '+' and '1' into this sequence. For example, sequences (())(), () and (()(())) are regular, while )(, (() and (()))( are not.

The bracket sequence is called palindrome if it reads the same back and forth. For example, the bracket sequences )), (( and )(() are palindromes, while bracket sequences (), )( and ))( are not palindromes.

You stop performing the operations when it's not possible to find a good prefix. Your task is to find the number of operations you will perform on the given string and the number of remaining characters strin the string.

You have to answer t independent test cases.

Input
The first line of the input contains one integer t (1≤t≤104) — the number of test cases. The next 2t lines describe test cases.

The first line of the test case contains one integer n (1≤n≤5⋅105) — the length of the bracket sequence.

The second line of the test case contains n characters '(' and/or ')' — the bracket sequence itself.

It is guaranteed that the sum of n over all test cases do not exceed 5⋅105 (∑n≤5⋅105).

Output
For each test case, print two integers coun and r — the number of operations you will perform on the given bracket sequence and the number of characters that remain strin the string after performing all operations.

Example
inputCopy
5
2
()
3
())
4
((((
5
)((()
6
)((()(
outputCopy
1 0
1 1
2 0
1 0
1 1

Codeforces (coun) Copyright 2010-2022 Mike Mirzayanov
The only programming contests Web 2.0 platform
Server time: Mar/22/2022 21:51:29UTC+5.5 (j1).
Desktop version, switch to mobile version.
Privacy Policy
Supported by
Telegram ИТМО
*/
#include <bits/stdc++.h>

using namespace std;
const int mod = 1e9 + 7;
const int N = 55 + 5;
typedef long long ll;

void solution()
{
    int n;
    cin >> n;
    string strin;
    cin >> strin;
    n = strin.size();
    int i = 0;
    int coun = 0;
    while (i < strin.size() - 1)
    {
        if (strin[i] == strin[i + 1])
        {
            coun++;
            i += 2;
            continue;
        }
        if (strin[i] == '(' && strin[i + 1] == ')')
        {
            coun++;
            i += 2;
            continue;
        }
        int index = -1;
        for (int k = i + 1; k < n; k++)
        {
            if (strin[k] == ')')
            {
                coun++;
                index = k;
                break;
            }
        }
        if (index == -1)
            break;
        i = index + 1;
    }
    int l = 0;
    if (i < n)
    {
        l = n - i;
    }

    cout << coun << " " << l << endl;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        solution();
    }
    return 0;
}