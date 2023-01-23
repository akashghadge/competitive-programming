/*
This problem is given in two versions that differ only by constraints. If you can solve this problem in large constraints, then you can just write a single solution to the both versions. If you find the problem too difficult in large constraints, you can write solution to the simplified version only.

Waking up in the morning, Apollinaria decided to bake cookies. To bake one cookie, she needs n ingredients, and for each ingredient she knows the value ai — how many grams of this ingredient one needs to bake a cookie. To prepare one cookie Apollinaria needs to use all n ingredients.

Apollinaria has bi gram of the i-th ingredient. Also she has k grams of a magic powder. Each gram of magic powder can be turned to exactly 1 gram of any of the n ingredients and can be used for baking cookies.

Your task is to determine the maximum number of cookies, which Apollinaria is able to bake using the ingredients that she has and the magic powder.

Input
The first line of the input contains two positive integers n and k (1 ≤ n, k ≤ 1000) — the number of ingredients and the number of grams of the magic powder.

The second line contains the sequence a1, a2, ..., an (1 ≤ ai ≤ 1000), where the i-th number is equal to the number of grams of the i-th ingredient, needed to bake one cookie.

The third line contains the sequence b1, b2, ..., bn (1 ≤ bi ≤ 1000), where the i-th number is equal to the number of grams of the i-th ingredient, which Apollinaria has.

Output
Print the maximum number of cookies, which Apollinaria will be able to bake using the ingredients that she has and the magic powder.

Examples
inputCopy
3 1
2 1 4
11 3 16
outputCopy
4
inputCopy
4 3
4 3 5 6
11 12 14 20
outputCopy
3
Note
In the first sample it is profitably for Apollinaria to make the existing 1 gram of her magic powder to ingredient with the index 2, then Apollinaria will be able to bake 4 cookies.

In the second sample Apollinaria should turn 1 gram of magic powder to ingredient with the index 1 and 1 gram of magic powder to ingredient with the index 3. Then Apollinaria will be able to bake 3 cookies. The remaining 1 gram of the magic powder can be left, because it can't be used to increase the answer.



*/

#include <bits/stdc++.h>
using namespace std;
#define en "\n"
#define ll long long
#define v vector
#define vi vector<ll>
#define vll vector<ll>
#define vii vector<vector<ll>>
#define pii pair<ll, ll>
#define vpi vector<pair<ll, ll>>
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
/*input sections*/
ll n, k;
vi arr;
vi brr;
void input()
{
    cin >> n >> k;
    arr.resize(n);
    brr.resize(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (ll i = 0; i < n; i++)
    {
        cin >> brr[i];
    }
}
bool valid(ll mid)
{
    ll magic = k;
    vi temp = brr;
    for (ll i = 0; i < n; i++)
    {
        ll req = arr[i] * mid;
        while (temp[i] < req && magic)
        {
            temp[i]++;
            magic--;
        }
        if (temp[i] < req)
            return false;
    }
    return true;
}
void sol()
{
    ll lo = 0;
    ll hi = 1e10;
    ll ans = 0;
    while (lo <= hi)
    {
        ll mid = (lo + hi) / 2;
        if (valid(mid))
        {
            ans = mid;
            lo = mid + 1;
        }
        else
        {
            hi = mid - 1;
        }
    }
    cout << ans << en;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    FAST;
    ll T = 1;
    // cin >> T;
    while (T--)
    {
        input();
        sol();
    }
    return 0;
}