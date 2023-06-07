bool searchMatrix(vector<vector<int>>& mat, int target) {
    int n=mat.size();
    int m=mat[0].size();
        int l=0,r=(n*m) - 1;

        while(l<=r){
            int mid=r+(l-r)/2;

            if(mat[mid/m][mid%m]==target) return true;

            else if(mat[mid/m][mid%m]<target){
                l=mid+1;
            }
            else{
                r=mid-1;
            }
        }

        return 0;
}
