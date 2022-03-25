/*
Reforms continue entering Berland. For example, during yesterday sitting the Berland Parliament approved as much as n laws (each law has been assigned a unique number from 1 to n). Today all these laws were put on the table of the President of Berland, G.W. Boosch, to be signed.

This time mr. Boosch plans to sign 2k laws. He decided to choose exactly two non-intersecting segments of integers from 1 to n of length k and sign all laws, whose numbers fall into these segments. More formally, mr. Boosch is going to choose two integers a, b (1 ≤ a ≤ b ≤ n - k + 1, b - a ≥ k) and sign all laws with numbers lying in the segments [a; a + k - 1] and [b; b + k - 1] (borders are included).

As mr. Boosch chooses the laws to sign, he of course considers the public opinion. Allberland Public Opinion Study Centre (APOSC) conducted opinion polls among the citizens, processed the results into a report and gave it to the president. The report contains the absurdity value for each law, in the public opinion. As mr. Boosch is a real patriot, he is keen on signing the laws with the maximum total absurdity. Help him.

Input
The first line contains two integers n and k (2 ≤ n ≤ 2·105, 0 < 2k ≤ n) — the number of laws accepted by the parliament and the length of one segment in the law list, correspondingly. The next line contains n integers x1, x2, ..., xn — the absurdity of each law (1 ≤ xi ≤ 109).

Output
Print two integers a, b — the beginning of segments that mr. Boosch should choose. That means that the president signs laws with numbers from segments [a; a + k - 1] and [b; b + k - 1]. If there are multiple solutions, print the one with the minimum number a. If there still are multiple solutions, print the one with the minimum b.

Examples
inputCopy
5 2
3 6 1 1 6
outputCopy
1 4
inputCopy
6 2
1 1 1 1 1 1
outputCopy
1 3
Note
In the first sample mr. Boosch signs laws with numbers from segments [1;2] and [4;5]. The total absurdity of the signed laws equals 3 + 6 + 1 + 6 = 16.

In the second sample mr. Boosch signs laws with numbers from segments [1;2] and [3;4]. The total absurdity of the signed laws equals 1 + 1 + 1 + 1 = 4.
*/
#include <bits/stdc++.h>

using namespace std;
using Long = long long;

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, k;
    cin >> n >> k;

    vector<Long> vals(n);

    for (int i = 0; i < n; ++i)
        cin >> vals[i];

    vector<pair<Long, int>> memo(n, {-1, -1});

    Long currSum = accumulate(end(vals) - k, end(vals), 0);
    memo[n - k] = {currSum, n - k};

    for (int i = n - k - 1; i >= 0; --i)
    {
        currSum -= vals[i + k];
        currSum += vals[i];
        memo[i] = max(memo[i + 1], {currSum, i});

        if (memo[i + 1].first == currSum)
            memo[i].second = i;
    }

    currSum = accumulate(begin(vals), begin(vals) + k, 0);

    pair<int, int> ans(0, memo[k].second);
    Long maxSum = currSum + memo[k].first;

    for (int i = 1; i <= n - 2 * k; ++i)
    {
        currSum -= vals[i - 1];
        currSum += vals[i + k - 1];

        if (maxSum < currSum + memo[i + k].first)
        {
            ans = {i, memo[i + k].second};
            maxSum = currSum + memo[i + k].first;
        }
    }

    cout << ans.first + 1 << " " << ans.second + 1 << "\n";

    return 0;
}