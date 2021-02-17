// #include<bits/stdc++.h>

// using namespace std;

// #define lld long long int

// int main()
// {
// 	lld t;
// 	cin >> t;

// 	while(t--)
// 	{
// 		lld x;
// 		cin >> x;

// 		vector<int> lSeen(100000,0);
// 		vector<int> rSeen(100000,0);


// 		lld b = cbrt(x);
// 		lld a = 1;

// 		lld curr = 0;
// 		int flag = 0;
// 		while(curr != x || (!lSeen[a] && !rSeen[b]))
// 		{
// 			curr = pow(a,3) + pow(b,3);
// 			lSeen[a] = 1;
// 			rSeen[b] = 1;
// 			if(curr == x)
// 			{
// 				flag = 1;
// 				break;
// 			}

// 			else if(curr < x)
// 				a++;

// 			else{
// 				if(b == 1)
// 					break;
// 				b--;
// 			}
// 		}


// 		if(flag)
// 			cout<<"YES"<<"\n";

// 		else
// 			cout<<"NO"<<"\n";






// 	}
	
	

// }


#include <bits/stdc++.h>

using namespace std;
using lld = long long int;
using ld = long double;

// const lld N = 1'000'000'000'000L;
const lld N = 1000000000000;


// unordered_set<lld> cubes;
unordered_map<lld,int> mp;

void precalc() {
  for (lld i = 1; i * i * i <= N; i++) {
    mp.insert({i * i * i,1});
  }
}

void solve() {
  lld x;
  cin >> x;
  for (lld i = 1; i * i * i <= x; i++) {
    if (mp.find(x - i * i * i) != mp.end()) {
      cout << "YES\n";
      return;
    }
  }
  cout << "NO\n";
}

int main() {
  precalc();
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
}