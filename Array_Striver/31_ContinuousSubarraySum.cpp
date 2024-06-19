// https://leetcode.com/problems/continuous-subarray-sum/?envType=daily-question&envId=2024-06-08
// https://www.youtube.com/watch?v=wmn3c1mP0pY

class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        map<int,int> prevInd;
        prevInd[0]=-1;
        int n=nums.size();
        // vector<int> prevInd(k,-1);
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            int x=sum%k;
            if(prevInd.find(x)!=prevInd.end()){
                if((i-prevInd[x])>1) return 1;
            }else{
                prevInd[x]=i;
            }
        }
        return 0;
    }
};