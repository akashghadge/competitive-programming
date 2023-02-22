/*
Jett is tired after destroying the town and she wants to have a rest. She likes high places, that's why for having a rest she wants to get high and she decided to craft staircases.

A staircase is a squared figure that consists of square cells. Each staircase consists of an arbitrary number of stairs. If a staircase has n
 stairs, then it is made of n
 columns, the first column is 1
 cell high, the second column is 2
 cells high, …
, the n
-th column if n
 cells high. The lowest cells of all stairs must be in the same row.

A staircase with n
 stairs is called nice, if it may be covered by n
 disjoint squares made of cells. All squares should fully consist of cells of a staircase.

This is how a nice covered staircase with 7
 stairs looks like:
Find out the maximal number of different nice staircases, that can be built, using no more than x
 cells, in total. No cell can be used more than once.

Input
The first line contains a single integer t
 (1≤t≤1000)
  — the number of test cases.

The description of each test case contains a single integer x
 (1≤x≤1018)
  — the number of cells for building staircases.

Output
For each test case output a single integer  — the number of different nice staircases, that can be built, using not more than x
 cells, in total.

Example
inputCopy
4
1
8
6
1000000000000000000
outputCopy
1
2
1
30
Note
In the first test case, it is possible to build only one staircase, that consists of 1
 stair. It's nice. That's why the answer is 1
.

In the second test case, it is possible to build two different nice staircases: one consists of 1
 stair, and another consists of 3
 stairs. This will cost 7
 cells. In this case, there is one cell left, but it is not possible to use it for building any nice staircases, that have not been built yet. That's why the answer is 2
.

In the third test case, it is possible to build only one of two nice staircases: with 1
 stair or with 3
 stairs. In the first case, there will be 5
 cells left, that may be used only to build a staircase with 2
 stairs. This staircase is not nice, and Jett only builds nice staircases. That's why in this case the answer is 1
. If Jett builds a staircase with 3
 stairs, then there are no more cells left, so the answer is 1
 again.


*/
/*
Notes
** ASCII of 'a'- 97,'z'- 123,'A'- 65,'Z'- 90,'0'- 48,'9'- 57
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
    var(n);
    vi arr(32);
    for (int i = 1; i < 32; ++i)
        arr[i] = (1ll << (i - 1)) * ((1ll << i) - 1);
    for (int i = 1; i < 32; ++i)
        arr[i] += arr[i - 1];
    cout << upper_bound(arr.begin(), arr.end(), n) - arr.begin() - 1 << '\n';
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
