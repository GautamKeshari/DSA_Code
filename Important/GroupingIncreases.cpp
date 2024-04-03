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
        int n;
        cin>>n;

        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }

        int first=n+1,second=n+1;

        int total=0;
        for(int i=0;i<n;i++){

            if(arr[i]>max(first,second)){          // not use arr[i]>= max(1st,2nd)
                if(first<second) first=arr[i];
                else second=arr[i];
                total++;
            }else if(arr[i]<=min(first,second)){
                if(first<second) first=arr[i];
                else second=arr[i];
            }else if(arr[i]<=first){
                    first=arr[i];
            }else if(arr[i]<=second){
                second=arr[i];
            }
        }
        cout<<total<<endl;
    }
}



// 5
// 5
// 1 2 3 4 5
// 8
// 8 2 3 1 1 7 4 3
// 5
// 3 3 3 3 3
// 1
// 1
// 2
// 2 1

// OUTPUT
// 3
// 1
// 0
// 0
// 0

