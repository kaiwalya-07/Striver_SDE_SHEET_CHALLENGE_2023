#include <bits/stdc++.h> 
void sort012(int *arr, int n)
{
   //   Write your code here
   int l=0,mid=0,h=n-1;

   while(mid<h){
      if(arr[mid]==0){
         swap(arr[l],arr[mid]);
         l++;
         mid++;
      }

      else if(arr[mid]==1){
         mid++;
      }
      else{
         swap(arr[mid],arr[h]);
         h--;
      }
   }

}
