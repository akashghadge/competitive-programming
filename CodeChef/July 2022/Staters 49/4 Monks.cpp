/*
There is a town with NN people and initially, the i^{th}i
th
  person has A_iA
i
​
  coins. However, some people of the town decide to become monks. If the i^{th}i
th
  person becomes a monk, then:

He leaves the town thereby reducing the number of people in the town by 11.
He distributes XX (0 \le X \le A_i)(0≤X≤A
i
​
 ) coins to the remaining people of the town (not necessarily equally). Note that each monk can freely choose his value of XX, and different monks may choose different values of XX.
He takes the remaining A_i - XA
i
​
 −X coins with him.
For example, initially, if A = [1, 3, 4, 5]A=[1,3,4,5] and 4^{th}4
th
  person decides to become a monk then he can leave the town and can give 22 coins to the 1^{st}1
st
  person, 11 coin to the 2^{nd}2
nd
  person, no coins to the 3^{rd}3
rd
  person and take 22 coins along with him while going. Now AA becomes [3, 4, 4][3,4,4].

Determine the minimum number of people who have to become monks, so that in the end, everyone remaining in the town has an equal number of coins.

Input Format
The first line contains a single integer TT — the number of test cases. Then the test cases follow.
The first line of each test case contains an integer NN — the number of people in the town.
The second line of each test case contains NN space-separated integers A_1, A_2, \ldots, A_NA
1
​
 ,A
2
​
 ,…,A
N
​
  denoting the initial number of coins of everyone in the town.
Output Format
For each test case, output the minimum number of people who have to become monks, so that in the end, everyone remaining in the town has an equal number of coins.

Constraints
1 \le T \le 10^51≤T≤10
5

1 \le N \le 10^51≤N≤10
5

1 \le A_i \le 10^91≤A
i
​
 ≤10
9

Sum of NN over all test cases does not exceed 2 \cdot 10^52⋅10
5
 .
Sample 1:
Input
Output
3
4
6 6 6 6
3
5 1 4
5
2 1 2 1 1
0
1
2
Explanation:
Test case 11: All the people already have an equal number of coins.

Test case 22: The 2^{nd}2
nd
  person can become a monk and give his 11 coin to the person with 44 coins. After this, both the remaining people will have 55 coins.

Test case 33: One way of two people becoming monks is as follows:

The 2^{nd}2
nd
  person becomes a monk, and takes his 11 coin with him
The 3^{rd}3
rd
  person becomes a monk, and gives one coin each to the 4^{th}4
th
  and 5^{th}5
th
  people
Everyone remaining in the town now has 22 coins.


*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll T;
    cin >> T;
    while (T--)
    {
        ll n;
        cin >> n;
        vector<ll> a(n);
        ll sum = 0;
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
        }
        sort(a.begin(), a.end());
        if (a[n - 1] == a[0])
        {
            cout << 0 << endl;
            continue;
        }
        ll curr = 0;
        ll ans = n;
        for (ll i = 0; i < n; i++)
        {
            curr += a[i];
            ll x = sum - curr;
            if (x >= a[i] * (i + 1) - curr)
                ans = min(ans, n - i - 1);
        }
        cout << ans << endl;
    }
    return 0;
} 
