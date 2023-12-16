// Space Optimized

// int frogjumps(int n, vector<int> heights){
//     vector<int> list(k,0);
//     for(int ind=0;ind<n;ind++){
//         int mini=INT_MAX;
//         for(int x=1;x<=k;x++){
//             if(ind-x>=0){
//                 int jump = dp[ind-x]+ abs(heights[ind]-heights[ind-x]);
//                 mini=min(mini,jump);
//             }
//         }
//         for(int i=0;i<=k-2;i++){
//             list[i]=list[i+1];
//         }
//         list[k-1]=mini;
//     }
// }