#include <bits/stdc++.h> 
/*

    intervals[i][0] = start point of i'th interval
    intervals[i][1] = finish point of i'th interval

*/

vector<vector<int>> mergeIntervals(vector<vector<int>> &intervals)
{
    // Write your code here.
    sort(intervals.begin(),intervals.end());

    vector<vector<int>> res;

    res.push_back(intervals[0]);
    int j=0;

    for(int i=1;i<intervals.size();i++){
        if(res[j][1]>=intervals[i][0]){
            if(intervals[i][1]>res[j][1]){
                res[j][1]=intervals[i][1];
            }
        }

        else{
              res.push_back(intervals[i]);
              j++;
        }    

    }

    return res;
}
