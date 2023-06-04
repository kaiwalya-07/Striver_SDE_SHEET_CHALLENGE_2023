#include <bits/stdc++.h> 
int maximumProfit(vector<int> &prices){
    // Write your code here.
    int minP=INT_MAX,maxPr=INT_MIN;

    for(int i=0;i<prices.size();i++){
        minP=min(minP,prices[i]);
        maxPr=max(maxPr,prices[i]-minP);
    }

    return maxPr;
}
