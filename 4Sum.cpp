#include <bits/stdc++.h>

string fourSum(vector<int> arr, int target, int n) {
    // Write your code here.
    if(n<4) return "No";
    sort(arr.begin(),arr.end());
 
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){

            int l=j+1,r=n-1;
            long long k=target-arr[i]-arr[j];
            while(l<r){
                if(arr[l]+arr[r]==k) return "Yes";
                else if(arr[l]+arr[r]<k) l++;
                else r--;
            }

        }
    }

    return "No";
}
