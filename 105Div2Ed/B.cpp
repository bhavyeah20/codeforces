#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int t;
	cin >> t;

	while(t--)
	{
		int n, U, R, D, L;
		cin >> n >> U >> R >> D >> L;

		int u = U;
		int r = R;
		int d = D;
		int l = L;

		if(U == n)
		{
			r--;
			l--;
		}

		if(R == n)
		{
			u--;
			d--;
		}		

		if(D == n)
		{
			l--;
			r--;
		}

		if(L == n)
		{
			u--;
			d--;
		}


		if(U == n - 1)
		{
			if( l > r)
				l--;

			else
				r--;
		}

		if(R == n - 1)
		{
			if(u > d)
				u--;

			else
				d--;
		}

		if(D == n - 1)
		{
			if(l > r)
				l--;
			
			else
				r--;
		}

		if(L == n - 1)
		{
			if(u > d)
				u--;

			else
				d--;
		}


		if(u < 0 || r < 0 || d < 0 || l < 0)
		{
			cout<<"NO"<<"\n";
			continue;
		}

		cout<<"YES"<<"\n";



	}
   
}