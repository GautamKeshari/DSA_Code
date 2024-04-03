#include<bits/stdc++.h>
# define ll long long
using namespace std;

int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ll t;
    cin>>t;

    while(t--){
        ll n;cin>>n;
        vector<ll> arr(n);
        for(ll i=0;i<n;i++) cin>>arr[i];
        // map<ll,ll> s2e,e2s;
        vector<ll> s2e(n+1),e2s(n+1);
        s2e[0]=0;s2e[1]=1; e2s[n-1]=0;e2s[n-2]=1;

        ll s_sum=1,e_sum=1;
        for(ll i=1;i<n-1;i++){
            ll diff1=arr[i]-arr[i-1];
            ll diff2=arr[i+1]-arr[i];
            if(diff1 < diff2){
                s_sum+=diff2;
                s2e[i+1]=s_sum;
            }else{
                s_sum+=1;
                s2e[i+1]=s_sum;
            }
            // cout<<"sum "<<s_sum<<" ";
        }
        // cout<<endl;

        for(ll i=n-2;i>0;i--){
            ll diff1=arr[i]-arr[i-1];
            ll diff2=arr[i+1]-arr[i];
            if(diff1 < diff2){
                e_sum+=1;
                e2s[i-1]=e_sum;
            }else{
                e_sum+=diff1;
                e2s[i-1]=e_sum;
            }
        }

        ll m;cin>>m;
        for(ll i=0;i<m;i++){
            ll x,y;
            cin>>x>>y;
            ll ans;
            if(x<y){
                ans=s2e[y-1]-s2e[x-1];
            }else{
                ans=e2s[y-1]-e2s[x-1];
            }
            cout<<ans<<"\n";
        }
    }
    return 0;
}


