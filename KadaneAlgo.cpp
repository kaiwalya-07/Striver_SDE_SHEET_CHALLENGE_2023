#include <bits/stdc++.h> 
long long maxSubarraySum(int arr[], int n)
{
  
    long long ms=-1,cs=0;

    for(int i=0;i<n;i++){
        if(cs+arr[i]<0){
            cs=0;
        }

        else{
            cs+=arr[i];
        }

        ms=max(cs,ms);
    }
   return ms;
}
