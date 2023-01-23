#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> arr;
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        mp[val]++;
        arr.push_back(val);
    }
    int k;
    cin >> k;
    int cn = 0;
    bool f = 1;
    for (auto val : arr)
    {
        if (mp[val] == 1)
        {
            cn++;
        }
        if (cn == k)
        {
            cout << val << endl;
            f = 0;
            break;
        }
    }
    if (f)
        cout << -1 << endl;
}