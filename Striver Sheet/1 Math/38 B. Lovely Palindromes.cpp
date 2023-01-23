/*
Pari has a friend who loves palindrome numbers. A palindrome number is a number that reads the same forward or backward. For example 12321, 100001 and 1 are palindrome numbers, while 112 and 1021 are not.

Pari is trying to love them too, but only very special and gifted people can understand the beauty behind palindrome numbers. Pari loves integers with even length (i.e. the numbers with even number of digits), so she tries to see a lot of big palindrome numbers with even length (like a 2-digit 11 or 6-digit 122221), so maybe she could see something in them.

Now Pari asks you to write a program that gets a huge integer n from the input and tells what is the n-th even-length positive palindrome number?

Input
The only line of the input contains a single integer n (1 ≤ n ≤ 10100 000).

Output
Print the n-th even-length palindrome number.

Examples
inputCopy
1
outputCopy
11
inputCopy
10
outputCopy
1001
Note
The first 10 even-length palindrome numbers are 11, 22, 33, ... , 88, 99 and 1001.


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
string str;
void input()
{
    cin >> str;
}
bool palindrome(string temp)
{
    int i = 0, j = temp.size() - 1;
    while (i < j)
    {
        if (temp[i] != temp[j])
            return false;
        i++, j--;
    }
    return true;
}
void sol()
{

	cout << str;
	reverse(str.begin(), str.end());
	cout << str << endl;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    FAST;
    int T = 1;
    // cin >> T;
    while (T--)
    {
        input();
        sol();
    }
    return 0;
}