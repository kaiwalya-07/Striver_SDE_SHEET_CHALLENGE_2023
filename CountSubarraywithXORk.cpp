#include <bits/stdc++.h>

int subarraysXor(vector<int> &arr, int x)
{
    //    Write your code here.
    unordered_map<int,int> m;
    m[0]=1;
    int xr=0,ans=0;

    for(int i=0;i<arr.size();i++){
        xr=xr^arr[i];
        int y=xr^x;
        if(m.find(y)!=m.end()){
              ans=ans+m[y];
        }
        
        m[xr]++;
    
    }

    return ans;

    
}
