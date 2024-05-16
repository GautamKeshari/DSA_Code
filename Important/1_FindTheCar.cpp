// https://codeforces.com/contest/1971/problem/E

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

int binary_search(int key,int s,int e,vi &arr){
    while(s<=e){
        int mid=(s+e)>>1;
        if(arr[mid]==key) return mid;
        else if(arr[mid]>key) e=mid-1;
        else s=mid+1;
    }
    return e;
}

void solve(){
    int n,k,q;
    cin>>n>>k>>q;
    vi dist(k+1,0),time(k+1,0);
    for(int i=1;i<=k;i++) cin>>dist[i];
    for(int i=1;i<=k;i++) cin>>time[i];

    for(int i=0;i<q;i++){
        ll x;cin>>x;
        int end=binary_search(x,0,k,dist);
        if(dist[end]==x){
            cout<<time[end]<<" ";
            continue;
        }else{
            ll ans=time[end]+(x-dist[end])*(time[end+1]-time[end])/(dist[end+1]-dist[end]);

            cout<<ans<<" ";
        }
    }
    
    cout<<nl;
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