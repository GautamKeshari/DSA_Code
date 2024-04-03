#include<bits/stdc++.h>
using namespace std;
// # define long long long long

int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int t;
    cin>>t;

    while(t--){
        int x,n;
        cin>>x>>n;
        int ans=1;
        for(int i=1;i*i<=x;i++){
            if(x%i==0){
                if(i*n<=x){
                    ans=max(ans,i);
                }
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}


