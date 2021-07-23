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
		string s, t;
		cin >> s >> t;

		bool flag = 0;
		int n = s.size(), m = t.size();
		for(int i = 0; i < n; i++){
			string temp;
			for(int j = i;  j < n; j++){
				temp.push_back(s[j]);

				string temp2 = temp;
				int len = m-temp.length();
				for(int k = j-1; k >= 0 && j-k <= len; k--){
					temp2.push_back(s[k]);
				}

				if(temp2 == t){
					flag = 1;
					break;
				}
			}

			if(flag)
				break;

		}

		if(flag)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}

}



