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
bool predicate(vector<int> &a, vector<int> &b, int n, int k)
{
    for (int start = 0; start < n - k + 1; start++)
    {
        for (int i = 0; i < n - k + 1; i++)
        {
            int cn = 0;
            for (int j = i, curr = start; j < i + k; j++, curr++)
            {
                if (a[curr] <= b[j])
                    cn++;
            }
            if (cn == k)
                return true;
        }
    }
    return false;
}
int largestK(vector<int> &a, vector<int> &b, int n)
{
    int start = 0, end = n;
    int mid, result;
    while (start <= end)
    {

        mid = start + (end - start) / 2;

        if (predicate(a, b, n, mid))
        {

            result = mid;
            start = mid + 1;
        }

        else
        {
            end = mid - 1;
        }
    }
    return result;
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
        vi arr2(N);
        for (int i = 0; i < N; i++)
        {
            cin >> arr2[i];
        }
        cout << largestK(arr, arr2, N) << en;
    }
    return 0;
}