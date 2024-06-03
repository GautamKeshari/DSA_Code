int func(vector<int> &wt,int cap){
    int n=wt.size();
    int day=1,load=0;
    for(int i=0;i<wt.size();i++){
        if(load+wt[i]>cap){
            day+=1;
            load=wt[i];
        }else{
            load+=wt[i];
        }
    }
    return day;
}

int leastWeightCapacity(vector<int> &weights, int d)
{
    int n=weights.size();
    int sum=accumulate(weights.begin(),weights.end(),0);
    int maxi=0;
    for(int i=0;i<n;i++){
        maxi=max(maxi,weights[i]);
    }
    int low=maxi,high=sum;
    int ans=0;
    while(low<=high){
        int mid=low+(high-low)/2;
        int x=func(weights,mid);
        if(x<=d){
            ans=mid;
            high=mid-1;
        }else{
            low=mid+1;
        }
    }
    return ans;
}