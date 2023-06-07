#include <bits/stdc++.h>

int power(int x,int n,int m){

    int ans=1;
	while(n>0){
		//int last_bit=(n&1);
		if(n%2==1){
			ans=(1LL*(ans%m)*(x%m))%m;
		}
        
		n=n>>1;
		x=(1LL*(x%m)*(x%m))%m;	
	}
  return (ans)%m;
}

int modularExponentiation(int x, int n, int m) {
	// Write your code here.

	return power(x,n,m);
}
