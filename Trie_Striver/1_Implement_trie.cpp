// https://leetcode.com/problems/implement-trie-prefix-tree/

struct Node{
    Node* links[26];
    bool flag=false;
    bool containsKey(char ch){
        return (links[ch-'a']!=NULL);
    }
    void put(char ch, Node* node){
        links[ch-'a']=node;
    }
    Node* get(char ch){
        return links[ch-'a'];
    } 
    void setEnd(){
        flag=true;
    }
    bool isEnd(){
        return flag;
    }
};

class Trie {
private:
    Node* root;
public:
    Trie() {
        root=new Node();
    }
    
    //  tc= O(n)
    void insert(string word) {
        Node* node = root;
        for(int i=0;i<word.length();i++){
            if(!node->containsKey(word[i])){      //so we have to put that letter 
                node->put(word[i],new Node());          //so we insert that char with new Node
            }
            // now we have to move to the reference trie
            node= node-> get(word[i]);
        }
        // now after reach last node ,we have to mark flag variable as true
        node->setEnd();
    }
    
    // tc=O(n)
    bool search(string word) {
        Node* node=root;
        for(int i=0;i<word.length();i++){
            if(!node->containsKey(word[i])){
                return false;
            }
            node=node->get(word[i]);
        }
        if(node->isEnd()==true) return true;
        return false;
    }
    
    // tc=O(n)
    bool startsWith(string prefix) {
        Node* node=root;
        for(int i=0;i<prefix.length();i++){
            if(!node->containsKey(prefix[i])){
                return false;
            }
            node = node->get(prefix[i]);
        }
        return true;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */