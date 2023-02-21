/*
D. M-arrays
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
You are given an array a1,a2,…,an
 consisting of n
 positive integers and a positive integer m
.

You should divide elements of this array into some arrays. You can order the elements in the new arrays as you want.

Let's call an array m
-divisible if for each two adjacent numbers in the array (two numbers on the positions i
 and i+1
 are called adjacent for each i
) their sum is divisible by m
. An array of one element is m
-divisible.

Find the smallest number of m
-divisible arrays that a1,a2,…,an
 is possible to divide into.

Input
The first line contains a single integer t
 (1≤t≤1000)
  — the number of test cases.

The first line of each test case contains two integers n
, m
 (1≤n≤105,1≤m≤105)
.

The second line of each test case contains n
 integers a1,a2,…,an
 (1≤ai≤109)
.

It is guaranteed that the sum of n
 and the sum of m
 over all test cases do not exceed 105
.

Output
For each test case print the answer to the problem.

Example
inputCopy
4
6 4
2 2 8 6 9 4
10 8
1 1 1 5 2 4 4 8 6 7
1 1
666
2 2
2 4
outputCopy
3
6
1
1
Note
In the first test case we can divide the elements as follows:

[4,8]
. It is a 4
-divisible array because 4+8
 is divisible by 4
.
[2,6,2]
. It is a 4
-divisible array because 2+6
 and 6+2
 are divisible by 4
.
[9]
. It is a 4
-divisible array because it consists of one element.

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

void pre_processing() {}
void sol()
{
    var2(n, k);
    varv(a, n);
    unordered_map<int, int> mp;
    for (auto val : a)
        mp[val]++;
    ll ans = 0;
    ll mn = *min_element(all(a));
    ll mx = *max_element(all(a));
    for (auto &curr : mp)
    {
        if (curr.second == 0)
            continue;
        prnp(curr);
        ll diff = curr.first - k;
        while (curr.first + diff <= mx)
        {
            if (mp.find(curr.first + diff) != mp.end())
                mp[curr.first + diff] = 0;
            prn(curr.first + diff);
            diff += k;
        }
        diff = curr.first - k;
        while (curr.first - diff >= mn)
        {
            if (mp.find(curr.first - diff) != mp.end())
                mp[curr.first + diff] = 0;
            diff += k;
        }
        ans++;
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
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        map<int, int> cnt;
        while (n--)
        {
            int x;
            cin >> x;
            cnt[x % m]++;
        }
        int ans = 0;
        for (auto &c : cnt)
        {
            if (c.first == 0)
                ans++;
            else if (2 * c.first == m)
            {
                ans++;
            }
            else if (2 * c.first < m || cnt.find(m - c.first) == cnt.end())
            {
                int x = c.second, y = cnt[m - c.first];
                ans += 1 + max(0, abs(x - y) - 1);
            }
        }
        cout << ans << '\n';
    }
    return 0;
}
