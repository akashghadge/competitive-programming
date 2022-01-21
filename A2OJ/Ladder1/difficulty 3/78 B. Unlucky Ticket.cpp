#include <bits/stdc++.h>
using namespace std;
#define en "\n"
#define vi vector<int>
#define vii vector<vector<int>>
#define vll vector<ll>
#define ll long long
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
bool sol(string str, int n)
{
    string left = str.substr(0, n);
    string right = str.substr(n);
    sort(left.begin(), left.end());
    sort(right.begin(), right.end());
    bool f1 = true;
    bool f2 = true;

    for (int i = 0; i < n; i++)
    {
        if (left[i] == right[i])
            f1 = f2 = false;
        if (left[i] < right[i])
            f1 = false;
        if (left[i] > right[i])
            f2 = false;
    }
    return f1 or f2;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    FAST;
    int N;
    cin >> N;
    string str;
    cin >> str;
    sol(str, N) ? cout << "YES" : cout << "NO";
    cout << en;
    return 0;
}