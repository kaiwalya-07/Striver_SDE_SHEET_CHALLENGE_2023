#include <bits/stdc++.h>

int lengthOfLongestConsecutiveSequence(vector<int> &arr, int n) {
    // Write your code here.
    sort(arr.begin(),arr.end());
    
    int lastSmall=INT_MIN,lmax=0,l=1;

    for(int i=0;i<n;i++){
        if(arr[i]==lastSmall+1){
            l++;
            lastSmall=arr[i]; 
        }
        
        else if(arr[i]!=lastSmall){
            l=1;
            lastSmall=arr[i];
        }
        lmax=max(l,lmax);
              
    }

    return lmax;
}
