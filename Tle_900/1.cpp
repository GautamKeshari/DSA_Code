#include<bits/stdc++.h>
using namespace std;

int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int t;
    cin>>t;

    while(t--){
        int a,b,x1,y1,x2,y2;
        cin>>a>>b>>x1>>y1>>x2>>y2;
        vector<pair<int,int>> dirs={{a,-b},{a,b},{-a,b},{-a,-b},
                                    {b,a},{b,-a},{-b,a},{-b,-a}};

        set<pair<int,int>> st1,st2;
        for(auto it:dirs){
            int x=x1+it.first;
            int y=y1+it.second;
            st1.insert({x,y});

            int m=x2+it.first;
            int n=y2+it.second;
            st2.insert({m,n});
        }
        
        int cnt=0;
        for(auto it1:st1){
            if(st2.find(it1)!=st2.end()) cnt++;
        }
        cout<<cnt<<"\n";

    }
    return 0;
}


