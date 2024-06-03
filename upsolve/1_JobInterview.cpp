// https://codeforces.com/contest/1976/problem/C
// https://www.youtube.com/watch?v=NWVR-aWQlBs&t=2100s

#include<bits/stdc++.h>
using namespace std;

#define nl "\n"
#define sp " " 
#define int long long int

//Types
#define ui unsigned int
#define us unsigned short
#define ull unsigned long long
#define ll long long
#define ld long double
#define vll vector<ll>
#define vi vector<int>
#define vvi vector<vector<int>>
#define vii vector<pair<int,int>>
#define pii pair<int,int>

// Utils
#define len(x) int((x).size())
#define pb push_back
#define all(n) n.begin(), n.end()
#define rall(n) n.rbegin(), n.rend()

// Constants
const ll MOD=1e9+7;

// Helper functions
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
ll getRandomNumber(ll l,ll r){ return uniform_int_distribution<ll>(l,r)(rng) ;}
bool odd(ll num) {return ((num & 1)==1); }
bool even(ll num) {return ((num & 1)==0); }
ll nCk(ll n, ll k){
    ll res=1;
    for(ll i=0;i<k;i++){
        res=res * (n-i);
        res=res / (i+1);
    }
    return res;
}

/*-----------------------------------------------*/

void solve(){
    int n,m;
    cin>>n>>m;
    vii a(n+m+1);

    for(auto &it:a) cin>>it.first;
    for(auto &it:a) cin>>it.second;

    vii prog, tester;       //val,index

    for(int i=0;i<(n+m+1);i++){
        pii p={a[i].first,i}, t={a[i].second,i};

        if(len(tester)==m+1) {
            prog.pb(p);
            continue;
        }
        if(len(prog)==n+1) {
            tester.pb(t);
            continue;
        }

        if(p.first > t.first){
            prog.pb(p);
        }else{
            tester.pb(t);
        }
    }

    ll sum=0;
    for(auto it:prog) sum+=it.first;
    for(auto it:tester) sum+=it.first;

    vi ans(n+m+1,sum);
    if(len(prog)==(n+1)){
        //if programmer is absent
        for(auto it:prog){
            ans[it.second]-=it.first;
        }
        // if tester is absent
        for(auto it:tester){
            ans[it.second]-=it.first;

            int index=prog.back().second;
            ans[it.second]-=a[index].first;
            ans[it.second]+=a[index].second;
        }

    }else{
        //if programmer is absent
        for(auto it:tester){
            ans[it.second]-=it.first;
        }
        // if tester is absent
        for(auto it:prog){
            ans[it.second]-=it.first;

            int index=tester.back().second;
            ans[it.second]-=a[index].second;
            ans[it.second]+=a[index].first;
        }
    }

    for(auto it:ans) cout<<it<<" ";

    cout<<nl;
}

signed main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(0);
    cin.tie(0);

    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
}