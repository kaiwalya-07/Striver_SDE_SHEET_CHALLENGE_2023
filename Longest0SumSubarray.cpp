#include <bits/stdc++.h>

int LongestSubsetWithZeroSum(vector < int > arr) {
  

  // Write your code here
  
    unordered_map<int,int> mp;
    
    int s=0,lmax=0;
    
    for(int i=0;i<arr.size();i++){
      s+=arr[i];
      if(s==0){
        lmax=i+1;
      }

      else{
        if(mp.find(s)==mp.end()){
          mp[s]=i;
        }
        else{
          lmax=max(lmax,i-mp[s]);
        }
      }
    }

    return lmax;
}
