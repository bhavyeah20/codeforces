#include<bits/stdc++.h>
#define lld long long int
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
    	int A, B, n;
        cin >> A >> B >> n;
        vector<int> a(n,0);
        vector<int> b(n,0);
        set<pair<int,int>> attackMonster;
        lld sum = 0;

        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
            attackMonster.insert({a[i],i});
        }

        for(int i = 0; i < n; i++)
            cin >> b[i];

        if(sum <= B)
        {
            cout<<"YES"<<"\n";
            continue;
        }
       

        // sort(attackMonster.begin(),attackMonster.end());

        // int pos = 0;
        auto it = attackMonster.begin();
        int count = 0;
        int value = it->first;
      

        while((B > 0) && (it != attackMonster.end()))
        {
            //can be optimised
                
                int num2 = B / it->first;
                int num1 = b[it->second] / A;

                int num = min(num1,num2);

                if(num)
                {
                    b[it->second] -= A * num;
                    B -= it->first * num;                   

                }
                else
                {
                    B -= it->first;
                    b[it->second] -= A;
                }


 
            while((B > 0) && (b[it->second] > 0))
            {
                if(b[it->second] < A)
                {
                    it++;
                }

                B -= it->first;
                b[it->second] -= A;
            }
                


                // B -= attackMonster[pos].first;
                // b[attackMonster[pos].second] -= A;
            

            if(b[it->second]<= 0)
            {

                it++;

            }
                // pos++;
            
            

        }

        if(it == attackMonster.end())
        {
            cout<<"YES"<<"\n";
            continue;
        }

        cout<<"NO"<<"\n";
    }

}