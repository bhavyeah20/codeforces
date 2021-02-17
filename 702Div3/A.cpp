#include<bits/stdc++.h>

using namespace std;

int check(int less, int great)
{
	if(less * 2 >= great)
		return 1;

	return 0;
}

int makeDense(int less,int great, int &count)
{	
				int currLess = less;
				int currGreat = great;

				while(check(less,currLess) && !check(currLess,currGreat))
				{
					currLess++;
				}

				while(!check(less,currLess))
					currLess--;


				count++;

				return currLess;				


}

int main()
{
	int t;
	cin >> t;

	while(t--)
	{
		int n;
		cin >> n;

		vector<int> A(n,0);

		for(int i = 0; i < n; i++)
			cin >> A[i];

		int less = A[0], great = A[1];
		int currGreat, currLess;
		int count = 0;
		int nextGreat = 0;
		int num;
		int orignalCurrLess;
		for(int i = 0; i < n - 1; i++)
		{
			// cout<<"Now we're at "<<A[i]<<" "<<A[i+1];
			if(A[i] < A[i+1])
			{
				nextGreat = 1;
				less = A[i];
				great = A[i+1];
			}

			else
			{
				nextGreat = 0;
				less = A[i+1];
				great = A[i];
			}

			if(check(less,great))
				continue;

			else
			{

				currLess = makeDense(less,great, count);
				if(nextGreat)
				{
					orignalCurrLess = currLess;
					while(!check(currLess,great))
					{
						currLess = makeDense(currLess,great, count);						
					}
					A[i] = currLess;
					i--;
				}

				else
				{
					orignalCurrLess = currLess;
					while(!check(currLess,great))
					{
						currLess = makeDense(currLess,great, count);						
					}
					A[i] = currLess;

				}

				


			}

			nextGreat = 0;
		}

		cout<<count<<"\n";


	}
	
	

}
