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
/*
lzl124631x's avatar
lzl124631x

5665
15 hours ago

107 VIEWS

See my latest update in repo LeetCode

Solution 1.
Intuition: If there are p plants between two sections, we multiply the answer by p + 1.

Algorithm:

If the total number of seats is not a positive even number, return 0

Scan corridor section by section, count the number of plants between sections, and multiply the answer by plant + 1.

// OJ: https://leetcode.com/contest/biweekly-contest-70/problems/number-of-ways-to-divide-a-long-corridor/
// Author: github.com/lzl124631x
// Time: O(N)
// Space: O(1)
*/
class Solution
{
public:
    int numberOfWays(string s)
    {
        long ans = 1, mod = 1e9 + 7, N = s.size(), total = 0, section = 0;
        for (int i = 0; i < N;)
        {
            int seat = 0, plant = 0;
            for (; i < N && seat < 2; ++i)
            {
                seat += s[i] == 'S';
                if (seat == 0)
                    plant += s[i] == 'P'; // Only count the plants in the front of the first seat of this section
            }
            if (seat && section++ > 0)
                ans = ans * (plant + 1) % mod;
            total += seat;
        }
        return total % 2 == 0 && total ? ans : 0; // if the total number of seats is not a positive even number, return 0
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