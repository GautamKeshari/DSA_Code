// https://leetcode.com/problems/compare-version-numbers/submissions/

class Solution {
    vector<string> getTokens(string version){
        vector<string> ans;
        stringstream ss(version);
        string token=" ";
        while(getline(ss,token,'.')){
            ans.push_back(token);
        }
        return ans;
    }
public:
    int compareVersion(string version1, string version2) {
        vector<string> s1=getTokens(version1);
        vector<string> s2=getTokens(version2);
        int l1=s1.size();
        int l2=s2.size();
        int maxi=max(l1,l2);
        int i=0;
        while(i<l1 || i<l2){
            
            int x= i<l1? stoi(s1[i]):0;
            int y= i<l2? stoi(s2[i]):0;
            if(x<y) return -1;
            else if(x>y) return 1;
            else i++;
        }
        return 0;
    }
};