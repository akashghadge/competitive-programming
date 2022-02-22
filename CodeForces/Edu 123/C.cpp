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
int kadens(vi arr, int size)
{
    int max_ending_here = 0, max_so_far = INT_MIN;
    for (int i = 0; i < size; i++)
    {

        // include current element to previous subarray only
        // when it can add to a bigger number than itself.
        if (arr[i] <= max_ending_here + arr[i])
        {
            max_ending_here += arr[i];
        }

        // Else start the max subarray from current element
        else
        {
            max_ending_here = arr[i];
        }
        if (max_ending_here > max_so_far)
            max_so_far = max_ending_here;
    }
    return max_so_far;
}

// O(n) solution for finding maximum sum of
// a subarray of size k
#include <iostream>
using namespace std;

// Returns maximum sum in a subarray of size k.
pii maxSum(vi arr, int n, int k)
{

    int res = INT_MIN;
    for (int i = 0; i < k; i++)
        res += arr[i];
    int curr_sum = res;
    int start = 0;
    int end = k - 1;
    for (int i = k; i < n; i++)
    {
        curr_sum += arr[i] - arr[i - k];
        if (res < curr_sum)
        {
            start = i - k + 1;
            end = i;
            res = max(res, curr_sum);
        }
    }

    return {start, end};
}
void sol(vi arr, int n, int x)
{
    for (int k = 0; k <= n; k++)
    {
        if (k == 0)
            cout << kadens(arr, n) << " ";
        else if (k == 1)
        {
            auto ind = max_element(arr.begin(), arr.end());
            int indx = ind - arr.begin();
            vi temp = arr;
            temp[indx - 1] += x;
            cout << kadens(temp, n) << " ";
        }
        else
        {
            pair<int, int> curr = maxSum(arr, n, k);
            vi temp = arr;
            for (int i = curr.first; i <= curr.second; i++)
            {
                temp[i] += x;
            }
            cout << curr.first << " " << curr.second << en;
            cout << kadens(temp, n) << " ";
            // cout << curr.first << " " << curr.second << en;
        }
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
        int N, x;
        cin >> N, x;
        vi arr(N);
        for (int i = 0; i < N; i++)
        {
            cin >> arr[i];
        }
        sol(arr, N, x);
    }
    return 0;
}