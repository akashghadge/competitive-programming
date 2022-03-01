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
bool isSorted(vi arr, int n)
{
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < arr[i - 1])
            return false;
    }
    return true;
}
bool all_same(string str)
{
    for (int i = 1; i < str.size(); i++)
    {
        if (str[i] != str[i - 1])
            return false;
    }

    return true;
}
template <class printVal>
void printVector(vector<printVal> vec)
{
    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << " ";
    }
    cout << endl;
}
int sol(vi arr, int n, string str)
{
    bool isSort = isSorted(arr, n);
    if (isSort)
    {
        return 0;
    }
    else if (all_same(str))
    {
        return -1;
    }
    else
    {
        vi temp = arr;
        sort(arr.begin(), arr.end());
        int start = INT_MAX, last = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] != temp[i])
            {
                start = min(i, start);
                last = max(last, i);
            }
        }

        bool flag1 = false, flag2 = false;
        for (int i = 0; i < start; i++)
        {
            if (str[i] != str[last])
                flag1 = true;
        }
        for (int i = last; i < n; i++)
        {
            if (str[i] != str[start])
                flag2 = true;
        }

        if (str[start] != str[last] || flag1 || flag2)
            return 1;
        else
            return 2;
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
        int N;
        cin >> N;
        vi arr(N);
        for (int i = 0; i < N; i++)
        {
            cin >> arr[i];
        }
        string str;
        cin >> str;
        cout << sol(arr, N, str) << en;
    }
    return 0;
}