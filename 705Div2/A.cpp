#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define lld long long int

int main() 
{
    int t;
    cin >> t;

    while(t--)
    {
        int n, k;
        cin >> n >> k;

        vector<int> v(n+1,0);

        for(int i = 0; i < n+1; i++)
            v[i] = i;


        vector<int> ans;

        for(int i = k + 1; i < n +1; i++)
            ans.push_back(i);


        //v[2] = 2;

        int left = 1;
        int right = k - 1;




        while(left <= right)
        {
            ans.push_back(v[right]);
            left++;
            right--;
        }

        cout<<ans.size()<<endl;
        for(int x: ans)
            cout<<x<<" ";

        cout<<endl;

        }


}