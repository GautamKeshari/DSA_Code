#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int x=0,y=n/2;
    	if(n&1){
    	    x=n-1;
    	    cout<<n-1<<" ";
    	}else{
    	    x=n;
    	    cout<<n<<" ";
    	} 
    	if(k>1) cout<<y<<" ";
    	int count=2;
        
        for(int i=1;i<y && count<=k;i++,count++){
            cout<<i<<" ";
        }
        for(int i=y+1;i<x && count<=k;i++,count++){
            cout<<i<<" ";
        }
        cout<<"\n";
    }
}


3
3 2
3 3
4 2


2 3
1 2 3
2 4