// #include <bits/stdc++.h> 

// int getMaxPathSum(vector<vector<int>> &matrix)
// {
//     int n=matrix.size();
//     int m=matrix[0].size();
//     vector<int> prev(m);
//     for(int j=0;j<m;j++){
//         prev[j]=matrix[0][j];
//     }

//     for(int i=1;i<n;i++){
//         vector<int> curr(m);
//         for(int j=0;j<m;j++){
//             if(j==0) curr[j]=matrix[i][j]+max(prev[j],prev[j+1]);
//             else if(j==m-1) curr[j]=matrix[i][j]+max(prev[j-1],prev[j]);
//             else{
//                 int up=matrix[i][j] + prev[j];
//                 int ld=matrix[i][j] + prev[j-1];
//                 int rd=matrix[i][j] + prev[j+1];

//                 curr[j]=max(up,max(ld,rd));
//             }
//         }
//         prev=curr;
//     }

//     int maxi=-1e8;
//     for(int j=0;j<m;j++){
//         maxi=max(maxi,prev[j]);
//     }
//     return maxi;
// }