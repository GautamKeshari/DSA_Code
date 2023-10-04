// int maxProfit(vector<int>& values){
//     int n=values.size();
//     vector<vector<vector<int>>> dp(n+1,vector<vector<int>> (2,vector<int> (3,0)));

//     for(int ind=0;ind<n;ind++){
//         for(int buy=0;buy<=1;buy++){
//             dp[ind][buy][0]=0;   //when count=0  ,not need to write these base case
//         }
//     }
//     for(int buy=0;buy<=1;buy++){
//         for(int cap=0;cap<=2;cap++){
//             dp[n][buy][cap]=0;
//         }
//     }

//     for(int ind=n-1;ind>=0;ind--){
//         for(int buy=0;buy<=1;buy++){
//             for(int count=1;count<=2;count++){
//                 int profit=0;
//                 if(buy){
//                     profit=max((-values[ind] + dp[ind+1][0][count]), (0+dp[ind+1][1][count]) );    
//                 }else{
//                     profit=max((values[ind]+dp[ind+1][1][count-1]), (0+dp[ind+1][0][count]) );
//                 }
//                 dp[ind][buy][count]=profit;
//             }
//         }
//     }
//     return dp[0][1][2];
// }

// // T.C.=O(n*2*3)
// // S.C.=O(n*2*3)

// This is not passing one case ,so try to optimed this