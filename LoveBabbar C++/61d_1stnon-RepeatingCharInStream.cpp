// https://practice.geeksforgeeks.org/problems/first-non-repeating-character-in-a-stream1216/1


// //{ Driver Code Starts
// #include<bits/stdc++.h>
// using namespace std;

// // } Driver Code Ends

// class Solution {
// 	public:
// 		string FirstNonRepeating(string A){
// 		    unordered_map<char,int>count;
// 		    queue<char> q;
// 		    string ans;
		    
// 		    for(int i=0;i<A.size();i++){
// 		        char ch=A[i];
		        
// 		        count[ch]++;
		        
// 		        if(count[ch] == 1){
// 		            q.push(ch);
// 		        }
		        
		        
// 		        while(!q.empty() && count[q.front()] > 1){
// 		            q.pop();
// 		        }
		        
// 		        if(q.empty()){
// 		            char curr='#';
// 		            ans.push_back(curr);
// 		        }else{
// 		          //  A[i]=q.front();
// 		          ans.push_back(q.front());
// 		        }
// 		    }
		    
// 		return ans;
		
// 		}
		

// };

// //{ Driver Code Starts.
// int main(){
// 	int tc;
// 	cin >> tc;
// 	while(tc--){
// 		string A;
// 		cin >> A;
// 		Solution obj;
// 		string ans = obj.FirstNonRepeating(A);
// 		cout << ans << "\n";
// 	}
// 	return 0;
// }
// // } Driver Code Ends