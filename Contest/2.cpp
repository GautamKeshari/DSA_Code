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

/*-----------------------------------------------*/

void solve(){
    ll n,c;
    cin>>n>>c;
    vll arr(n);
    ll sum=0;
    for(auto &it:arr){
        cin>>it;
        sum+=it;
    }
    // swap(arr[0],arr[n-1]);
    sort(arr.begin()+1,arr.end());
    ll total=0;
    if(arr[0]*(sum-arr[0])<=c) cout<<1<<nl;
    else{
        bool f=0;
        for(int i=1;i<n;i++){
            total+=arr[i];
            ll rem=sum-total;
            if((total*rem)>c){
                cout<<i-1<<nl;
                f=1;
                break;
            }
        }
        if(f==0) cout<<n-1<<nl;
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