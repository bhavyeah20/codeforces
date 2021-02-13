#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int a;
		int b;
		cin >> a >> b;

		if(!a)
		{
			cout<<"0"<<"\n";
			continue;
		}
		if(a < b){
			cout<<"1"<<"\n";
			continue;
		}

		int ops = 0;
		int minOps = INT_MAX;
		int flag = 0;
		if(b == 1)
		{
			flag = 1;
			ops++;
			b++;
		}
		int A = a;
		for(int i = 0; i < 8; i++)
		{
			
			while(A)
			{
				A /= b+i;
				ops++;
			}

			if(ops < minOps)
				minOps = ops;

			ops = flag ? i + 2 :i + 1;
			A = a;

		}

		

		cout<<minOps<<"\n";

	}

}
