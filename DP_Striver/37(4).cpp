// int maxProfit(vector<int>& values){
//     int n=values.size();
//     vector<vector<int>> curr(2,vector<int> (3,0));
//     vector<vector<int>> after(2,vector<int> (3,0));

//     for(int ind=n-1;ind>=0;ind--){
//         for(int buy=0;buy<=1;buy++){
//             for(int count=1;count<=2;count++){
//                 int profit=0;
//                 if(buy){
//                     profit=max((-values[ind] + after[0][count]), (0+after[1][count]) );    
//                 }else{
//                     profit=max((values[ind]+after[1][count-1]), (0+after[0][count]) );
//                 }
//                 curr[buy][count]=profit;
//             }
//             after=curr;
//         }
//     }
//     return curr[1][2];
// }


// T.C. = O(n*2*3)  S.C.=O(2*3)
// This can also be solved in T.C. of O(N*4).