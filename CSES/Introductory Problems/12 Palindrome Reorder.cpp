/*
Given a string, your task is to reorder its letters in such a way that it becomes a palindrome (i.e., it reads the same forwards and backwards).

Input

The only input line has a string of length n consisting of characters A–Z.

Output

Print a palindrome consisting of the characters of the original string. You may print any valid solution. If there are no solutions, print "NO SOLUTION".

Constraints
1≤n≤106
Example

Input:
AAAACACBA

Output:
AACABACAA
Introductory Problems

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
void sol()
{
    string fail = "NO SOLUTION";
    unordered_map<char, int> mp;
    for (auto ch : str)
        mp[ch]++;
    int odds = 0;
    for (auto val : mp)
        if (val.second % 2 != 0)
            odds++;
    if (odds >= 2)
    {
        cout << fail << en;
        return;
    }
    int i = 0;
    int j = str.size() - 1;
    char sp = ' ';
    for (auto val : mp)
    {
        if (val.second % 2 != 0)
        {
            sp = val.first;
            continue;
        }
        while (val.second)
        {
            val.second -= 2;
            str[i] = str[j] = val.first;
            i++;
            j--;
        }
    }
    for (int k = i; k <= j; k++)
    {
        str[k] = sp;
    }
    cout << str << en;
}
int main()
{
    FAST;
    int T = 1;
    while (T--)
    {
        input();
        sol();
    }
    return 0;
}