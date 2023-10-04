// https://www.codingninjas.com/studio/problems/can-you-make_4244510?source=youtube&campaign=striver_dp_videos&utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_dp_videos&leftPanelTab=1

// int lcs(string s, string t)
// {
// 	int n=s.size(),m=t.size();
// 	vector<int> prev(m+1,0),curr(m+1,0);
// 	for(int j=0;j<=m;j++) prev[j] =0;

// 	for(int i=1;i<=n;i++){
// 		for(int j=1;j<=m;j++){
// 			if(s[i-1]==t[j-1]) curr[j]=1+prev[j-1];
// 			else curr[j]=max(prev[j],curr[j-1]);
// 		}
// 		prev=curr;
// 	}
// 	return prev[m];
// }

// int canYouMake(string &s1, string &s2){
//     int n=s1.length(),m=s2.length();
// 	int ans=n+m-(2*lcs(s1,s2));
// 	return ans;
// }