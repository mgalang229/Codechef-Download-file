#include <bits/stdc++.h>

using namespace std;

void solve(){	
	int n, k, ans = 0;
	cin >> n >> k;
	for(int i = 0; i < n; i++){
		int t, d;
		cin >> t >> d;
		if(t < k){
			k -= t;
		} else{
			ans += (t - k) * d;
			k = 0;
		}
	}
	cout << ans << "\n";	
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);

	int t;
	cin >> t;
	while(t--){
		solve();
	}
	return 0;
}