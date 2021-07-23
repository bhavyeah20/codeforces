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
		string s;
		cin >> s;

		int kicks1 = 1e9, kicks2 = 1e9;
		int goals1 = 0, goals2 = 0;
		for(int i = 0; i < 10; i++){
			int kicksLeft = 10-i;
			if((kicksLeft+1)/2 + goals2 < goals1){
				kicks1 = i;
				break;
			}


			if(i&1){
				if(s[i] == '1')
					goals2++;
			}	

			else{
				if(s[i] == '1' || s[i] == '?')
					goals1++;
			}

		}

		goals1 = goals2 = 0;

		for(int i = 0; i < 10; i++){
			int kicksLeft = 10-i;
			if(kicksLeft/2 + goals1 < goals2){
				kicks2 = i;
				break;
			}


			if(i&1){
				if(s[i] == '1' || s[i] == '?')
					goals2++;
			}	

			else{
				if(s[i] == '1')
					goals1++;
			}

		}

		if(kicks1 == 1e9 && kicks2 == 1e9)
			kicks1 = 10;
		cout<<min(kicks1,kicks2)<<endl;


	}

}



