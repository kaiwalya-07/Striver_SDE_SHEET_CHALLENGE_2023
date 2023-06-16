#include <bits/stdc++.h> 

int minSumPath(vector<vector<int>> &grid) {
    // Write your code here.

    int n=grid.size();
    int m=grid[0].size();

    vector<int> prev(m,0);

   // prev[0]=grid[0][0];

    for(int i=0;i<n;i++){
        vector<int> cur(m,0);
        for(int j=0;j<m;j++){
            if(i==0 && j==0){
                cur[j]=grid[0][0];
                continue;
            }

            int up=grid[i][j],left=grid[i][j];

            if(i>0){
                up+=prev[j];
            }
            else up=1e9;

            if(j>0){
                 left+=cur[j-1];
            }
            else left=1e9;

            cur[j]=min(up,left);
        }

        prev=cur;
    }

    return prev[m-1];
}
