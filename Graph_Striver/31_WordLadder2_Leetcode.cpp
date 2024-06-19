// https://leetcode.com/problems/word-ladder-ii/

class Solution {
    unordered_map<string,int> mp;
    vector<vector<string>> ans;

    void dfs(string word, vector<string> &seq,string beginWord){
        if(word==beginWord){
            reverse(seq.begin(),seq.end());
            ans.push_back(seq);
            reverse(seq.begin(),seq.end());                 //important
            return;
        }
        int lvl=mp[word];
        for(int i=0;i<word.size();i++){
            char original=word[i];
            for(char ch='a';ch<='z';ch++){
                word[i]=ch;
                if(mp.find(word)!=mp.end() && mp[word]==(lvl-1)){
                    seq.push_back(word);
                    dfs(word,seq,beginWord);
                    seq.pop_back();
                }
            }
            word[i]=original;
        }
    }
public:
    vector<vector<string>> findLadders(string beginWord, string endWord, vector<string>& wordList) {
        queue<pair<string,int>> q;
        q.push({beginWord,1});
        unordered_set<string> st(wordList.begin(),wordList.end());
        st.erase(beginWord);
        mp[beginWord]=1;
        while(!q.empty()){
            string word=q.front().first;
            int lvl=q.front().second;
            q.pop();
            if(word==endWord) break;
            for(int i=0;i<word.size();i++){
                char original=word[i];
                for(char ch='a';ch<='z';ch++){
                    word[i]=ch;
                    if(st.find(word)!=st.end()){
                        q.push({word,lvl+1});
                        mp[word]=lvl+1;
                        st.erase(word);
                    }
                }
                word[i]=original;
            }
        }
        if(mp.find(endWord)!=mp.end()){
            vector<string> seq;
            seq.push_back(endWord);
            dfs(endWord,seq,beginWord);
        }


        return ans;
    }
};