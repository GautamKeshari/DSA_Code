int missingK(vector < int > vec, int n, int k) {
    int low=0,high=n-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        int cntOfMissingNo=vec[mid]-(mid+1);
        if(cntOfMissingNo<k){
            low=mid+1;
        }else{
            high=mid-1;
        }
    }
    return (k+high+1);
}
