#include <bits/stdc++.h>
using namespace std;
#define en "\n"
#define vi vector<int>
#define vii vector<vector<int>>
#define vll vector<ll>
#define ll long long
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
template <class printVal>
void printVector(vector<printVal> vec)
{
    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << " ";
    }
    cout << endl;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    FAST;
    int y, k, n;
    cin >> y >> k >> n;
    bool flag = true;
    for (int i = k; i <= n; i += k)
    {
        if (y < i && i <= n)
        {
            cout << i - y << " ";
            flag = false;
        }
    }
    if (flag)
        cout << "-1";
    cout << en;

    return 0;
}