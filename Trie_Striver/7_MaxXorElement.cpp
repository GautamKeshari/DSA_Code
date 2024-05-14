// https://leetcode.com/problems/maximum-xor-with-an-element-from-array/

struct Node{
    Node* links[2];  
    bool containsKey(int bit){
        return links[bit]!=NULL;
    }
    
    void put(int bit,Node* node){
        links[bit]=node;
    }
    
    Node* get(int bit){
        return links[bit];
    }
};

class Trie{
    Node* root;
    public:
    Trie(){
        root=new Node();
    }  
    
    void insert(int num){
        Node* node=root;
        for(int i=31;i>=0;i--){
            int bit=(num>>i)&1;
            if(!node->containsKey(bit)){
                node->put(bit,new Node());
            }
            node=node->get(bit);
        }
    }
    
    int getMax(int num){
        Node* node=root;
        int maxNum=0;
        for(int i=31;i>=0;i--){
            int bit=(num>>i)&1;
            if(node->containsKey(1-bit)){
                maxNum=maxNum | (1<<i);
                node=node->get(1-bit);
            }else{
                node=node->get(bit);
            }
        }
        return maxNum;
    }
};


class Solution {
public:
    vector<int> maximizeXor(vector<int>& nums, vector<vector<int>>& queries) {
        int n=nums.size();
        int m=queries.size();
        vector<int> ans(m,-1);
        sort(nums.begin(),nums.end());
        vector<pair<int,pair<int,int>>> oq;    //offline queries
        for(int i=0;i<m;i++){
            oq.push_back({queries[i][1],{queries[i][0], i}});
        }
        sort(oq.begin(),oq.end());
        
        Trie *trie=new Trie();
        
        int ind=0;
        for(int i=0;i<m;i++){
            int ai=oq[i].first;
            int xi=oq[i].second.first;
            int qIndex=oq[i].second.second;
            while(ind<n && nums[ind]<=ai){
                trie->insert(nums[ind]);
                ind++;
            }
            if(ind==0) ans[qIndex]=-1;
            else ans[qIndex]=trie->getMax(xi);
        }
        return ans;
    }
};