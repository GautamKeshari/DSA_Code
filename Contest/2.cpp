#include<bits/stdc++.h>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int t;
    cin>>t;

    while(t--){
        string s;
        cin>>s;
        char ch=s[0];
        char st=s[1];
        int num=st-'0';
        cout<<"num"<<" "<<num<<endl;
        for(int i=1;i<=8;i++){
            if(i!=num){
                cout<<s[0]<<i<<endl;
            }
        }
        for(char c='a';c<='h';c++){
            if(c!=ch){
                cout<<c<<num<<endl;
            }
        }
    }
}


