// https://codeforces.com/contest/1920/problem/B
// Since for maximizing the sum ,alice will remove largest element from the array(not the smallest element),because if it remove smallest element the bob make largest element -ve , so sum can't remain maximize.  

#include<bits/stdc++.h>
using namespace std;
# define int long long 
int main(){

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int t;
    cin>>t;

    while(t--){
        int n,k,x, sum, ans=LLONG_MIN;
        cin>>n>>k>>x;
        vector<int> arr(n);
        for(auto &i:arr) cin>>arr[i];

        sort(arr.begin(),arr.end(),greater<int>());

        sum=accumulate(arr.begin(),arr.end(),0ll);   
        //  By using 0ll, you ensure that the accumulation starts with a long long zero, which can be important if the elements being accumulated are of a different type (e.g., integers or long integers). It helps in preventing potential overflow issues when dealing with large numbers during the accumulation process.

        int Ksum=0;
        for(int i=0;i<=k;i++){
            Ksum+=arr[i];
        }

        vector<int> remK;
        remK.push_back(-Ksum);
        for(int i=0;i<=k;i++){
            Ksum=Ksum-arr[i];
            Ksum+=arr[i+x];
        }

    }
}