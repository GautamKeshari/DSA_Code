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
    ll n,q,sum=0;
    cin>>n>>q;
    vi arr(n+1);
    vll ltr(n+2,0),rtl(n+2,0);
    for(int i=1;i<=n;i++){
        cin>>arr[i];
        sum+=arr[i];
        ltr[i]=sum;
    }

    ll total=0;
    for(int i=n;i>=1;i--){
        total+=arr[i];
        rtl[i]=total;
    } 
    ll x=sum;
    for(int i=0;i<q;i++){
        sum=x;
        int l,r,k;
        cin>>l>>r>>k;
        //sum from l to r;
        sum=sum-ltr[l-1]-rtl[r+1];

        int totalIndex=r-l+1;
        totalIndex*=k;

        int incSum=x-sum+totalIndex;

        // cout<<"diff "<<diff<<nl;
        // cout<<"sum "<<sum<<nl;
        if(incSum & 1) cout<<"Yes"<<nl;
        else cout<<"No"<<nl;
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