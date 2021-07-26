#include<bits/stdc++.h>

using namespace std;

#define ll long long 
#define endl "\n" 

int main(){

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	ll t;
	cin >> t;
	while(t--){
		ll n, k;
		cin >> n >> k;

		vector<ll> v(n);
		vector<ll> ans(n,0);
		vector<vector<ll>> pos(n+1);
		vector<ll> cnt(n+1,0);

		for(ll i = 0; i < n; i++){
			cin >> v[i];
			pos[v[i]].push_back(i);
			cnt[v[i]]++;
		}

		ll totalRest = 0;
		for(ll i = 1; i <= n; i++){
			totalRest += cnt[i] < k ? cnt[i] : 0;
		}

		totalRest = (totalRest/k) * k;
		ll restCounter = 1;
		for(ll i = 1; i <= n; i++){
			if(cnt[i]){
				ll count = cnt[i];
				if(count >= k){
					ll counter = 1;
					for(ll j = 0; j < k; j++){
						ans[pos[i][j]] = counter;
						counter++;
					}
				}

				else{
					for(ll j = 0; j < pos[i].size(); j++){
						if(totalRest > 0)
							ans[pos[i][j]] = restCounter;
						restCounter = (restCounter%k) + 1;
						totalRest--;
					}
				}

			}
		}

		for(auto it: ans)
			cout<<it<<" ";
		cout<<endl;


	}


}