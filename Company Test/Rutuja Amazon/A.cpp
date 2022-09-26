#include <bits/stdc++.h>
using namespace std;

long findMinHealth(vector<int> power, int armor)
{
    long long temp = 0;
    long long sum = accumulate(power.begin(), power.end(), temp);
    long long mx = *max_element(power.begin(), power.end());
    return sum - min(1LL * armor, mx) + 1;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n, a;
    cin >> n >> a;
    vector<int> arr(n, 0);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cout << findMinHealth(arr, a) << endl;
}