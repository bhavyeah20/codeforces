#include<bits/stdc++.h>

using namespace std;

#define ll long long 
#define endl "\n" 


int main(){

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int q;
	cin >> q;

	while(q--){

		string s;
		string t;
		cin >> s >> t;

		int n = s.size(), m = t.size();

		if(m > n){
			cout<<"NO"<<endl;
			continue;
		}

		int j = m-1;
		for(int i = n-1; i >= 0; ){
			if(s[i] == t[j]){
				i--;
				j--;
			}
			else
				i -= 2;
		}

		if(j < 0)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}

}



