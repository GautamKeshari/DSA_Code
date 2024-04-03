// https://www.geeksforgeeks.org/problems/reach-a-given-score-1587115621/1

//{ Driver Code Starts
// Driver Code
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

// } Driver Code Ends

#define ll long long int
class Solution
{
    
    public:
    // Complete this function
    long long int count(long long int n)
    {
    	vector<ll> dp(n+1,0);
    	dp[0]=1;
    	
    	for(int i=3;i<=n;i++){
    	    dp[i]+=dp[i-3];
    	}
    	for(int i=5;i<=n;i++){
    	    dp[i]+=dp[i-5];
    	}
    	for(int i=10;i<=n;i++){
    	    dp[i]+=dp[i-10];
    	}
    	return dp[n];
    }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		Solution obj;
		cout<<obj.count(n)<<endl;
	}
	return 0;
}
// } Driver Code Ends




// Explaination => this is a combination problem ,which is solved using dp.
// Here what we do is 1st we make use of (3,5,10) coin and make possible combination 
// Then, we make use of only (5,10) coin and make possible combination 
// Then, we make use only (10) coin and make possible combination

// why we make combination?
//  ex => 8 ,if we consider permutation then 2 possibilities like (3,5) and (5,3).
// but in answer considering it as 1.,So we use permutation.