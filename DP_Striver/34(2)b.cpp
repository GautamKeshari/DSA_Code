// #include<bits/stdc++.h>

// int f(int i,int j,string s1,string s2,vector<vector<int>> &dp){
//    if(i==0 && j==0) return true;
//    if(i==0 && j>0) return false;
//    if(i>0 && j==0){
//       for(int x=1;x<=i;x++){
//          if(s1[x-1]!='*') return false;
//       }
//       return true;
//    }

//    if(dp[i][j]!=-1) return dp[i][j];

//    if(s1[i-1]==s2[j-1] || s1[i-1]=='?') return dp[i][j]=f(i-1,j-1,s1,s2,dp);
//    if(s1[i-1]=='*') return dp[i][j]=(f(i-1,j,s1,s2,dp) || f(i,j-1,s1,s2,dp));
// }

// bool wildcardMatching(string pattern, string text)
// {
//    int n=pattern.size();
//    int m=text.size();
//    vector<vector<int>> dp(n+1,vector<int>(m+1,-1));

//    return f(n,m,pattern,text,dp);
// }
