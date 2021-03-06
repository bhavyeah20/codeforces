#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define lld long long int

int h, m;
unordered_map<int,int> um;


vector<int> valids({0,1,2,5,8});

vector<int> validHHMM;


void nextTime(vector<int> &currTime)
{
    // 1->1,2->5,5->2,8->8,0->0

    // cout<<currTime[0]<<currTime[1]<<currTime[2]<<currTime[3];

    int currH = currTime[0] * 10 + currTime[1];
    int currM = currTime[2] * 10 + currTime[3]; 

    // cout<<"currM "<<currM<<"currH "<<currH;

    int flagH = 0;
    int flagM = 0;
    for(int i = 0; i < validHHMM.size(); i++)
    {
        if(currM < validHHMM[i] && validHHMM[i] <= m)
        {
            currM = validHHMM[i];
            flagM = 1;
            break;
        }
    }

    if(!flagM)
    {
        currM = 0;
        for(int i = 0; i < validHHMM.size(); i++)
        {
            if(currH < validHHMM[i] && validHHMM[i] <= h)
            {
                currH = validHHMM[i];
                flagH = 1;
                break;
            }
        }

        if(!flagH)
        currH = 0;
    }

    

    currTime[0] = currH / 10;
    currTime[1] = currH % 10;


    currTime[2] = currM / 10;
    currTime[3] = currM % 10;






}

bool isMirror(vector<int> &currTime)
{
    vector<int> dummy(4,0);
    int flag = 1;


    for(int i = 0; i < 4; i++)
    {
        if(um.find(currTime[i]) != um.end())
            dummy[3-i] = um[currTime[i]];

        else
        {
            flag = 0;
            break;
        }

    }

    // for(int x: dummy)
    //     cout<<"dummies are" <<x<<" ";

    if(!flag)
            return 0;

    int n1 = dummy[0] * 10 + dummy[1];
    int n2 = dummy[2] * 10 + dummy[3];

    if(n1 <= h && n2 <= m)
        return 1;

    return 0;

}

  



int main() 
{
    int t;
    cin >> t;


    for(int i = 0; i < valids.size(); i++)
    {
        for(int j = 0; j < valids.size(); j++)
            validHHMM.push_back(valids[i] * 10 + valids[j]);
    }

    // for(int x: validHHMM)
    //     cout<<x<<" ";

    while(t--)
    {
        h = 0;
        m = 0;        
        cin >> h >> m;
        um[1] = 1;
        um[2] = 5;
        um[5] = 2;
        um[8] = 8;
        um[0] = 0;



        h--;
        m--;

        string s;
        cin >> s;

        vector<int> currTime(4,0);

        currTime[0] = s[0] - '0';
        currTime[1] = s[1] - '0';
        currTime[2] = s[3]- '0';
        currTime[3] = s[4] - '0';



        while(!isMirror(currTime))
        {
            nextTime(currTime);
            s = "";
            s += to_string(currTime[0]);
            s += to_string(currTime[1]);
            s += ':';
            s += to_string(currTime[2]);
            s += to_string(currTime[3]);
            // cout<<"string s is not mirror" <<s<<endl;



        }

        cout<<s<<endl;

       




        
    }


}