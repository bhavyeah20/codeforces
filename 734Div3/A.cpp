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

		ll a,b,c;
		
		if(n%3 == 1){
			a = n/3+1;
			b = (n - n/3)/2;
		}

		else if(n % 3 == 2){
			b = n/3+1;
			a = n - 2*b;
		}

		else 
			a = b = n/3;

		cout<<a<<" "<<b<<endl;
	}

}