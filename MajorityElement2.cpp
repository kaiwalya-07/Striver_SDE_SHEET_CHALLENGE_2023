#include <bits/stdc++.h>

vector<int> majorityElementII(vector<int> &arr)
{
    // Write your code here.
    int n=arr.size();
    vector<int> ans;
   int n1=INT_MIN,n2=INT_MIN,c1=0,c2=0;

   for(int el:arr){
        if(c1==0 && n2!=el){
           c1=1;
           n1=el;    
         }

        else if(c2==0 && n1!=el){
           c2=1;
           n2=el; 
         }
        else if(el==n1) c1++;
        else if(el==n2) c2++;
        else{
           c1--;
           c2--;
        }
   }

   int f1=0,f2=0;
   for(auto el:arr){
       if(el==n1) f1++;
       else if(el==n2) f2++;
   }
    
    int m=int(n/3);
   if(f1>m) ans.push_back(n1);
   if(f2>m) ans.push_back(n2);

    return ans;


}
