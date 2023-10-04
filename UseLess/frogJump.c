#include<stdio.h>
int dp[10000];
int rec(int level,int n){
    if(level==n){
        return 0;
    }
    if(dp[level]!=-1){
        return dp[level];
    }
    int ans=0;
    if(level+3<=n){
        ans+=rec(level+3,n)+1;
    }
    if(level+2<=n){
        ans+=rec(level+2,n)+1;
    }
    if(level+1<=n){
        ans+=rec(level+1,n)+1;
    }
    return dp[level]=ans;
}
int main(int argc, char const *argv[])
{
    /* code */
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
    dp[i]=-1;    
    }
    printf("%d",rec(1,n));
    return 0;
}


// TABULATION CODE

#include <stdio.h>

int main(int argc, char const *argv[]) {
    int n;
    scanf("%d", &n);

    int dp[10000];
    for (int i = 0; i <= n; i++) {
        dp[i] = 0;
    }

    dp[0] = 1; // Initialize base case

    for (int level = 1; level <= n; level++) {
        if (level - 1 >= 0) {
            dp[level] += dp[level - 1];
        }
        if (level - 2 >= 0) {
            dp[level] += dp[level - 2];
        }
        if (level - 3 >= 0) {
            dp[level] += dp[level - 3];
        }
    }

    printf("%d", dp[n]);

    return 0;
}

