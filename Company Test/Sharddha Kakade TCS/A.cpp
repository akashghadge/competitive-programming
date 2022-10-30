#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n, 0);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int mask = INT_MAX;
    for (auto val : arr)
        mask &= val;
    int cn = 0;
    while (mask)
        cn++, mask = (mask - 1) & mask;
    cout << cn << endl;
}