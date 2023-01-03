#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> arr(n, 1);
    arr[0] = 0;
    int i = k;
    while (i != 0)
    {
        arr[i] = 0;
        i = (i + k) % n;
    }
    bool f = 1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i])
        {
            cout << i + 1 << " ";
            f = 0;
        }
    }
    if (f)
        cout << 0 << endl;
    else
        cout << endl;
}