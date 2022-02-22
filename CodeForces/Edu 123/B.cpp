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
bool valid(vi arr)
{
    for (int i = 2; i < arr.size(); i++)
    {
        if (arr[i - 2] + arr[i - 1] == arr[i])
            return false;
    }
    return true;
}
template <class printVal>
void printVector(vector<printVal> vec)
{
    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << " ";
    }
    cout << endl;
}
void sol(int n)
{
    vi arr(n);
    for (int i = 0; i < n; i++)
        arr[i] = i + 1;
    int ans = 0;
    reverse(arr.begin(), arr.end());
    for (int i = 0; i < n; i++)
    {
        printVector(arr);
        swap(arr[n - i - 1], arr[n - i - 2]);
        ans++;
        if (ans == n)
            break;
    }
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
        int n;
        cin >> n;
        sol(n);
    }
    return 0;
}