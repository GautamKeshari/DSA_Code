// https://codeforces.com/contest/1922/problem/B

#include<bits/stdc++.h>
using namespace std;

int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    long long t;
    cin>>t;

    while(t--){
        long long n;
        cin>>n;
        vector<long long> arr(n),cnt(n+1);
        for(long long i=0;i<n;i++){
            cin>>arr[i];
            cnt[arr[i]]++;
        }
        long long ans=0;
        
        int smaller=0;
        for(int i=0;i<=n;i++){
            ans+=1LL*cnt[i]*(cnt[i]-1)*(cnt[i]-2)/6;
            ans+=(1LL*cnt[i]*(cnt[i]-1)/2)*smaller;
            smaller+=cnt[i];
        }

        cout<<ans<<"\n";
    }
    return 0;
}


