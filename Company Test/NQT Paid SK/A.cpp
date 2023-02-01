#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n, p;
    cin >> n >> p;
    vector<int> arr((n * 2) - 1, 0);
    int ptr = 1;
    for (int i = 0; i < (n * 2) - 1; i += 2)
    {
        arr[i] = ptr;
        ptr++;
    }
    int j = arr.size() - 1;
    int i = arr.size() - 1;
    while (j >= 0 and i >= 0)
    {
        while (i >= 0 and arr[i] != 0)
            i--;
        if (arr[i] == 0)
            swap(arr[i--], arr[j--]);
    }
    for (auto val : arr)
    {
        cout << val << " ";
    }
    cout << endl;
    cout << arr[p - 1] << endl;
}