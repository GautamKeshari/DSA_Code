// https://www.codechef.com/problems/TFALL?tab=statement

// https://www.youtube.com/watch?v=9e-CKTSlqPc

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
    int n; cin>>n;
    vi a(n),p(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>p[i];
    }
    
    string ans="NO";
    // leftmost ball go right and rightmost ball goes left
    int left=0,right=n-1;
    for(int i=1;i<n;i++){
        int diff=a[i]-a[i-1];
        if(diff<=p[i-1]) left=i;
        else break;
    }
    for(int i=n-2;i>=0;i--){
        int diff=a[i+1]-a[i];
        if(diff<=p[i+1]) right=i;
        else break;
    }
    if((right-left)<=1){
        ans="YES";
        cout<<ans<<nl;
        return;
    } 

    // Now from middle to leftmost and rightmost
    left=0,right=n-1;
    for(int i=1;i<n;i++){
        int diff=a[i]-a[i-1];
        if(diff<=p[i]) left=i;
        else break;
    }
    for(int i=n-2;i>=0;i--){
        int diff=a[i+1]-a[i];
        if(diff<=p[i]) right=i;
        else break;
    }
    if((right-left)<=1) {
        ans="YES";
        cout<<ans<<nl;
        return;
    }

    // now only left ball is going right direction
    int cnt=0;
    for(int i=1;i<n;i++){
        int diff=a[i]-a[i-1];
        if(diff>p[i-1]) cnt++;
    }
    if(cnt<=1){
        ans="YES";
        cout<<ans<<nl;
        return;
    }


    cnt=0;
    for(int i=n-1;i>0;i--){
        int diff=a[i]-a[i-1];
        if(diff>p[i]) cnt++;
    }
    if(cnt<=1){
        ans="YES";
        cout<<ans<<nl;
        return;
    }
    
    cout<<ans<<nl;
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