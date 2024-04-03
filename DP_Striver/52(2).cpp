// https://www.codingninjas.com/studio/problems/boolean-evaluation_1214650?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=PROBLEM

// #define ll long long
// int mod=(int)1e9+7;

// int f(int i,int j,bool isTrue,string & exp,vector<vector<vector<int>>> &dp){
//     if(i>j) return 0;
//     if(dp[i][j][isTrue]!=-1) return dp[i][j][isTrue];
//     if(i==j){
//         if(isTrue) return (exp[i]=='T');
//         else return (exp[i]=='F');
//     }

//     ll ways=0;
//     for(int ind=i+1;ind<j;ind=ind+2){
//         ll lT=f(i,ind-1,1,exp,dp);
//         ll lF=f(i,ind-1,0,exp,dp);
//         ll rT=f(ind+1,j,1,exp,dp);
//         ll rF=f(ind+1,j,0,exp,dp);

//         if(exp[ind]=='&'){
//             if(isTrue){
//                 ways+= (lT*rT)%mod;
//             }else{
//                 ways+= (lT*rF + lF*rT + lF*rF)%mod;
//             }
//         }else if(exp[ind]=='|'){
//             if(isTrue){
//                 ways+= (lT*rT + lT*rF + lF*rT)%mod;
//             }else{
//                 ways+= (lF*rF)%mod;
//             }
//         }else{
//             if(isTrue){
//                 ways+=(lT*rF + lF*rT)%mod;
//             }else{
//                 ways+=(lF*rF + lT*rT)%mod;
//             }
//         }
//     }
//     return dp[i][j][isTrue]=(int)(ways%mod);
// }

// int evaluateExp(string & exp) {
//     int n=exp.length();
//     vector<vector<vector<int>>> dp(n,vector<vector<int>>(n,vector<int>(2,-1)));
//     return f(0,n-1,1,exp,dp);
// }