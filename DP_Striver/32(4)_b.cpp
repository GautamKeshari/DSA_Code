// #include<bits/stdc++.h>
// int mod=(int)(1e9+7);

// int distinctSubsequences(string &s1, string &s2)
// {
// 	int n=s1.length(),m=s2.length();
// 	vector<int> dp(m+1,0);

// 	dp[0]=1;

// 	for(int i=1;i<=n;i++){
// 		for(int j=m;j>=1;j--){
// 			if(s1[i-1]==s2[j-1])
// 				dp[j]=(dp[j-1] + dp[j])%mod;
// 		}
// 	}
// 	return dp[m];
// }
