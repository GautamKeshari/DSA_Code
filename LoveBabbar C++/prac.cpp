#include <bits/stdc++.h>
using namespace std;

int getMinOperation(string s){
	while(s.length()>0){
		int start=0;
		for(int i=1;i<s.length();i++){
			if(s[i]==s[i+1]){
				
			}
		}
	}
}

int main() {

	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

	string s;
	cin>>s;

	int ans=getMinOperation(s);
	
	cout<<ans<<endl;
	return 0;
}
