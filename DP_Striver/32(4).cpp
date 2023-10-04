// #include<bits/stdc++.h>
// int mod=(int)(1e9+7);

// int distinctSubsequences(string &s1, string &s2)
// {
// 	int n=s1.length(),m=s2.length();
// 	vector<int> prev(m+1,0),curr(m+1,0);

// 	prev[0]=curr[0]=1;

// 	for(int i=1;i<=n;i++){
// 		for(int j=1;j<=m;j++){
// 			if(s1[i-1]==s2[j-1])
// 				curr[j]=(prev[j-1] + prev[j])%mod;
// 			else
// 				curr[j]=(prev[j])%mod;
// 		}
// 		prev=curr;
// 	}
// 	return prev[m];
// }
