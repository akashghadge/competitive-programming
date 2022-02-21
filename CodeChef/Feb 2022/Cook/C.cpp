#include <bits/stdc++.h>
using namespace std;
#define en "\n"
#define ll long long
#define v vector
#define vi vector<int>
#define vll vector<ll>
#define vii vector<vector<int>>
#define pii pair<int, int>
#define vpi vector<pair<int, int>>
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
void no()
{
    cout << "No" << en;
}
void yes()
{
    cout << "Yes" << en;
}
void sol(int n, string str)
{
    if (str[n] == '0')
    {
        no();
    }
    else if (str[0] == '0' || str[1] == '0')
    {
        no();
    }
    else
    {
        vi arr(n);
        for (int i = 0; i < n; i++)
            arr[i] = i;

        for (int i = 1; i < str.size(); i++)
        {
            if (str[i] == '0')
            {
                swap(arr[i - 1], arr[i]);
            }
        }

        yes();
        for (auto val : arr)
        {
            cout << val << " ";
        }
        cout << en;
    }
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    FAST;
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        string str;
        cin >> str;
        sol(n, str);
    }
    return 0;
}