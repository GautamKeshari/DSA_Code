// https://www.codingninjas.com/studio/problems/longest-common-subsequence_624879?source=youtube&campaign=striver_dp_videos&utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_dp_videos&leftPanelTab=1

// int f(int i, int j, string &s, string &t) {
//     if(i<0 || j<0){
// 		return 0;
// 	}

// 	if(s[i]==t[j]) return 1+f(i-1,j-1,s,t);

// 	return max(f(i,j-1,s,t),f(i-1,j,s,t));

// }

// int lcs(string s, string t)
// {
	
// 	int n=s.size(),m=t.size();
// 	return f(n-1,m-1,s,t);
// }