#include<bits/stdc++.h>

using namespace std;

#define ll long long 
#define endl "\n" 

bool check(vector<int> &v){
	int n = v.size();
	for(int i = 0; i < n; i++){
		for(int j = i+1; j < n; j++){
			for(int k = j+1; k < n; k++){
				if(v[i] >= v[j] && v[j] >= v[k] || v[i] <= v[j] && v[j] <= v[k])
					return true;
			}
		}
	}

	return false;
}

int main(){

	//Numbers will surely inc, dec in >= 5 sized arrays

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int t;
	cin >> t;

	while(t--){
		int n;
		cin >> n;
		vector<int> v(n);
		for(int i = 0; i < n; i++){
			cin >> v[i];
		}

		int ans = 0;
		for(int i = 0; i < n; i++){
			vector<int> a;
			for(int j = i; j < n; j++){
				a.push_back(v[j]);
				if(check(a))
					break;
				ans++;
			
			}
			a.clear();

		}

		cout<<ans<<endl;
	}
	
}
  



