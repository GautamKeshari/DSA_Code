// https://codeforces.com/contest/1921/problem/E

// OPTIMAL => means it is the best move in Alice turn ,Alice can make the best move in whatever way she move .So in case if Alice have any possibility of winning ,then she will move in the direction where she can move.And in case if Alice realize that if she goes in this way then she will lose ,then in that case she will never go that way. But if she realize that she will definitely win then she goes in that path.
// So, in chance of winning person try to win and if there is chance of only losing the game then person tries to minimize the lose as much as possible. 


#include<bits/stdc++.h>
// # define ll long long 
using namespace std;

int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int t;
    cin>>t;

    while(t--){
        int h,w,x1,y1,x2,y2;
        cin>>h>>w>>x1>>y1>>x2>>y2;

        string ans="Draw";
        if(x1>=x2) cout<<ans<<"\n";
        else{
            if(abs(x1-x2)%2==1){
                int cnt=0;
                while(x1<=x2){
                    if(cnt%2==0){
                        if(x1<h) x1++;
                        if(y1==y2){
                            ans="Alice";
                            break;
                        }else if(y1<y2){
                            if(y1<w) y1++;
                        }else{
                            if(y1>1) y1--;
                        }
                        cnt++;
                    }else if(cnt%2==1){
                        if(x2>0) x2--;
                        if(y1==y2){
                            ans="Alice";
                            break;
                        }else if(y1<y2){
                            if(y2<w) y2++;
                        }else{
                            if(y2>1) y2--;
                        }
                        cnt++;
                    }
                }
            }else{
                int cnt=0;
                while(x1<=x2){
                    if(cnt%2==0){
                        if(x1<h) x1++;
                        if(y1==y2){
                            ans="Bob";
                            break;
                        }else if(y1<y2){
                            if(y1>1) y1--;
                        }else{
                            if(y1<w) y1++;
                        }
                        cnt++;
                    }else if(cnt%2==1){
                        if(x2>1) x2--;
                        if(y1==y2){
                            ans="Bob";
                            break;
                        }else if(y1<y2){
                            if(y2>1) y2--;
                        }else{
                            if(y2<w) y2++;
                        }
                        cnt++;
                    }
                }
            }
            cout<<ans<<endl;
        }
    }
    return 0;
}


