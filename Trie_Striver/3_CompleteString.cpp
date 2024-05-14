// https://www.naukri.com/code360/problems/complete-string_2687860?utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_tries_videos

#include <bits/stdc++.h> 

struct Node{
    Node* links[26];
    bool flag=false;

    bool containsKey(char ch){
        return (links[ch-'a']!=NULL);
    }

    void put(char ch,Node* node){
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

class Trie{
    Node* root;
    public:
        Trie(){
            root=new Node();
        }
        void insert(string s){
            Node* node=root;
            for(int i=0;i<s.length();i++){
                char ch=s[i];
                if(!node->containsKey(ch)){
                    node->put(ch,new Node());
                }
                node=node->get(ch);
            }
            node->setEnd();
        }

        bool checkIfPrefixExist(string s){
            Node* node=root;
            for(int i=0;i<s.size();i++){
                if(node->containsKey(s[i])){
                    node=node->get(s[i]);
                    if(node->isEnd()==false) return false;
                }else{
                    return false;   
                }
            }
            return true;
        }
};

string completeString(int n, vector<string> &a){
    Trie trie;
    for(auto &it:a){
        trie.insert(it);
    }
    //now we have to find longest string which contains all its prefix
    string longest="";
    for(auto &it:a){
        if(trie.checkIfPrefixExist(it)){
            if(it.length()>longest.length()){
                longest=it;
            }else if(it.length()==longest.length() && it<longest){
                longest=it;
            }
        }
    }

    // return (longest=="")? "None":longest;
    if(longest=="") return "None";
    return longest;
}