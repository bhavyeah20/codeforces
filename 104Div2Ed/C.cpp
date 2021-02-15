#include <bits/stdc++.h>

using namespace std;

void perfectPeak(vector<int> &A) {
    int n = A.size();
    
    if(n < 3){
        cout<<"0";
        return;
    }
        
    vector<int> leftMax(n,INT_MIN);
    vector<int> rightMax(n,INT_MIN);
    
    int currMax = INT_MIN;
    
    for(int i = 0; i < n; i++)
    {
        if(A[i] > currMax)
            currMax = A[i];
            
        leftMax[i] = currMax;
    }
    
    currMax = INT_MIN;
    
    for(int i = n - 1; i >= 0; i--)
    {
        if(A[i] > currMax)
            currMax = A[i];
            
        rightMax[i] = currMax;
    }

    for(int x: leftMax)
        cout<<x<<" ";

    cout<<endl;

    for(int x: rightMax)
        cout<<x<<" ";

    cout<<endl;
    
    
    for(int i = 1; i < n - 1; i++)
    {
        if((A[i] > leftMax[i - 1]) && (A[i] < rightMax[i + 1])){
            cout<<A[i];
            return;
        }
    }
    
    return;
    
}


int main(int argc, char const *argv[])
{
    vector<int> v({5706, 26963, 24465, 29359, 16828, 26501, 28146, 18468, 9962, 2996, 492, 11479, 23282, 19170, 15725, 6335 });
    perfectPeak(v);   
}

// 16 5706 26963 24465 29359 16828 26501 28146 18468 9962 2996 492 11479 23282 19170 15725 6335