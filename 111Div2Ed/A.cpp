#include<bits/stdc++.h>

using namespace std;

#define ll long long 
#define endl "\n" 

int main(){

	//greedily add +2

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int t;
	cin >> t;

	while(t--){
		int s;
		cin >> s;

		int curr = 0;
		int moves = 0;
		int next = 1;

		while(curr + next <= s){
			curr += next;
			moves++;

			next += 2;
		}

		if(curr != s)
			moves++;

		cout<<moves<<endl;
	}

  
}



