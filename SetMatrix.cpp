#include <bits/stdc++.h>

void setZeros(vector<vector<int>> &matrix)
{
	// Write your code here.

	// most optimal solution below but the intutuion comes from the previous space using solution

	// we do not keep 2 dummy arrays to track the check but convert the first row and first 
	// column as the dummy array and also keep column0 check as a non 0 number to avoid overlap

	int col0=1;
	int n=matrix.size();
	int m=matrix[0].size();

	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){  
			if(matrix[i][j]==0){
               	matrix[i][0]=0;
          
		  // the overlap condition solution
		      if(j!=0) matrix[0][j]=0;
		     else col0=0;
			}    
		}
	}
  
  // traverse for rest of the element i.e except for the boundary elements
	for(int i=1;i<n;i++){
		for(int j=1;j<m;j++){
			if(matrix[i][0]==0 || matrix[0][j]==0){
				matrix[i][j]=0;
			}
		}
	} 

	// go for the boundary conditionsbut keep inmind the 1st row last column elemntis depend
	// on 1st row 1st column so dont change 1st row 1st column fisrt,instead go for the 1st row
	// except 1st coumn

	if(matrix[0][0]==0){
		for(int j=1;j<m;j++){
			matrix[0][j]=0;
		}
	}

	// check the col0 elemnt  is 0 then whole first column wil be 0
   if(col0==0){
	   for(int i=0;i<n;i++){
		   matrix[i][0]=0;
	   }
   }
}
