#include <bits/stdc++.h>

#define lld long long int
using namespace std;

int main()
{
    lld t;
    cin >> t;

    while(t--)
        {
            lld n, k;
            cin >> n;
            cin >> k;
            k--;


            if(n % 2 == 0)
            {
                k = k % n;
                cout<<k+1<<"\n";
                continue;
            }
            lld gaps = n / 2;

            k = (k / gaps + k) % n;           
            
            cout<<k+1<<"\n";
        }
}
