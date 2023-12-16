// #include<bits/stdc++.h>

// int ninjaTraining(int n, vector<vector<int>> &points)
// {   
//     int dp[n][4]={0};
//     //base case
//     dp[0][0]=max(points[0][1],points[0][2]);
//     dp[0][1]=max(points[0][0],points[0][2]);
//     dp[0][2]=max(points[0][0],points[0][1]);
//     dp[0][3]=max(points[0][0],max(points[0][1],points[0][2]));

//     for(int day=1;day<n;day++){
//         for(int last=0;last<=3;last++){

//             dp[day][last]=0;
//             for(int task=0;task<3;task++){
//                 if(task!=last){
//                     int cpoint=points[day][last]+dp[day-1][task];
//                     dp[day][last]=max(dp[day][last],cpoint);
//                 }
//             }
//         }
//     }
//     return dp[n-1][3];
// }