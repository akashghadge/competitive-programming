#include <bits/stdc++.h>
using namespace std;
int sol(vector<int> &arr, int n, vector<pair<int, int>> &q, int m)
{
    int ans = INT_MIN;
    for (auto curr : q)
    {
        set<int> st;
        for (int i = 0; i <= curr.second - curr.first + 1; i++)
            st.insert(i);

        for (int i = curr.first; i <= curr.second; i++)
            st.find(arr[i]) != st.end() ? st.erase(arr[i]) : 0;
        ans = max(ans, *st.begin());
    }
    return ans;
}
int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> arr(n, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    vector<pair<int, int>> q(m);
    for (int i = 0; i < m; i++)
    {
        cin >> q[i].first;
        cin >> q[i].second;
        q[i].first--;
        q[i].second--;
    }
    cout << sol(arr, n, q, n) << endl;
}