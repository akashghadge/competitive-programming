#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fi first
#define se second
const ll mod=1e9+7;
const int N=2e6+1;
ll n,k;
vector<int>adj[N];
ll ans=1;
void dfs(int id,int p,int hp){
	ans=ans*(k-hp)%mod;
	int shp=1+(p!=0);
	for(auto c:adj[id]){
		if(c==p) continue;
		dfs(c,id,shp);
		shp++;
	}
}
void solve(){
	cin >> n >> k;
	for(int i=1; i<n ;i++){
		int u,v;cin >> u >> v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}
	dfs(1,0,0);
	cout << ans << '\n';
}
int main(){
	ios::sync_with_stdio(false);cin.tie(0);
	solve();
}