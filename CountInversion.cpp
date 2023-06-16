#include <bits/stdc++.h> 
int ct=0;

void merge(long long *arr,int n,int l,int mid,int h){
    int left=l;
    int right=mid+1;

    while(left<=mid && right<=h){
        if(arr[left]<=arr[right]){
            left++;
        }

        else{
            int val=arr[right];
            int id=right;

            while(id>left){
                arr[id]=arr[id-1];
                id--;
            }
            arr[left]=val;

            left++;
            mid++;
            ct+=(mid-left+1);
            right++;
        }
    }
}


void mergesort(long long *arr,int n,int l,int h){

   if(l==h) return;

   int mid=(l+h)/2;

   mergesort(arr,n,l,mid);
   mergesort(arr,n,mid+1,h);
   merge(arr,n,l,mid,h);
}


long long getInversions(long long *arr, int n){
    // Write your code here.


    mergesort(arr,n,0,n-1);
    return ct;
}
