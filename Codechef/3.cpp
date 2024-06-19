// https://www.codechef.com/problems/PREFSUFF

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;cin>>t;
    while(t--){
    	int n;cin>>n;
    	if(n==1){
    	    cout<<1<<"\n";
    	    continue;
    	}
    	for(int i=0;i<n-2;i++){
    	    cout<<3<<" ";
    	}
    	cout<<2<<" "<<1<<"\n";
    }
}
