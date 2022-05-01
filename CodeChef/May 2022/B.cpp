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
/*input sections*/
int n;
vi arr;
void input()
{
    cin >> n;
    arr.resize(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}
// if 3 is there both side have other than 0
// 
bool valid(vi curr)
{
    for (int i = 0; i < n; i++)
    {
        int cn = 0;
        for (int j = i; j < i + 3; j++)
        {
            for (int k = j + 1; k < i + 3; k++)
            {
                if (curr[j] > curr[k])
                    cn++;
            }
        }
        if (cn != arr[i])
            return false;
    }
    return true;
}
void sol()
{
    vi curr(n + 2);
    for (int i = 0; i < n + 2; i++)
    {
        curr[i] = i + 1;
    }
    cout << "#" << en;
    do
    {
        if (valid(curr))
        {
            for (auto val : curr)
                cout << val << " ";
            cout << en;
        }
    } while (next_permutation(curr.begin(), curr.end()));
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    FAST;
    int T = 1;
    cin >> T;
    while (T--)
    {
        input();
        sol();
    }
    return 0;
}