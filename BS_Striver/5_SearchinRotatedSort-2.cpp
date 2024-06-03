// https://www.naukri.com/code360/problems/search-in-a-rotated-sorted-array-ii_7449547?utm_source=youtube&utm_medium=affiliate&utm_campaign=codestudio_Striver_BinarySeries&leftPanelTabValue=PROBLEM

bool searchInARotatedSortedArrayII(vector<int>&arr, int k) {
    int n=arr.size();
    int low=0,high=n-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(arr[mid]==k) return true;
        if(arr[low]==arr[mid]==arr[high]){
            low++;high--;
            continue;
        }

        if(arr[low]<=arr[mid]){           // if we don't put equal then it will be wrong
            if(arr[low]<=k && k<=arr[mid])
                high=mid-1;
            else
                low=mid+1;
        }else{      
            if(arr[mid]<=k && k<=arr[high])
                low=mid+1;
            else
                high=mid-1;
        }
    }
    return false;
}
