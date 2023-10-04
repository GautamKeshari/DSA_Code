// https://practice.geeksforgeeks.org/problems/rotate-bits4524/1

//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
  public:
        vector <int> rotate (int n, int d)
        {
            d=d%16;
            int p=n,q=n,r=n,s=n;
            int a=r<<d | s>>(16-d);
            int b=p>>d | q<<(16-d);
            
            a=a& 0xFFFF;
            b=b& 0XFFFF;
            vector<int> ans;
            ans.push_back(a);
            ans.push_back(b);
            return ans;
        }
};

//{ Driver Code Starts.
// int main()
// {
//     int t; cin >> t;
//     while (t--)
//     {
        
//         int n, d; cin >> n >> d;
//         Solution ob;
//         vector <int> res = ob.rotate (n, d);
//         cout << res[0] << endl << res[1] << endl;
//     }
// }
// Contributed By: Pranay Bansal

// } Driver Code Ends