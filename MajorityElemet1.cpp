#include <bits/stdc++.h>

int findMajorityElement(int arr[], int n) {
	// Write your code here.
	int ct=0;
	int el=arr[0];

	for(int i=0;i<n;i++){
				if(ct==0){
				el=arr[i];
		}
	
		if(arr[i]==el){
			ct++;
		}
		else{
			ct--;
	
		}
	}

     int freq=0;
	for(int i=0;i<n;i++){
          if(arr[i]==el){
			  freq++;
		  }
	}

	if(freq>n/2) return el;
	return -1;
}
