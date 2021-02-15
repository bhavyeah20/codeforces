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

            vector<lld> pos(n,0);

            if(n % 2 == 0)
            {
                k = (k - 1) % n;
                cout<<k+1<<"\n";
                continue;
            }

            lld left = (n - 1) / 2;
            lld right = n - 1;
            lld counter = 0;

            while(counter < n)
            {
                pos[left] = counter;
                counter++;
                left--;
                if(counter >= n)
                    break;
                pos[right] = counter;
                counter++;
                right--;
            }

            
            lld curr = 0;
            lld i = 0;
            lld rounds = 1;

            while(curr < n)
            {
                if(pos[i] == curr)
                    curr++;

                if(curr >= n)
                    break;
                
                i = (i + 1) % n;    
                rounds++;
            }


            

            k %= rounds;
            
            __gcd(2,3);
           


            // after #rounds we are at orignal position 
           





            lld posB = 1;
            lld posA = n;

            for(lld i = 0; i < k; i++)
            {
                posA--;
                if(!posA)
                    posA = n;

                posB++;
                if(posB == n + 1)
                    posB = 1;

                if(posA == posB)
                {
                    posB++;
                    if(posB == n + 1)
                        posB = 1;
                }
            }

            
            cout<<posB<<"\n";
        }
}
