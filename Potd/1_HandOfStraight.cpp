// https://leetcode.com/problems/hand-of-straights/description/?envType=daily-question&envId=2024-06-06

// https://www.youtube.com/watch?v=lpVhzcdiHMs
class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int size) {
        int n=hand.size();
        if((n % size)!=0) return false; 

        map<int,int> mp;
        for(int i=0;i<n;i++){
            mp[hand[i]]++;
        }
        
        while(!mp.empty()){
            int curr=mp.begin()->first;

            for(int i=0;i<size;i++){
                if(mp[curr+i]==0) return false;
                mp[curr+i]--;
                if(mp[curr+i]==0) mp.erase(curr+i);
            }
        }
        return true;
    }
};