// Floor =>  (largest number in array)<=x
// Ceil =>   (smallest number in array)>=x      => It is just like lower bound

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

void ub(vi &arr,int s,int e,int key,int &ans){
    while(s<=e){
        int mid=s+(e-s)/2;
        if(arr[mid]<=key){
            ans=max(ans,mid);
            s=mid+1;
        }else{
            e=mid-1;
        }
    }
} 

void solve(){
    int n;
    cin>>n;
    vi arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int x;cin>>x;
    int ans=-1;
    ub(arr,0,n-1,x,ans);
    if(ans!=-1) cout<<arr[ans]<<nl;
    else cout<<"No Floor value exist"<<nl;
}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(0);
    cin.tie(0);

    
    solve();
}