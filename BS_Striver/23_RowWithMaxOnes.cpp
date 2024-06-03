// https://www.naukri.com/code360/problems/row-with-maximum-1-s_1112656?utm_source=youtube&utm_medium=affiliate&utm_campaign=codestudio_Striver_BinarySeries&leftPanelTabValue=PROBLEM

int ones(vector<int> arr,int m){
    // int low=0,high=m-1;
    // while(low<=high){
    //     int mid=low+(high-low)/2;
    //     if(arr[mid]==1) high=mid-1;
    //     else low=mid+1;
    // }
    int high=lower_bound(arr.begin(),arr.end(),1)-arr.begin();
    return (m-(high));
}

int rowWithMax1s(vector<vector<int>> &matrix, int n, int m) {
    int maxiRow=-1,maxOnes=0;
    for(int i=0;i<n;i++){
        int onesInRow=ones(matrix[i],m);
        if(onesInRow>maxOnes){
            maxOnes=onesInRow;
            maxiRow=i;
        }
    }
    return maxiRow;
}