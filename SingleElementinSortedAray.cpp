int singleNonDuplicate(vector<int>& arr)
{
	// Write your code here

	int l=0,h=arr.size()-1,n=arr.size();
	
	while(l<=h){
		int mid=l-(l-h)/2;
		
		if(mid==0) return arr[0];
		if(mid==n-1) return arr[n-1];
        
		if(arr[mid]!=arr[mid+1]&& arr[mid]!=arr[mid-1]) return arr[mid];

		else if(arr[mid]!=arr[mid+1]&& arr[mid]==arr[mid-1]){
			 if(mid%2==0){
				 h=mid-1;
			 }
			 else{
				 l=mid+1;
			 }
		}

		else{
			if(mid%2==0){
				l=mid+1;
			}
			else{
				h=mid-1;
			}
		}
		
	}

	return -1;
}
