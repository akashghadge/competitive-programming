/*
Petya loves lucky numbers. Everybody knows that positive integers are lucky if their decimal representation doesn't contain digits other than 4 and 7. For example, numbers 47, 744, 4 are lucky and 5, 17, 467 are not.

Lucky number is super lucky if it's decimal representation contains equal amount of digits 4 and 7. For example, numbers 47, 7744, 474477 are super lucky and 4, 744, 467 are not.

One day Petya came across a positive integer n. Help him to find the least super lucky number which is not less than n.

Input
The only line contains a positive integer n (1 ≤ n ≤ 109). This number doesn't have leading zeroes.

Output
Output the least super lucky number that is more than or equal to n.

Please, do not use the %lld specificator to read or write 64-bit integers in C++. It is preferred to use the cin, cout streams or the %I64d specificator.

Examples
inputCopy
4500
outputCopy
4747
inputCopy
47
outputCopy
47

*/
#include <bits/stdc++.h>
using namespace std;
#define en "\n"
#define ll long long
#define v vector
#define vi vector<long long>
#define vll vector<ll>
#define vii vector<vector<long long>>
#define pii pair<long long, long long>
#define vpi vector<pair<long long, long long>>
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
bool valid(long long num)
{
    string curr = to_string(num);
    unordered_map<char, long long> mp;
    for (auto ch : curr)
        if (ch == '7' || ch == '4')
            mp[ch]++;
        else
            return false;

    return mp['4'] == mp['7'];
}
ll make_num(vi arr)
{
    ll ans = 0;
    ll mult = 1;
    for (auto val : arr)
    {
        ans += (val * mult);
        mult *= 10;
    }
    return ans;
}
long long sol(long long num)
{
    vector<vector<ll>> arr =
        {{4, 7},
         {4, 4, 7, 7},
         {4, 4, 4, 7, 7, 7},
         {4, 4, 4, 4, 7, 7, 7, 7},
         {4, 4, 4, 4, 4, 7, 7, 7, 7, 7}};
    set<ll> poss;
    for (auto curr : arr)
    {
        do
        {
            poss.insert(make_num(curr));
        } while (next_permutation(curr.begin(), curr.end()));
    }
    vll possible(poss.begin(), poss.end());
    int lo = 0;
    int hi = poss.size();
    ll ans = -1;
    while (lo <= hi)
    {
        int mid = (lo + hi) / 2;
        if (possible[mid] >= num)
        {
            ans = possible[mid];
            hi = mid - 1;
        }
        else
        {
            lo = mid + 1;
        }
    }
    return ans;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    FAST;
    long long str;
    cin >> str;
    cout << sol(str) << en;
    return 0;
}