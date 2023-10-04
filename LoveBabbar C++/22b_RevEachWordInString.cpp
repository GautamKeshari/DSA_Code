//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// T.C. => O(2*n)
// S.C. => O(n)

// } Driver Code Ends
class Solution
{
  public:
    string reverseWords (string s)
    {
        stack<int>st;
        int start=0,end=0;
        int i=0;
        while(i<s.length()){
            while(s[i]!='.' && i<s.length()){
                st.push(s[i]);
                end++;
                i++;
            }
            i=i+1;
            while(!st.empty() && start<end){
                s[start]=st.top();
                st.pop();
                start++;
            }
            start=i;
            end=i;
            
        }
        return s;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        cout << ob.reverseWords (s) << endl;
    }
    return 0;
}

// } Driver Code Ends   