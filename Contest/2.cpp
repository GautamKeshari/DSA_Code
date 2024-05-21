#include<bits/stdc++.h>
using namespace std;

#define nl "\n"
#define sp " " 

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
    string s;cin>>s;
    int ones=0,zeros=0;
    int len=s.length();
    for(int i=0;i<len;i++){
        if(s[i]=='0') zeros++;
        else ones++;
    }
    string t;
    int ans=abs(ones-zeros);
    if(zeros==ones) cout<<0<<nl;
    else if(zeros>ones){
        int cntzeros=0; int i=0;
        while(i<len && cntzeros!=ones){
            t.push_back(s[i]);
            i++;
            if(s[i]=='0') cntzeros++;
        }
        while(i<len){
            if(s[i]=='1'){
                t.push_back(s[i]);
            }
            i++;
        }

        for(int i=0;i<t.length();i++){
            if(s[i]!=t[i]) ans++;
        }
        cout<<ans<<nl;
    }else{
        int cntones=0; int i=0;
        while(i<len && cntones!=zeros){
            t.push_back(s[i]);
            i++;
            if(s[i]=='1') cntones++;
        }
        while(i<len){
            if(s[i]=='0'){
                t.push_back(s[i]);
            }
            i++;
        }
        for(int i=0;i<t.length();i++){
            if(s[i]!=t[i]) ans++;
        }
        cout<<ans<<nl;
    }
}

int main(){
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