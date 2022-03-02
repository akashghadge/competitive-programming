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
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        if (n == 2)
        {
            cout << -1 << en;
        }
        else if (n % 2 != 0)
        {

            vi arr(n, 0);
            for (int i = 0; i < n; i++)
            {
                arr[i] = i + 1;
            }
            reverse(arr.begin(), arr.end());
            for (auto val : arr)
            {
                cout << val << " ";
            }
            cout << en;
        }
        else
        {
            cout << "2 3 1 4 ";
            if (n > 4)
            {
                for (int i = 5; i <= n; i++)
                {
                    cout << i << " ";
                }
                cout << en;
            }
        }
    }
    return 0;
}