// https://www.naukri.com/code360/problems/rotated-array_1093219?utm_source=youtube&utm_medium=affiliate&utm_campaign=codestudio_Striver_BinarySeries&leftPanelTabValue=PROBLEM


int findMin(vector<int>& arr)
{
	int n=arr.size();
	int s=0,e=n-1;
    int x=arr[0];
    int incInd=0;
    while(s<=e){
        int mid=s+(e-s)/2;
        if(arr[mid]<x){
            incInd=mid;
            e=mid-1;
        }else{
            s=mid+1;
        }
    }
    return arr[incInd];
}