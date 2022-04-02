/*
When Valera has got some free time, he goes to the library to read some books. Today he's got t free minutes to read. That's why Valera took n books in the library and for each book he estimated the time he is going to need to read it. Let's number the books by integers from 1 to n. Valera needs ai minutes to read the i-th book.

Valera decided to choose an arbitrary book with number i and read the books one by one, starting from this book. In other words, he will first read book number i, then book number i + 1, then book number i + 2 and so on. He continues the process until he either runs out of the free time or finishes reading the n-th book. Valera reads each book up to the end, that is, he doesn't start reading the book if he doesn't have enough free time to finish reading it.

Print the maximum number of books Valera can read.

Input
The first line contains two integers n and t (1 ≤ n ≤ 105; 1 ≤ t ≤ 109) — the number of books and the number of free minutes Valera's got. The second line contains a sequence of n integers a1, a2, ..., an (1 ≤ ai ≤ 104), where number ai shows the number of minutes that the boy needs to read the i-th book.

Output
Print a single integer — the maximum number of books Valera can read.

Examples
inputCopy
4 5
3 1 2 1
outputCopy
3
inputCopy
3 3
2 2 3
outputCopy
1

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
bool pre(vi &arr, int n, int mid, int t)
{
    int sum = 0;
    for (int i = 0; i < mid; i++)
    {
        sum += arr[i];
    }
    if (sum <= t)
    {
        return true;
    }
    for (int i = mid; i < n; i++)
    {
        sum -= arr[i - mid];
        sum += arr[i];
        if (sum <= t)
            return true;
    }
    if (sum <= t)
    {
        return true;
    }
    return false;
}
int sol(vi arr, int n, int t)
{
    int lo = 0;
    int ans = 0;
    int hi = n;
    pre(arr, n, 3, t);

    while (lo <= hi)
    {
        int mid = (lo + hi) / 2;
        if (pre(arr, n, mid, t))
        {
            lo = mid + 1;
            ans = mid;
        }
        else
        {
            hi = mid - 1;
        }
    }
    return ans;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    FAST;
    int n, t;
    cin >> n >> t;
    vi arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << sol(arr, n, t) << en;
    return 0;
}