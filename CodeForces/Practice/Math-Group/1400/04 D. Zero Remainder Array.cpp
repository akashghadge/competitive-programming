/*
Notes
** ASCII of 'a'- 97,'z'- 123,'A'- 65,'Z'- 90,'0'- 48,'9'- 57
*/
/*
You are given an array a
 consisting of n
 positive integers.

Initially, you have an integer x=0
. During one move, you can do one of the following two operations:

Choose exactly one i
 from 1
 to n
 and increase ai
 by x
 (ai:=ai+x
), then increase x
 by 1
 (x:=x+1
).
Just increase x
 by 1
 (x:=x+1
).
The first operation can be applied no more than once to each i
 from 1
 to n
.

Your task is to find the minimum number of moves required to obtain such an array that each its element is divisible by k
 (the value k
 is given).

You have to answer t
 independent test cases.

Input
The first line of the input contains one integer t
 (1≤t≤2⋅104
) — the number of test cases. Then t
 test cases follow.

The first line of the test case contains two integers n
 and k
 (1≤n≤2⋅105;1≤k≤109
) — the length of a
 and the required divisior. The second line of the test case contains n
 integers a1,a2,…,an
 (1≤ai≤109
), where ai
 is the i
-th element of a
.

It is guaranteed that the sum of n
 does not exceed 2⋅105
 (∑n≤2⋅105
).

Output
For each test case, print the answer — the minimum number of moves required to obtain such an array that each its element is divisible by k
.

Example
inputCopy
5
4 3
1 2 1 3
10 6
8 7 1 8 3 7 5 10 8 9
5 10
20 100 50 20 100500
10 25
24 24 24 24 24 24 24 24 24 24
8 8
1 2 3 4 5 6 7 8
outputCopy
6
18
0
227
8
Note
Consider the first test case of the example:

x=0
, a=[1,2,1,3]
. Just increase x
;
x=1
, a=[1,2,1,3]
. Add x
 to the second element and increase x
;
x=2
, a=[1,3,1,3]
. Add x
 to the third element and increase x
;
x=3
, a=[1,3,3,3]
. Add x
 to the fourth element and increase x
;
x=4
, a=[1,3,3,6]
. Just increase x
;
x=5
, a=[1,3,3,6]
. Add x
 to the first element and increase x
;
x=6
, a=[6,3,3,6]
. We obtained the required array.
Note that you can't add x
 to the same element more than once.



*/
/*Basic Include */
#include <bits/stdc++.h>
using namespace std;

/* Policy Based Data Structures*/
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#define ordered_set tree<ll, null_type, less<ll>, rb_tree_tag, tree_order_statistics_node_update>
#define ordered_multiset tree<int, null_type, less_equal<int>, rb_tree_tag, tree_order_statistics_node_update>

/* Functions*/
#define mset(d, val) memset(d, val, sizeof(d))
#define setp(x) cout << fixed << setprecision(x)
#define sz(x) (int)(x).size()
#define all(x) (x).begin(), (x).end()
#define endl '\n'
#define forn(i, a, b) for (int i = (a); i < (b); i++)
#define forr(i, a, b) for (int i = (a); i >= (b); i--)
#define fore(i, a, b) for (int i = (a); i <= (b); i++)
#define prn(a) cout << a << endl
#define prnsp(a) cout << a << " "
#define prn2(a, b) cout << a << " " << b << endl
#define prn3(a, b, c) cout << a << " " << b << " " << c << endl
#define prn4(a, b, c, d) cout << a << " " << b << " " << c << " " << d << endl
#define prnp(a) cout << a.first << " " << a.second << endl

/* Inputs */
#define var(n) \
    ll n;      \
    cin >> n;
#define var2(a, b) \
    ll a, b;       \
    cin >> a >> b;
#define var3(a, b, c) \
    ll a, b, c;       \
    cin >> a >> b >> c;
#define var4(a, b, c, d) \
    ll a, b, c, d;       \
    cin >> a >> b >> c >> d;
#define vars(s) \
    string s;   \
    cin >> s;
#define varv(a, n)             \
    vi a(n);                   \
    for (ll i = 0; i < n; i++) \
        cin >> a[i];
#define varvvi(a, n, m)            \
    vvi a(n, vi(m, 0));            \
    for (ll i = 0; i < n; i++)     \
        for (ll j = 0; j < m; j++) \
            cin >> arr[i][j];
#define varvpi(a, n)             \
    vector<pair<int, int>> a(n); \
    for (ll i = 0; i < n; i++)   \
        cin >> a[i].first >> a[i].second;

/* Shortcuts */
#define pb push_back
#define mkp make_pair
#define F first
#define S second
#define fbo find_by_order // fbo(K) -> Kth element in a Set (counting from zero).
#define ook order_of_key  // ook(K) -> Number of items strictly smaller than K.
#define FAST()                        \
    {                                 \
        ios_base::sync_with_stdio(0); \
        cin.tie(0);                   \
    }
#define en "\n"
typedef long long ll;
typedef long double ld;
typedef pair<ll, ll> ii;
typedef vector<ll> vi;
typedef vector<vi> vvi;
typedef vector<string> vvs;
typedef vector<ii> vii;
typedef vector<char> vch;
typedef vector<string> vs;

/*ARITHMETIC SECTION*/
const ll INF = ll(1e18);
const int mod = 1e9 + 7;
ll binary_pow(ll x, ll y)
{
    ll res = 1;
    while (y)
    {
        if (y % 2)
            res = (res * x % mod) % mod;
        x = (x * x) % mod;
        y /= 2;
    }
    return res;
}
ll inv(ll x) { return binary_pow(x, mod - 2); }
inline ll ceil_divide(ll a, ll b)
{
    if (a % b == 0)
        return a / b;
    else
        return a / b + 1;
}
inline ll lcm(ll a, ll b) { return (a * b) / __gcd(a, b); }

vi facts(ll n)
{
    vi ans;
    for (ll i = 2; i * i <= n; i++)
    {
        while (n % i == 0)
        {
            ans.push_back(i);
            n /= i;
        }
    }
    if (n > 1)
        ans.push_back(n);
    return ans;
}
bool isPerSquare(ll a)
{
    if (a < 0)
        return false;
    ll sr = sqrt(a);
    return (sr * sr == a);
}

// Modulo Operations
ll add(ll a, ll b)
{
    a = a % mod;
    b = b % mod;
    return (((a + b) % mod) + mod) % mod;
}
ll mul(ll a, ll b)
{
    a = a % mod;
    b = b % mod;
    return (((a * b) % mod) + mod) % mod;
}
ll sub(ll a, ll b)
{
    a = a % mod;
    b = b % mod;
    return (((a - b) % mod) + mod) % mod;
}
ll m_div(ll a, ll b)
{
    a = a % mod;
    b = b % mod;
    return (mul(a, inv(b)) + mod) % mod;
}
int dx[] = {1, -1, 0, 0};
int dy[] = {0, 0, 1, -1};
void prnv(auto b, auto e)
{
    for (auto i = b; i != e; i++)
    {
        cout << *i << " ";
    }
    cout << endl;
}

/******************************** Main Section Start *********************************/

void pre_processing() {}
void sol()
{
    var2(n, k);
    varv(arr, n);
    vi need;
    for (auto val : arr)
        if (val % k != 0)
            need.push_back(val % k);
    map<int, int> mp;
    for (auto val : need)
        mp[val]++;
    for (auto val : mp)
    {
        // prnp(val);
    }

    ll ans = 0;
    for (auto val : mp)
    {
        ll ptr = k - val.first;
        while (val.second--)
        {
            ans = max(ans, ptr + 1);
            ptr += k;
        }
    }
    prn(ans);
}

/******************************** Main Section End *********************************/

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    FAST();
    ll TEST_CASE = 1;
    cin >> TEST_CASE;
    pre_processing();
    forn(_, 0, TEST_CASE)
    {
        sol();
    }
    return 0;
}
