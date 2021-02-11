#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
    	string s;
    	cin >> s;
    	int len = s.length();
    	for(int i = 0; i < len; i++)
    	{
    		if(i%2 == 0)
    		{
    			if(s[i] == 'a')
    				s[i] = 'b';
    			else
    				s[i] = 'a';
    		}
    		else
    		{
    			if(s[i] == 'z')
    				s[i] = 'y';
    			else
    				s[i] = 'z';
    		}
    	}

    	cout<<s<<"\n";

    }

}