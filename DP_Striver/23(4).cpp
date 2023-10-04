// int unboundedKnapsack(int n, int W, vector<int> &value, vector<int> &wt){
//     vector<int> prev(W+1,0), curr(W+1,0);
//     for(int weight=0;weight<=W;weight++){
//         prev[weight]=(weight/wt[0])*value[0];
//     }

//     for(int ind=1;ind<n;ind++){
//         for(int weight=0;weight<=W;weight++){
//             int notTake = 0 + prev[weight];
//             int take = -1e9;
//             if(wt[ind]<=weight){
//                 take=value[ind] + curr[weight-wt[ind]];
//             }
//             curr[weight]=max(take,notTake);
//         }
//         prev=curr;
//     }
//     return prev[W];
// }