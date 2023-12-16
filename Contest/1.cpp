#include<bits/stdc++.h>
using namespace std;
#define int long long int

signed main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int t=1;
    while(t--){
        int n;cin>>n;
        vector<string> v(n);
        vector<pair<int,string>> ans(n);
        int cash;
        cin>>cash;
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        for(int i=0;i<n;i++){
            cin>>ans[i].first;
            ans[i].second=v[i];
        }
        sort(ans.begin(),ans.end());
        int c=0;
        for(int i=0;i<n;i++){
            if(cash>=ans[i].first){
                cash=cash-ans[i].first;
                c++;
            }
        }
        if(c%2==1) c=-1;
        for(int i=0;i<c;i++){
            cout<<ans[i].second<<" - "<<ans[i].first<<endl;
        }
    }
    return 0;
}