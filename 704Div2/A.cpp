#include <bits/stdc++.h>

using namespace std;
 

int main()
{   

    long long int t;
    cin >> t;
    while(t--)
    {
        long long int p, a, b, c;
        cin >> p >> a >> b >> c;

        long long int remA, remB, remC;

        if(p < (long long int) min((long long int)a,min((long long int)b,(long long int)c)))
        {
            cout<<(long long int) min((long long int)a-p,min((long long int)b-p,(long long int)c-p))<<"\n";
        }

        else
        {
            

        remA = (long long int) (ceil((double)p/(double)a) * (long long int)a );
        remB = (long long int) (ceil((double)p/(double)b) *(long long int) b );
        remC = (long long int) (ceil((double)p/(double)c) * (long long int)c) ;



        cout<<(long long int) min((long long int)remA-p,min((long long int)remB-p,(long long int)remC-p))<<"\n";
        }
    }  
} 

