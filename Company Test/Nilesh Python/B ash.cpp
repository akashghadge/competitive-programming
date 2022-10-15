#include <bits/stdc++.h>
using namespace std;
int lcm(int a, int b) { return (a * b) / __gcd(a, b); }
void print(vector<int> arr)
{
    for (auto val : arr)
        cout << val << " ";
    cout << endl;
}
vector<int> solve(vector<int> &arr, int n)
{

    while (true)
    {
        for (int i = 0; i < n - 1; i++)
        {
            if (__gcd(arr[i], arr[i + 1]))
            {
                
            }
        }
    }
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr(n, 0);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        vector<int> ans = solve(arr, n);
        for (auto val : ans)
            cout << val << " ";
        cout << endl;
    }
}