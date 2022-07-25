#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
 
#define mset(d,val) memset(d,val,sizeof(d))
#define setp(x) cout<<fixed<<setprecision(x)
#define ordered_set tree <ll, null_type, less<ll>, rb_tree_tag, tree_order_statistics_node_update>
#define ordered_multiset tree<int,null_type,less_equal<int>,rb_tree_tag,tree_order_statistics_node_update>
#define sz(x) (int)(x).size()
#define all(x) (x).begin(),(x).end()
#define endl '\n'
#define forn(i,a,b) for(int i=(a);i<(b);i++)
#define forr(i,a,b) for(int i=(a);i>=(b);i--)
#define fore(i,a,b) for(int i=(a);i<=(b);i++)
#define prn(a) cout<<a<<endl
#define prn2(a,b) cout<<a<<" "<<b<<endl
#define prn3(a,b,c) cout<<a<<" "<<b<<" "<<c<<endl
#define prn4(a,b,c,d) cout<<a<<" "<<b<<" "<<c<<" "<<d<<endl
#define var(n) ll n;cin>>n;
#define var2(a,b) ll a,b;cin>>a>>b;
#define var3(a,b,c) ll a,b,c;cin>>a>>b>>c;
#define var4(a,b,c,d) ll a,b,c,d;cin>>a>>b>>c>>d;
#define vars(s) string s;cin>>s;
#define inp(a,n) vi a(n);for(ll i = 0;i<n;i++) cin>>a[i];
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define fbo find_by_order  //fbo(K) -> Kth element in a Set (counting from zero).
#define ook order_of_key   //ook(K) -> Number of items strictly smaller than K.
#define sync() {ios_base::sync_with_stdio(0); cin.tie(0);} 
typedef long long ll;
typedef long double ld;
typedef pair<ll,ll> ii;
typedef vector<ll> vi;
typedef vector<vi> vvi;
typedef vector<string> vvs;
typedef vector<ii> vii;
typedef vector <char> vch;
typedef vector <string> vs;
 
ostream& operator<<(ostream &out, ii x){ out<<x.F<<" "<<x.S<<"\n"; return out; }
const ll INF = ll(1e18);
const int mod = 1e9 + 7;
ll expo(ll x, ll y) { ll res = 1; while (y) {if (y % 2) res = (res * x % mod) % mod; x = (x * x) % mod; y /= 2; } return res;}
ll inv(ll x) {return expo(x, mod - 2);}
inline ll ceil(ll a , ll b){ if(a%b==0) return a/b ; else return a/b+1 ; } 
inline ll lcm(ll a , ll b)  {return (a*b)/__gcd(a,b) ;}
bool isPerSquare(ll a) {if(a<0) return false; ll sr = sqrt(a); return (sr*sr == a);}
ll add(ll a, ll b) {a = a % mod; b = b % mod; return (((a + b) % mod) + mod) % mod;}
ll mul(ll a, ll b) {a = a % mod; b = b % mod; return (((a * b) % mod) + mod) % mod;}
ll sub(ll a, ll b) {a = a % mod; b = b % mod; return (((a - b) % mod) + mod) % mod;}
ll m_div(ll a, ll b) {a = a % mod; b = b % mod; return (mul(a, inv(b)) + mod) % mod;}
int dx[] = {1, -1, 0, 0};
int dy[] = {0, 0, 1, -1};
 
//----debugging----//
#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<" "; _print(x); cerr << endl;
#else
#define debug(x)
#endif
 
void _print(ll t) {cerr << t;}
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(ld t) {cerr << t;}
void _print(double t) {cerr << t;}
void _print(bitset<32> t) {cerr << t.to_string();};
 
template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.F); cerr << ","; _print(p.S); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}
 
// ASCII of 'a'- 97,'z'- 123,'A'- 65,'Z'- 90,'0'- 48,'9'- 57
 
void prnv(auto b,auto e){
   for(auto i = b;i!=e;i++){
       cout<<*i<<" ";
   }
   cout<<endl;
}
 
void sol(){
    var2(n,m);
    inp(a,n);
    vvi adj(n);
    forn(i,0,m){
        var2(u,v);
        u--;v--;
        adj[u].pb(v);
        adj[v].pb(u);
    }
 
    ll ans = accumulate(all(a),0ll);
 
    if(m%2 == 0){
        prn(0);
        return;
    }else{
        ll mn1 = INF;
        forn(i,0,n){
            if(sz(adj[i])%2 == 1){
                mn1 = min(mn1,a[i]);
            }
        }
        ll mn2 = INF;
        forn(i,0,n){
            for(auto j:adj[i]){
                mn2 = min(mn2,a[i]+a[j]);
            }
        }
        prn(min(mn1,mn2));
    }
    
 
 
 
    
}
 
int main() {
    sync();
    ll tt = 1;
    cin>>tt;
    forn(_,0,tt){
        // cout<<"Case #"<<(_+1)<<": ";
        sol();
    }
    return 0;
}