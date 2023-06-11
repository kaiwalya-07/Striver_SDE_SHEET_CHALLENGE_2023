#include <bits/stdc++.h> 
int uniqueSubstrings(string input)
{
    //Write your code here
    vector<int> vis(26,-1);
    int i=0,n=input.size(),l=0,ans=0;
    
    while(i<n){
       if(vis[input[i]-'a']!=-1){
           l=max(vis[input[i]-'a']+1,l);
       } 

       vis[input[i]-'a']=i;
       ans=max(ans,i-l+1);
       i++;
    }

    return ans;
}
