// https://www.naukri.com/code360/problems/minimum-rate-to-eat-bananas_7449064?utm_source=youtube&utm_medium=affiliate&utm_campaign=codestudio_Striver_BinarySeries&leftPanelTabValue=SUBMISSION

long long findTime(vector<int> &v, int rateOfEating){
    long long totaltime=0;
    for(int i=0;i<v.size();i++){
        double x=((double)v[i])/((double)rateOfEating);
        totaltime+=ceil(x);
    }
    return totaltime;
}

int minimumRateToEatBananas(vector<int> v, int h) {
    int n=v.size();
    int high=-(1e9+7),low=1;
    for(int i=0;i<n;i++){
        high=max(high,v[i]);
    }
    if(h>=high) return 1;
    int ans=1e9+7;
    while(low<=high){
        int mid=low+(high-low)/2;     // assumed rate of eating banana
        if(findTime(v, mid)<=h){
            high=mid-1;
        }else{
            low=mid+1;
        }
    }
    return low;
}