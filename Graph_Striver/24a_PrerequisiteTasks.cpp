// https://practice.geeksforgeeks.org/problems/prerequisite-tasks/1

// //{ Driver Code Starts
// #include<bits/stdc++.h>
// using namespace std;

// // } Driver Code Ends
// class Solution {
// public:
// 	bool isPossible(int V, vector<pair<int, int> >& prerequisites) {
	    
// 	    vector<int>adj[V];
// 	    for(auto it:prerequisites){
// 	        adj[it.first].push_back(it.second);
// 	    }
	    
// 	    vector<int> indegree(V,0);
// 	    queue<int> q;
	    
// 	    for(int i=0;i<V;i++){
// 	        for(auto it:adj[i]){
// 	            indegree[it]++;
// 	        }
// 	    }
// 	    for(int i=0;i<V;i++){
// 	        if(indegree[i]==0){
// 	            q.push(i);
// 	        }
// 	    }
// 	   // ans 
// 	    int cnt=0;
// 	    while(!q.empty()){
// 	        int node=q.front();
// 	       // topo.push_back(node);
// 	        q.pop();
// 	        cnt++;
// 	        for(auto it:adj[node]){
// 	            indegree[it]--;
// 	            if(indegree[it]==0){
// 	                q.push(it);
// 	            }
// 	        }
	        
// 	    }
	    
// 	    if(cnt==V) 
// 	        return true;
	        
// 	   return false;
	    
// 	}
// };

// //{ Driver Code Starts.
// int main(){
// 	int tc;
// 	cin >> tc;
// 	while(tc--){
//     	int N, P;
//         vector<pair<int, int> > prerequisites;
//         cin >> N;
//         cin >> P;
//         for (int i = 0; i < P; ++i) {
//             int x, y;
//             cin >> x >> y;
//             prerequisites.push_back(make_pair(x, y));
//         }
//         // string s;
//         // cin>>s;
//         Solution ob;
//         if (ob.isPossible(N, prerequisites))
//             cout << "Yes";
//         else
//             cout << "No";
//         cout << endl;
// 	}
// 	return 0;
// }
// // } Driver Code Ends