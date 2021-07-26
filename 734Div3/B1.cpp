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
		string s;
		cin >> s;

		vector<int> v(26,0);
		for(auto ch: s){
			v[ch-'a']++;
		}

		ll ans = 0;
		ll rest = 0;
		for(auto it : v){
			if(it >= 2){
				ans += 1;
			}

			else{
				rest+=it;
			}
		}

		cout<<ans+rest/2<<endl;
	}



}