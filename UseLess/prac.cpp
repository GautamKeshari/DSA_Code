class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n=nums.size();
        if(n==0) return 0;
        if(n==1){
          if(nums[0]==val){
            nums.clear();
            return 0;
          }
          return 1;
        }
        int count=0;
        int slow=0,fast=1;
        while(fast<nums.size()){
          if(nums[slow]==val){
            if(nums[fast]==val){
              fast++;
            }else{
              swap(nums[slow],nums[fast]);
              slow++;fast++;
            }
          }else{
            slow++;fast++;
          }
        }

        int i=n-1;
        while(i>=0 && nums[i]==val){
          count++;
          i--;
        }

        // cout<<"Slow "<<slow<<endl;
        // cout<<"Fast "<<fast<<endl;

        for(int i=fast-1;i>=slow;i--){
          nums.erase(nums.end()-1);
        }

        // for(int i=0;i<nums.size();i++){
        //   cout<<nums[i]<<"  ";
        // }
        // cout<<endl;
        cout<<"Count "<<count<<endl;
        return n-count;
    }
};