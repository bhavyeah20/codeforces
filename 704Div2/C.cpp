#include <bits/stdc++.h>

using namespace std;
 

int main()
{  
    int n, m;
    cin >> n >> m;
    string s, t;
    cin >> s >> t; 

    vector<int> left;
    vector<int> right;

    int idx = 0;

    for(int i = 0; i < n; i++)
    {
        if(s[i] == t[idx])
        {
            left.push_back(i);
            idx++;
        }
    }

    idx = m - 1;

    for(int i = n - 1; i >= 0; i--)
    {
        if(s[i] == t[idx])
        {
            right.push_back(i);
            idx--;
        }
    }

    reverse(right.begin(),right.end());

    int currLen = 0;
    int maxLen = INT_MIN;


    for(int i = 0; i < m - 1; i++)
    {
        if(right[i+1] - left[i] > maxLen)
            maxLen = right[i+1] - left[i];
    }

    cout<<maxLen<<"\n";

    
   
} 

