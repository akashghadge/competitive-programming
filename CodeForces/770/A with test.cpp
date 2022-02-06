#include <bits/stdc++.h>
using namespace std;
#define en "\n"
#define vi vector<int>
#define vii vector<vector<int>>
#define vll vector<ll>
#define ll long long
#define v vector
#define pii pair<int, int>
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
bool isPalindrome(string str)
{
    int i = 0, j = str.size() - 1;
    while (i <= j)
    {
        if (str[i] != str[j])
            return false;
        i++;
        j--;
    }
    return true;
}
void test_case()
{
    int n, k;
    cin >> n >> k;
    string str;
    cin >> str;
    if (k == 0 || k == 1 || n == 1 || isPalindrome(str))
    {
        cout << 1 << en;
        return;
    }
    cout << 2 << en;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    FAST;
    int T;
    cin >> T;
    while (T--)
    {
        test_case();
    }
    return 0;
}