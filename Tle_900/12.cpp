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
    ll n;
    cin>>n;
    vi arr(n+1);
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }
    int maxi=arr[n]-arr[1];

    //case 1: fix a1 and rotate (a2.......an)
    for(int i=2;i<=n;i++){
        maxi=max(maxi,arr[i]-arr[1]);
    }
    //case 2: fix an and rotate( a1............a(n-1))
    for(int i=1;i<=n-1;i++){
        maxi=max(maxi,arr[n]-arr[i]);
    }
    // case 3: rotate all from (a1......a(n-1))
    for(int i=1;i<=n-1;i++){
        maxi=max(maxi,arr[i]-arr[i+1]);
    }

    cout<<maxi<<nl;
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