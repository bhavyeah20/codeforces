#include<bits/stdc++.h>

using namespace std;

int main()
{

	int t;
	cin >> t;

	while(t--)
	{
		int n ;
		cin >> n;

		vector<int> A(n,0);
		vector<int> c(3,0);

		for(int i = 0; i < n; i++)
			cin >> A[i];


		for(int i = 0; i < n; i++)
		{
			if(A[i] % 3 == 0)
				c[0]++;

			else if(A[i] % 3 == 1)
				c[1]++;

			else
				c[2]++;
		}

		int maxx = INT_MIN;
		int count = 0;

		maxx = max(c[0],max(c[1],c[2]));


		while(c[0] != c[1] || c[0] != c[2])
		{
			maxx = max(c[0],max(c[1],c[2]));

			if(c[0] == maxx)
			{
				c[0]--;
				c[1]++;
			}

			else if(c[1] == maxx)
			{
				c[1]--;
				c[2]++;
			}

			else
			{
				c[2]--;
				c[0]++;
			}

			count++;



		}


		cout<<count<<" "<<"\n";


	}
	
	

}
