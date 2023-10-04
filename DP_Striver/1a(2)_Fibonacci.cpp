#include<bits/stdc++.h>
using namespace std;
// TABULATION METHOD
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int n;
    cin>>n;
    // vector<int>dp(n+1,-1);
    // cout<<fac(n,dp)<<endl;

    int prev=0,prev1=1;
    int curr=0;
    if(n<=1){
        cout<<n<<endl;
    }else{
        for(int i=2;i<=n;i++){
            curr=prev+prev1;
            prev=prev1;
            prev1=curr;
        }
        cout<<curr<<endl;   
    }
}