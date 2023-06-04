#include <bits/stdc++.h> 
vector<int> nextPermutation(vector<int> &permutation, int n)
{
    //  Write your code here.
    int p,ind=0;

    for(p=n-2;p>=0;p--){
        if(permutation[p]<permutation[p+1]){
           break;
        }
    }

    if(p<0){
        reverse(permutation.begin(),permutation.end());
        return permutation;
    }
    
    for(int j=n-1;j>p;j--){
        if(permutation[j]>permutation[p]){
            swap(permutation[j],permutation[p]);
            break;
        }
    }


    sort(permutation.begin()+p+1,permutation.end());
    return permutation;
}
