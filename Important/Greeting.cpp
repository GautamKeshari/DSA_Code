// https://codeforces.com/contest/1915/problem/F

#include<bits/stdc++.h>
using namespace std;
# define ll long long

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        map<int,int> mp;
        vector<int> v;
        while(n--){
            int a,b;
            cin>>a>>b;
            mp[a]=b;
            v.push_back(b);
        }
        sort(v.begin(),v.end());

        long long ans=0;
        for(auto it:mp){
            auto pos=lower_bound(v.begin(),v.end(),it.second);

            ans+=pos-v.begin();
            v.erase(pos);
        }
        cout<<ans<<"\n";
    }
}



// 5
// 2
// 2 3
// 1 4
// 6
// 2 6
// 3 9
// 4 5
// 1 8
// 7 10
// -2 100
// 4
// -10 10
// -5 5
// -12 12
// -13 13
// 5
// -4 9
// -2 5
// 3 4
// 6 7
// 8 10
// 4
// 1 2
// 3 4
// 5 6
// 7 8


// OUTPUT
// 1
// 9
// 6
// 4
// 0

