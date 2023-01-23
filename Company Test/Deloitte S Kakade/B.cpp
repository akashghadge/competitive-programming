#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n;
    vector<int> arr(n, 0);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cin >> k;

    sort(arr.begin(), arr.begin() + k);
    for (auto val : arr)
        cout << val << " ";
    cout << endl;
}