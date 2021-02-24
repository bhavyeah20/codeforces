#include <bits/stdc++.h>

using namespace std;
 

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int> v(n,0);
        for(int i = 0; i < n; i++)
            cin >> v[i];

        vector<int> ans;

        vector<int> prefix(n,0);

        int maxx = INT_MIN;
        for(int i = 0; i < n; i++)
        {
            maxx = max(v[i],maxx);
            prefix[i] = maxx;
        }

        int idx = 0;
        int prev = n;


        for(int i = n - 1; i >= 0; i--)
        {
            
            while(v[i] != prefix[i]){
                i--;
            }

            for(int j = i; j < prev; j++)
                ans.push_back(v[j]);

            prev = i;
        }

           

        for(int x: ans)
            cout<<x<<" ";

        cout<<"\n";
    }

   
} 



