// https://www.codingninjas.com/studio/problems/subsequence-counting_3755256?source=youtube&campaign=striver_dp_videos&utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_dp_videos&leftPanelTab=1

// int f(int i,int j,string &s1, string &s2){
// 	if(j<0) return 1;
// 	if(i<0) return 0;

// 	if(s1[i]==s2[j])
// 		return (f(i-1,j-1,s1,s2) + f(i-1,j,s1,s2));
// 	else
// 		return f(i-1,j,s1,s2);
// }

// int distinctSubsequences(string &str, string &sub)
// {
// 	int n=str.length(),m=sub.length();
// 	return f(n-1,m-1,str,sub); 
// }
