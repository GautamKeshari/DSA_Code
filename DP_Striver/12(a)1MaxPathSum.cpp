// https://www.codingninjas.com/studio/problems/maximum-path-sum-in-the-matrix_797998?source=youtube&campaign=striver_dp_videos&utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_dp_videos&leftPanelTab=1

// #include <bits/stdc++.h> 

// int f(int i,int j,vector<vector<int>> &matrix,int m){
//     if(j<0 || j>=m) return -1e8;
//     if(i==0) return matrix[0][j];

//     int up=matrix[i][j] + f(i-1,j,matrix,m);
//     int ld=matrix[i][j] + f(i-1,j-1,matrix,m);
//     int rd=matrix[i][j] + f(i-1,j+1,matrix,m);

//     return max(up,max(ld,rd));
// }

// int getMaxPathSum(vector<vector<int>> &matrix)
// {
//     int n=matrix.size();
//     int m=matrix[0].size();
//     int maxi=-1e8;
//     for(int j=0;j<m;j++){
//         maxi=max(maxi,f(n-1,j,matrix,m));
//         // maxi=(maxi<val)?val:maxi;
//     }
//     return maxi;
// }