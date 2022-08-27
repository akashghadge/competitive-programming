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
#define mp make_pair
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
bool valid(vvi &arr)
{
    int n = arr.size();
    int m = arr[0].size();
    for (int i = m - 1; i >= 0; i--)
    {
        if (arr[n - 1][i])
            return true;
    }
    for (int i = n - 1; i >= 0; i--)
    {
        if (arr[i][0])
            return true;
    }
    return false;
}
bool valid2(vvi &arr)
{
    int n = arr.size();
    int m = arr[0].size();
    for (int i = m - 1; i >= 0; i--)
    {
        if (arr[0][i])
            return true;
    }
    for (int i = n - 1; i >= 0; i--)
    {
        if (arr[i][m - 1])
            return true;
    }
    return false;
}
void sol()
{
    var4(n, m, r, c);
    var(d);
    // r--;
    // c--;
    // vvi arr(n, vi(m, 0));
    // int sq = d - 1;
    // for (int i = -d; i <= d; i++)
    // {
    //     if (r + i >= 0 and r + i < n)
    //     {
    //         arr[i + r][c] = 1;
    //     }
    // }
    // for (int i = -d; i <= d; i++)
    // {
    //     if (c + i >= 0 and c + i < m)
    //     {
    //         arr[r][c + i] = 1;
    //     }
    // }
    // for (auto a : arr)
    //     prnv(all(a));

    if (r + d >= n and r - d <= 1)
    {
        prn(-1);
    }
    else if (r + d >= n and c + d >= m)
    {
        prn(-1);
    }
    else if (c - d <= 1 and c + d >= m)
    {
        prn(-1);
    }
    else if (c - d <= 1 and r - d <= 1)
    {
        prn(-1);
    }
    else
    {
        prn(n + m - 2);
    }
    // if (arr[n - 1][m - 1])
    //     prn(-1);
    // else if (!valid(arr) or !valid2(arr))
    //     prn(n + m - 2);
    // else
    //     prn(-1);
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    FAST();
    ll TEST_CASE = 1;
    cin >> TEST_CASE;
    forn(_, 0, TEST_CASE)
    {
        sol();
    }
    return 0;
}
