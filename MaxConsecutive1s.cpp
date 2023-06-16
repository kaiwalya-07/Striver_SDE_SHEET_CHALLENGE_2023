int longestSubSeg(vector<int> &arr , int n, int k){
    // Write your code here.
    int ans=0,j=0,ct=0,i=0;
    
    while(j<n){
        if(arr[j]==0){
            ct++;
            
            if(ct>k){
                while(ct>k){
                    if(arr[i]==0){
                        ct--;
                    }
                    i++;
                }
            }
        }

        ans=max(ans,j-i+1);
        j++;
    }

    return ans;
}
