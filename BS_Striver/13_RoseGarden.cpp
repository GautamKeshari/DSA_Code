// https://www.naukri.com/code360/problems/rose-garden_2248080?utm_source=youtube&utm_medium=affiliate&utm_campaign=codestudio_Striver_BinarySeries&leftPanelTabValue=PROBLEM

#define ll long long
pair<int,int> findminmax(vector<int> &arr,int n){
	int maxi=-(1e9+7),mini=(1e9+7);
	for(auto it:arr){
		if(it>maxi) maxi=it;
		if(it<mini) mini=it;
	}
	return {mini,maxi};
}

int possibleBouquet(vector<int> &arr,int n,int day, int roses){
	int cnt=0,i=0,consecutiveday=0;
	while(i<n){
		if(arr[i]<=day){
			consecutiveday++;
		}else{
			cnt+= consecutiveday / roses;         //no.of bouquet till (i th) day
			consecutiveday=0;
		}
		i++;
	}
	cnt+=consecutiveday/roses;
	return cnt;
}

int roseGarden(vector<int> arr, int k, int m)
{
	int n=arr.size();
	ll maxrose=k*m;
	if(maxrose>n) return -1;

	pair<int,int> minmaxday=findminmax(arr,n);
	int mini=minmaxday.first;
	int maxi=minmaxday.second;

	int low=mini,high=maxi;
	int ans=1e9+7;
	while(low<=high){
		int mid=low+(high-low)/2;
		int x=possibleBouquet(arr,n,mid,k);
		if(x>=m){
			high=mid-1;
		}else{
			low=mid+1;
		}
	}
	return low;
}