// #include <bits/stdc++.h>

// int minimumElements(vector<int> &num, int target)
// {
//     int n=num.size();
//     vector<int> prev(target+1,0) ,curr(target+1,0);

//     // base row
//     for(int i=0;i<=target;i++){
//         if(i%num[0]==0) prev[i]=i/num[0];
//         else prev[i]=1e9;
//     }

//     for(int ind=1;ind<n;ind++){
//         for(int tar=0;tar<=target;tar++){
//             int nottake=0+prev[tar];
//             int take=1e9;
//             if(num[ind]<=tar){
//                 take=1+curr[tar-num[ind]];
//             }
//             curr[tar]=min(take,nottake);
//         }
//         prev=curr;
//     }
//     int ans= prev[target];
//     if(ans>=1e9) return -1;
//     return ans;
// }