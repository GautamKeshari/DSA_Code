#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int t;
    cin>>t;

    while(t--){
        ll n,k,x;
        cin>>n>>k>>x;
        ll low=(k*(k+1))/2;
        ll high=((n*(n+1)/2))-((n-k)*(n-k+1)/2);

        if(x<low || x>high) cout<<"No"<<endl;
        else cout<<"Yes"<<endl;
    }
}


