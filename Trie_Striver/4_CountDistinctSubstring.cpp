// https://www.naukri.com/code360/problems/count-distinct-substrings_985292?utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_tries_videos&leftPanelTabValue=PROBLEM

struct Node{
    Node* links[26];

    bool containsKey(char ch){
        return links[ch-'a']!=NULL;
    }

    void put(char ch,Node* node){
        links[ch-'a']=node;
    }

    Node* get(char ch){
        return links[ch-'a'];
    }
};

int countDistinctSubstrings(string &s)
{
    Node* root=new Node();
    int cnt=1;
    int len=s.length();
    for(int i=0;i<len;i++){
        Node* node=root;
        for(int j=i;j<len;j++){
            if(!node->containsKey(s[j])){
                node->put(s[j],new Node());
                cnt++;
            }
            node=node->get(s[j]);
        }
    }
    return cnt;
}