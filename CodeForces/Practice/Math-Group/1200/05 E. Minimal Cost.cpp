/*
Notes
** ASCII of 'a'- 97,'z'- 123,'A'- 65,'Z'- 90,'0'- 48,'9'- 57
*/
/*
There is a graph of n
 rows and 106+2
 columns, where rows are numbered from 1
 to n
 and columns from 0
 to 106+1
:


Let's denote the node in the row i
 and column j
 by (i,j)
.

Initially for each i
 the i
-th row has exactly one obstacle — at node (i,ai)
. You want to move some obstacles so that you can reach node (n,106+1)
 from node (1,0)
 by moving through edges of this graph (you can't pass through obstacles). Moving one obstacle to an adjacent by edge free node costs u
 or v
 coins, as below:

If there is an obstacle in the node (i,j)
, you can use u
 coins to move it to (i−1,j)
 or (i+1,j)
, if such node exists and if there is no obstacle in that node currently.
If there is an obstacle in the node (i,j)
, you can use v
 coins to move it to (i,j−1)
 or (i,j+1)
, if such node exists and if there is no obstacle in that node currently.
Note that you can't move obstacles outside the grid. For example, you can't move an obstacle from (1,1)
 to (0,1)
.
Refer to the picture above for a better understanding.

Now you need to calculate the minimal number of coins you need to spend to be able to reach node (n,106+1)
 from node (1,0)
 by moving through edges of this graph without passing through obstacles.

Input
The first line contains a single integer t
 (1≤t≤104
) — the number of test cases.

The first line of each test case contains three integers n
, u
 and v
 (2≤n≤100
, 1≤u,v≤109
) — the number of rows in the graph and the numbers of coins needed to move vertically and horizontally respectively.

The second line of each test case contains n
 integers a1,a2,…,an
 (1≤ai≤106
) — where ai
 represents that the obstacle in the i
-th row is in node (i,ai)
.

It's guaranteed that the sum of n
 over all test cases doesn't exceed 2⋅104
.

Output
For each test case, output a single integer — the minimal number of coins you need to spend to be able to reach node (n,106+1)
 from node (1,0)
 by moving through edges of this graph without passing through obstacles.

It can be shown that under the constraints of the problem there is always a way to make such a trip possible.

Example
inputCopy
3
2 3 4
2 2
2 3 4
3 2
2 4 3
3 2
outputCopy
7
3
3
Note
In the first sample, two obstacles are at (1,2)
 and (2,2)
. You can move the obstacle on (2,2)
 to (2,3)
, then to (1,3)
. The total cost is u+v=7
 coins.


In the second sample, two obstacles are at (1,3)
 and (2,2)
. You can move the obstacle on (1,3)
 to (2,3)
. The cost is u=3
 coins.



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
#define prn2(a, b) cout << a << " " << b << endl
#define prn3(a, b, c) cout << a << " " << b << " " << c << endl
#define prn4(a, b, c, d) cout << a << " " << b << " " << c << " " << d << endl
#define prnp(a) cout << a.first << " " << a.second << endl;

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
/*
Consider the following situations:

∀i∈[2,n],|ai−ai−1|=0
, then the answer will be v+min(u,v)
.
∃i∈[2,n],|ai−ai−1|>1
, then the answer will be 0
.
Otherwise, the answer will be min(u,v)
.

*/
/******************************** Main Section End *********************************/

const int N = 1e6 + 5;
int n, a[N], ans = INT_MAX, u, v, T;
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ios::sync_with_stdio(false);
    cin >> T;
    while (T--)
    {
        ans = INT_MAX;
        cin >> n >> u >> v;
        for (int i = 1; i <= n; i++)
            cin >> a[i];
        for (int i = 2; i <= n; i++)
        {
            if (abs(a[i] - a[i - 1]) >= 2)
                ans = 0;
            if (abs(a[i] - a[i - 1]) == 1)
                ans = min(ans, min(u, v));
            if (a[i] == a[i - 1])
                ans = min(ans, v + min(u, v));
        }
        cout << ans << endl;
    }

    return 0;
}
