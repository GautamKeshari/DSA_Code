// https://www.codingninjas.com/studio/problems/wildcard-pattern-matching_701650?source=youtube&campaign=striver_dp_videos&utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_dp_videos&leftPanelTab=0

// int f(int i,int j,string s1,string s2){
//    if(i<0 && j<0) return true;
//    if(i<0 && j>=0) return false;
//    if(i>=0 && j<0) {
//       for(int x=0;x<=i;x++){
//          if(s1[x]!='*') return false;
//       }
//       return true;
//    }

//    if(s1[i]==s2[j] || s1[i]=='?') return f(i-1,j-1,s1,s2);
//    if(s1[i]=='*') return (f(i-1,j,s1,s2) || f(i,j-1,s1,s2));
// }

// bool wildcardMatching(string pattern, string text)
// {
//    int n=pattern.size();
//    int m=text.size();
//    return f(n-1,m-1,pattern,text);
// }
