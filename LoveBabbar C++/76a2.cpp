//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    // S.C.= O(K)
    int kthLargest(vector<int> &Arr,int N,int k){
        // vector<int> sumArr;
        priority_queue<int,vector<int>,greater<int>> pq;
        for(int i=0;i<N;i++){
            int sum=0;
            for(int j=i;j<N;j++){
                sum+=Arr[j];
                if(pq.size()<k){
                    pq.push(sum);
                }else{
                    if(pq.top()<sum){
                        pq.pop();
                        pq.push(sum);
                    }
                }
            }
        }
        // now push 1st (k) element of sumArr in priority_queue.
        
        
        return pq.top();
    }
};

//{ Driver Code Starts.

int main(){
    
    int T;
    cin>>T;
    while(T--){
        int N,K;
        cin>>N;
        cin>>K;
        vector<int> Arr(N);
        for(int i=0;i<N;i++){
            cin>>Arr[i];
        }
        Solution ob;
        int ans=ob.kthLargest(Arr,N,K);
        cout<<ans<<endl;
    }
    return 0;
}
// } Driver Code Ends