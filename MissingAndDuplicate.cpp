#include <bits/stdc++.h>

pair<int,int> missingAndRepeating(vector<int> &arr, long long n)
{
	// Write your code here 
	pair<int,int>ans;
	//int m=n-1;
	long long sq=(n * (n + 1) / 2) * (2 * n + 1) / 3;
	long long s=(n*(n+1))/2;
	long long sum=0,sqsum=0;
	
	for(int i=0;i<n;i++){
		sum+=arr[i];
	}

	for(int i=0;i<n;i++){
		sqsum+=(arr[i]*arr[i]);
	} 	 
	
	int g=sum-s;
	int h;

	h=(sqsum-sq)/g;
	
	ans.first=(h-g)/2;
	ans.second=(h+g)/2;

	return ans;
}
