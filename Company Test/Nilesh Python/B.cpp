#include <bits/stdc++.h>
using namespace std;
int lcm(int a, int b) { return (a * b) / __gcd(a, b); }
void print(vector<int> arr)
{
    for (auto val : arr)
        cout << val << " ";
    cout << endl;
}
vector<int> solve1(vector<int> &arr, int n)
{
    while (true)
    {

        n = arr.size();
        vector<int> next;
        next.push_back(arr[0]);
        for (int i = 1; i < n; i++)
        {
            print(arr);
            if (__gcd(arr[i - 1], arr[i]) > 1)
            {
                next.push_back(lcm(next[i - 1], arr[i]));
            }
        }
        if (next.size() == arr.size())
            break;
        arr = next;
    }
    return arr;
}
vector<int> get(stack<int> st)
{
    vector<int> ans;
    while (st.size())
    {
        ans.push_back(st.top());
        st.pop();
    }
    reverse(ans.begin(), ans.end());
    return ans;
}
vector<int> solve(vector<int> &arr, int n)
{
    stack<int> st;
    st.push(arr[0]);
    for (int i = 1; i < n; i++)
    {
        if (__gcd(st.top(), arr[i]) > 1)
        {
            int val = lcm(st.top(), arr[i]);
            st.pop();
            st.push(val);
        }
        else
        {
            st.push(arr[i]);
        }
    }
    return get(st);
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr(n, 0);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        vector<int> ans = solve(arr, n);
        for (auto val : ans)
            cout << val << " ";
        cout << endl;
    }
}