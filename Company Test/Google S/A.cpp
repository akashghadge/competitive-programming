/*

*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n, k;
    string s;
    cin >> n >> s;
    int m = 26;
    vector<int> arr(m, 0);
    for (int i = 0; i < m; i++)
        cin >> arr[i];
    cin >> k;
    // sol
    cout << k << endl;
}