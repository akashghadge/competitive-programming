#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fi first
#define se second
const ll mod=998244353;
const int N=2e5+1;
ll n,k;
ll a[N];
void solve(){
	cin >> n;
	for(int i=1; i<=n ;i++){
		cin >> a[i];
	}
	
	for(int i=n; i>=2 ;i--){
		if(a[i]>0){
			ll k=a[i]/2;
			a[i-1]-=k;
			a[i]-=2*k;
		}
	}
	for(int i=n; i>=2 ;i--){
		if(a[i-1]>0 && a[i]>0){
			a[i-1]--;a[i]-=2;
		}
	}
	ll ans=0;
	for(int i=1; i<=n ;i++){
		ans+=abs(a[i]);
	}
	cout << ans << '\n';
}
int main(){
	ios::sync_with_stdio(false);cin.tie(0);
	int t;cin >> t;while(t--) solve();
}