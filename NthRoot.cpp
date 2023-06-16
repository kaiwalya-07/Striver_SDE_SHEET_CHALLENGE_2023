int NthRoot(int n, int m) {
  // Write your code here.
  int l=1,h=m;

  while(l<=h){
    int mid=l-(l-h)/2;

    if(pow(mid,n)==m) return mid;

    else if(pow(mid,n)>m) h=mid-1;

    else l=mid+1;
  }
  return -1;
}
