// https://www.codingninjas.com/studio/problems/number-of-subsets_3952532?source=youtube&campaign=striver_dp_videos&utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_dp_videos&leftPanelTab=0

// const int mod=1e9+7;

// int f(int ind,vector<int> &arr,int target){
//     if(ind==0){
//         if(target==0 && arr[0]==0) return 2;
//         else if(target==0 || target==arr[0]) return 1;
//         return 0;
//     }

//     int notpick=f(ind-1,arr,target);
//     int pick=0;
//     if(arr[ind]<=target){
//         pick=f(ind-1,arr,target-arr[ind]);
//     }
//     return (pick+notpick)%mod;
// }

// int findWays(vector<int>& arr, int k)
// {
//     int n=arr.size();
// 	return f(n-1,arr,k);
// }
