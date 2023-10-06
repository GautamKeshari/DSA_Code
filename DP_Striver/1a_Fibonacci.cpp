#include<bits/stdc++.h>
using namespace std;
// MEMOIZATION METHOD
int fac(int n,vector<int>&dp){
    if(n==0 || n==1) return n;

    if(dp[n]!=-1) return dp[n];

    return dp[n]=fac(n-1,dp)+fac(n-2,dp);
}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int n;
    cin>>n;
    vector<int>dp(n+1,-1);
    cout<<fac(n,dp)<<endl;
}