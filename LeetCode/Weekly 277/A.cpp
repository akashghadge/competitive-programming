/*
Given an integer array nums, return the number of elements that have both a strictly smaller and a strictly greater element appear in nums.

 

Example 1:

Input: nums = [11,7,2,15]
Output: 2
Explanation: The element 7 has the element 2 strictly smaller than it and the element 11 strictly greater than it.
Element 11 has element 7 strictly smaller than it and element 15 strictly greater than it.
In total there are 2 elements having both a strictly smaller and a strictly greater element appear in nums.
Example 2:

Input: nums = [-3,3,3,90]
Output: 2
Explanation: The element 3 has the element -3 strictly smaller than it and the element 90 strictly greater than it.
Since there are two elements with the value 3, in total there are 2 elements having both a strictly smaller and a strictly greater element appear in nums.
 

Constraints:

1 <= nums.length <= 100
-105 <= nums[i] <= 105


*/
#include <bits/stdc++.h>
using namespace std;
#define en "\n"
#define vi vector<int>
#define vii vector<vector<int>>
#define vll vector<ll>
#define ll long long
#define v vector
#define pii pair<int, int>
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
class Solution
{
public:
    int countElements(vector<int> &nums)
    {
        int n = nums.size();
        int i = 0, j = n - 1;
        sort(nums.begin(), nums.end());
        int mn = nums[i];
        int mx = nums[j];
        for (int k = 0; k < n; k++)
        {
            if (mn == nums[i])
                i++;
        }
        for (int k = n - 1; k >= 0; k--)
        {
            if (mx == nums[j])
                j--;
        }
        if (i == n)
            return 0;
        return n - (i + (n - 1 - j));
    }
};
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    FAST;

    return 0;
}