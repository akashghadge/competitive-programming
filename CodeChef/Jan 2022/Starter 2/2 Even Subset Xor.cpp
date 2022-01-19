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
bool valid(int n)
{
    int c = 0;
    while (n)
    {
        if (n & 1)
            c++;
        n >>= 1;
    }
    return c % 2 == 0;
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
        int N;
        cin >> N;
        vi arr(N);
        int i = 0;
        int ptr = 1;
        while (i < N)
        {
            if (valid(ptr * 3))
            {
                arr[i] = ptr * 3;
                i++;
                ptr++;
            }
            else
            {
                ptr++;
            }
        }
        printVector(arr);
    }

    return 0;
}