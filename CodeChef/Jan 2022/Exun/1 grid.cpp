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
        for (auto val : vec[i])
        {
            cout << val << " ";
        }
        cout << endl;
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
    for (int t = 0; t < T; t++)
    {
        int num;
        cin >> num;
        vii mat(num, vi(num, 0));
        int offset = 0;
        for (int i = 1; i <= num; i++)
        {
            for (int j = 1; j <= num; j++)
            {
                mat[i - 1][j - 1] = 1;
            }
        }
        printVector(mat);
    }

    return 0;
}