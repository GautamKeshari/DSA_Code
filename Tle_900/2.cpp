#include<bits/stdc++.h>
using namespace std;

int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int t;
    cin>>t;

    while(t--){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;

        map<char,int> mp;
        int oddcnt=0;
        for(int i=0;i<n;i++){
            mp[s[i]]++;
        }
        for(auto it:mp){
            if((it.second)&1) oddcnt++;
        }
        // cout<<oddcnt<<"\n";
        if(k<(oddcnt-1)) cout<<"NO"<<"\n";
        else cout<<"YES"<<"\n";
    }
}


