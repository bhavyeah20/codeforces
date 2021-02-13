#include<bits/stdc++.h>

using namespace std;

int main()
{
	
	int n;
	int q;
	int k;
	cin >> n >> q >> k;
	vector<int> v(n,0);
	for(int i = 0; i < n; i++)
		cin>>v[i];

	vector<pair<int,int>> query;

	for(int i = 0; i < q; i++)
	{
		int q1 , q2;
		cin >> q1 >> q2;
		query.push_back({q1,q2});
	}
	vector<int> ans(n,0);
	for(int i = 0; i < n; i++)
	{
		if(!i)
		{
			ans[i] += v[i+1] - v[i] - 1;
			continue; 
		}

		if(i == n - 1)
		{
			ans[i] += v[i] - v[i-1] - 1;
			ans[i] += ans[i-1];
			continue;
		}


		ans[i] += v[i] - v[i-1] - 1;
		ans[i] += v[i+1] - v[i] - 1;
		ans[i] += ans[i-1];
	}



	for(int i = 0; i < q; i++)
	{
			//l and r are the index+1
		int l = query[i].first - 1;
		int r = query[i].second - 1;
		int ops = 0;

		if (l == r){
			cout<<k-1<<"\n";
			continue;
		}
		
		
		ops += ans[r - 1] - ans[l];

		ops += v[l] - 1;
		
		ops += v[l+1] - v[l] - 1;

		ops += k - v[r];
		
		ops += v[r] - v[r-1] -1;	

		cout<<ops<<"\n";

		ops = 0;	


	}
	

}
