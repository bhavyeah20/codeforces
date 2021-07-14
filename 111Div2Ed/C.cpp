#include<bits/stdc++.h>

using namespace std;

#define ll long long 
#define endl "\n" 

int main(){

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

		for(int i = 0; i < n; i++){
			for(int j = i+1; j < n; j++){
				if(v[j] >= v[i]){
					
				}
			}
		}
	}
  
}



