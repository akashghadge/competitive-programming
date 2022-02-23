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
void sol(vi arr, int n)
{
    vi gcd(n);
    if (n == 3)
    {
        int curr1 = __gcd(arr[0], arr[1]);
        int curr2 = __gcd(arr[2], arr[1]);
        if (curr1 == 1 && curr2 == 1)
        {
            arr[1] *= arr[0] * arr[2];
        }
        else if (curr1 == 1)
        {
            arr[0] *= arr[1];
        }
        else if (curr2 == 1)
        {
            arr[1] *= arr[2];
        }
        printVector(arr);
        return;
    }
    for (int i = 1; i < n - 1; i++)
    {
        int curr1 = __gcd(arr[i - 1], arr[i]);
        int curr2 = __gcd(arr[i + 1], arr[i]);
        if (curr1 == 1 && curr1 == 2)
        {
            arr[i] *= (arr[i - 1] * arr[i + 1]);
        }
        else if (curr1 == 1)
        {
            arr[i - 1] *= arr[i];
        }
    }
    for (auto val : arr)
    {
        cout << val << " ";
    }
    cout << en;
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
        for (int i = 0; i < N; i++)
        {
            cin >> arr[i];
        }
        sol(arr, N);
    }
    return 0;
}