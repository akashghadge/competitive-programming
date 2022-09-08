#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t,n; 
	cin>>t;
	while(t--){
    	cin >> n;
    	int a[n];
    	for (int i = 0; i < n; i++)
    		cin >> a[i];
    	unordered_map<int, int> m;
    	m[0] = 1;
    	int xxor = 0, ans = 0;
    	for (int i = 0; i < n; i++) {
    		xxor ^= a[i];
    		if (m.count(xxor)) {
    			ans++;
    			m.clear();
    		}
    		m[xxor]++;
    	}
    	cout << ans <<endl;
	}
	return 0;
}
