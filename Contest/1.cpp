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

vector<ll> sieve(ll n) {
    vector<int> is_prime(n+1,1);
    is_prime[0]=0;
    is_prime[1]=0;
    for(int i=2;i*i<=n;i++){
        if(is_prime[i]==1){
            for(int j=i*i;j<=n;j+=i){
                is_prime[j]=0;
            }
        }
    }
    vector<ll> primes;
    for(int i=2;i<=n;i++){
        if(is_prime[i]) primes.push_back(i);
    }   
    return primes;
}

bool binarySearch(vector<ll> arr, ll key) {
    ll size=arr.size();
    ll start = 0;
    ll end = size-1;
    ll mid = start + (end-start)/2;
    while(start <= end) {
        if(arr[mid] == key) {
            return 1;
        }
        if(key > arr[mid]) start = mid + 1;
        else end = mid - 1;

        mid = start + (end-start)/2;
    }
    return 0;
}

/*-----------------------------------------------*/

void solve(){
    ll n,c;
    cin>>n>>c;
    vll arr(n);
    for(auto &it:arr) cin>>it;
    swap(arr[0],arr[n-1]);
    sort(arr.begin(),arr.end()-1);
    // cout<<"val "<<arr[n-1]<<nl;
    vll ans;
    int cnt=n;
    for(int i=0;i<n-1;i++){
        ll sum=0;
        for(int j=i+1;j<n;j++){
            sum+=(arr[i]*arr[j]);
        }
        cout<<"sum "<<sum<<" c "<<c<<nl;
        if(sum<c){
            c=c-sum;
            cnt--;
        }else{
            break;
        }
    }
    cout<<cnt<<nl;
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