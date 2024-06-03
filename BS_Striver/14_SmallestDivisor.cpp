// https://www.naukri.com/code360/problems/smallest-divisor-with-the-given-limit_1755882?utm_source=youtube&utm_medium=affiliate&utm_campaign=codestudio_Striver_BinarySeries&leftPanelTabValue=PROBLEM

#define ll long long

ll sumAfterDividing(vector <int> &arr,int n, int divisor){
	ll sum=0;
	for(int i=0;i<n;i++){
		sum+=ceil( (double)arr[i]/(double)divisor );
	}
	return sum;
}

int smallestDivisor(vector<int>& arr, int limit)
{
	int n=arr.size();
	int total=0;
	int maxi=0;
	for(int i=0;i<n;i++){
		total+=arr[i];
		maxi=max(maxi,arr[i]);
	}
	if(limit>=total) return 1;
	int low=1,high=maxi;
	while(low<=high){
		int mid=low+(high-low)/2;
		if(sumAfterDividing(arr,n,mid)<=limit){
			high=mid-1;
		}else{
			low=mid+1;
		}
	}
	return low;
}