#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int t;
    cin>>t;

    while(t--){
        ll a,b,n;
        cin>>a>>b>>n;
        vector<int> arr(n);
        for(int i=0;i<n;i++) cin>>arr[i];
        ll ans=b;
        for(auto it:arr){
            if(it<a) ans+=it;
            else ans+=(a-1);
        }
        cout<<ans<<"\n";
    }
    
}


