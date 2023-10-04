// https://www.codingninjas.com/studio/problems/longest-common-substring_1235207?source=youtube&campaign=striver_dp_videos&utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_dp_videos&leftPanelTab=0

// int lcs(string &s, string &t){
//     int n=s.size(),m=t.size();
    
//     vector<vector<int> >dp(n+1, vector<int>(m+1,0));
//     for(int i=0;i<=n;i++) dp[i][0]=0;
//     for(int j=0;j<=m;j++) dp[0][j]=0;

//     int ans=0;

//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=m;j++){
//             if(s[i-1]==t[j-1]){
//                 dp[i][j]=1+dp[i-1][j-1];
//                 ans=max(ans,dp[i][j]);
//             }else{
//                 dp[i][j]=0;
//             }
//         }
//     }
//     return ans;
// }