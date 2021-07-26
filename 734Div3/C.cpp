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
		ll n;
		cin >> n;

		vector<string> v(n);
		for(int i = 0; i < n; i++)
			cin >> v[i];

		vector<vector<int>> ordering(5);

		for(auto s: v){
			vector<int> cnt(5,0);

			for(auto ch : s){
				cnt[ch-'a']++;
			}

			for(int i = 0; i < 5; i++)
				ordering[i].push_back(2*cnt[i] - s.length());
		}


		for(auto &vec: ordering){
			sort(vec.begin(), vec.end(), greater<int>());
		}

		// for(auto vec: ordering){
		// 	for(auto it: vec)
		// 		cout<<it<<" ";
		// 	cout<<endl;
		// }



		ll ans = 0;
		for(auto vec: ordering){
			ll sum = 0, curr = 0;
			for(auto it: vec){
				if(sum + it > 0){
					sum += it;
					curr++;
				}

				else
					break;
			}

			ans = max(ans, curr);
		}

		cout<<ans<<endl;
	}

}