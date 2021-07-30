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
		ll W,H;
		cin >> W >> H;

		ll x1,x2,y1,y2;
		cin >> x1 >> y1 >> x2 >> y2;

		ll w,h;
		cin >> w >> h;

		ll bl=1e9,tl=1e9,tr=1e9,br=1e9;

		if(y1<=h){
			if(H-y2 < h-y1)
				bly = h-h-y1;
		}

		if(x1 <= w){
			
			if(W-x1 < bl)

		}

		if(bl == 1e9)
			bl = 0;

		if(x1 <= w){
			tl = min(tl, w-x1);
		}

		if(H-y2 <= h){
			tl = min(tl,h-H+y2);
		}


		if(tl == 1e9)
			tl = 0;

		if(W-x2 <= w){
			tr = min(tr,w-W+x2);
		}

		if(H-y2 <= h){
			tr = min(tr,h-H+y2);
		}


		if(tr == 1e9)
			tr = 0;

		if(y1 <= h){
			br = min(br,h-y1);
		}

		if(W-x2 <= w){
			br = min(br,w-W+x2);
		}


		if(br == 1e9)
			br = 0;


		cout<<min({bl,tl,tr,br})<<endl;
	}


}