// https://www.codechef.com/problems/SUMMODE?tab=statement

// https://www.youtube.com/watch?v=SUvSziJDbi8

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
#define int long long

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
    int n;
    cin>>n;
    string s;
    cin>>s;

    int sum=0; ll cnt=0;
    map<int,int> mp;
    mp[0]=1;
    for(int i=0;i<n;i++){
        sum+= (s[i]=='0')? -1:1;
        if(mp.find(sum)!=mp.end()){
            cnt+=mp[sum];
        }
        mp[sum]++;
    }

    cnt+=((n*(n+1)))/2;
    cout<<cnt<<endl;
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