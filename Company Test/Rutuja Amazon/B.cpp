#include <bits/stdc++.h>
using namespace std;

long getMinCost(vector<int> parcels, int k)
{
    unordered_set<int> st;
    for (auto val : parcels)
        st.insert(val);
    long long ans = 0;
    int cn = parcels.size();
    for (int i = 1; i <= k; i++)
    {
        if (cn < k and st.find(i) == st.end())
        {
            ans += i;
            cn++;
        }
    }
    return ans;
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
    cout << getMinCost(arr, a) << endl;
}