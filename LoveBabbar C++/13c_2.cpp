// if we write 1st if condition after 2nd then this code will show runtime error,
// because there is possibility that if start=0 and end=1,then mid=0,so if we check 
// arr[mid] > arr[mid-1] condition ,then (mid-1) become -1 ,which is wrong ,but 
// we also know that peak index never lie at index=0 and index=n-1 ,so if we 1st check
// the condition arr[mid+1]>arr[mid] then starting case always handle correctly by this.
//  See this example=[3,5,3,2,0]
// it is also seen that mid+1 can go at max index=n-2 ,it never reach (n-1)th index

// class Solution {
// public:
//     int peakIndexInMountainArray(vector<int>& arr) {
//         int ans=-1;
//         int s=0,e=arr.size()-1;
//         while(s<=e){
//             int mid=s+(e-s)/2;

//             if(arr[mid+1]>arr[mid] ){
//                 s=mid+1;
//             }else if(arr[mid-1]>arr[mid] ){
//                 e=mid-1;
//             }else{
//                 ans=mid;
//                 break;
//             }
//         }
//         return ans;
//     }
// };