#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> arr(n, 0);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    map<int, int> mp;
    for (int i = 0; i <= k and i < n; i++)
    {
        mp[-arr[i]]++;
    }
    int ans = -1 * mp.begin()->first;
    for (int i = k + 1; i < n; i++)
    {
        mp[-arr[i]]++;
        mp[-arr[i - k]]--;
        if (mp[-arr[i - k]] == 0)
        {
            mp.erase(-arr[i - k]);
        }
        ans = min(-1 * mp.begin()->first, ans);
    }
    if (k != n)
    {
        for (int i = n - k - 1; i < n; i++)
        {
            ans = min(ans, arr[i]);
        }
    }
    cout << ans << endl;
}