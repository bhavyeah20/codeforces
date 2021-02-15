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
            {
                cin >> v[i];
            }

            sort(v.begin(), v.end());

            int count = 0;

            int minn = INT_MAX;

            for(int i = 0; i < n; i++)
            {
                if(v[i] < minn)
                {
                    minn = v[i];
                }

                if(v[i] > minn)
                    count++;
            }

            cout<<count<<"\n";
        }
}
