#include <bits/stdc++.h> 
vector<vector<int>> findTriplets(vector<int>arr, int n, int K) {
	// Write your code here.
	sort(arr.begin(),arr.end());

	vector<vector<int>> ans;

	for(int i=0;i<n;i++){
		int el=arr[i],target=K-arr[i];
		int l=i+1,r=n-1;

		while(l<r){

			if(arr[l]+arr[r]==target){
				
				vector<int> temp(3,0);
				temp[0]=arr[i];
				temp[1]=arr[l];
				temp[2]=arr[r];
				ans.push_back(temp);
				l++;
				r--;
				
			}

			else if(arr[l]+arr[r]<target) l++;
			else{
				r--;
			}
		}
	}
	sort(ans.begin(),ans.end());
	ans.erase(unique(ans.begin(), ans.end()), ans.end());
	return ans;
}
