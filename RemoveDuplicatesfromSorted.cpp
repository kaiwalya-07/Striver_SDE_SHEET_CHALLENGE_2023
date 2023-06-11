int removeDuplicates(vector<int> &nums, int n) {
	// Write your code here.
	int k=1;

	for(int i=1;i<n;i++){
		if(nums[i]!=nums[i-1]){
			nums[k]=nums[i];
			k++;
		}
	}

	return k;
}
