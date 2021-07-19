#include<bits/stdc++.h>

using namespace std;

#define ll long long 
#define endl "\n" 

int main(){

	//a doesnt matter
	// if b > 0 remove one by one, else remove in max pairs

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int t;
	cin >> t;

	while(t--){
		int n, a, b;
		cin >> n >> a >> b;
		string s;
		cin >> s;

		int ans = 0;

		if(b > 0){
			ans = n * (a + b);
		}

		else{
			ans = n * a;
			int cluster = 0;
			int i = 0;
			if(s[i] == '0'){
				bool end = 0;
				while(!end){
					while(i < n && s[i] == '0'){
						i++;
					}

					if(i == n)
						break;

					cluster++;

					while(i < n && s[i] != '0')
						i++;

					if(i == n)
						break;					

				}

				ans += (cluster+1)*b; 
			}

			else{
				bool end = 0;
				while(!end){
					while(i < n && s[i] == '1'){
						i++;
					}

					if(i == n)
						break;

					cluster++;

					while(i < n && s[i] != '1')
						i++;

					if(i == n)
						break;					

				}

				ans += (cluster+1)*b; 
			}
		}

		cout<<ans<<endl;

	}
}



