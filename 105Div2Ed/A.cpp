#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin >> t;

    while(t--)
    {
        string s;
        cin >> s;

        int sum = 0;
        int flag = 0;

        int it = 0;
        
        for(int i = 0; i < 2; i++)
        {
            for(int j = 0; j < 2; j++)
            {
                for(int k = 0; k < 2; k++)
                {

                    int it = 0;
                    sum = 0;
                    while(it < s.size())
                    {   
                        if(s[it] == 'A')
                        {
                            if(i)
                            {
                                sum++;
                            }

                            else
                            {
                                sum--;
                                if(sum < 0)
                                {
                                    break;
                                }
                            }
                        }

                        if(s[it] == 'B')
                        {
                            if(j)
                            {
                                sum++;
                            }

                            else
                            {
                                sum--;
                                if(sum < 0)
                                {
                                    break;
                                }
                            }
                        }

                        if(s[it] == 'C')
                        {
                            if(k)
                            {
                                sum++;
                            }

                            else
                            {
                                sum--;
                                if(sum < 0)
                                {
                                    break;
                                }
                            }
                        }

                        it++;
                    }

                if(sum == 0)
                {
                    cout<<"YES"<<"\n";
                    flag = 1;
                    break;
                }

            }

            if(flag)
                break;

        }

        if(flag)
            break;
    



    }

if(!flag)
    cout<<"NO"<<"\n";
}
    }
