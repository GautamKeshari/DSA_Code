// https://practice.geeksforgeeks.org/problems/word-ladder-ii/1

// class Solution {
// public:
//     vector<vector<string>> findSequences(string beginWord, string endWord, vector<string>& wordList) {
//         unordered_set<string> st(wordList.begin(),wordList.end());
//         queue<vector<string> >q;
//         q.push({beginWord});
//         // at that level which string is used
//         vector<string> usedOnLevel;
//         usedOnLevel.push_back(beginWord);
//         int level=0;
//         vector<vector<string> >ans;
        
//         while(!q.empty()){
//             vector<string> top=q.front();
//             q.pop();
//             // erase all the word which is used in the previous levels
//             // to transform
//             if(top.size() > level){
//                 level++;
//                 for(auto it:usedOnLevel){
//                     st.erase(it);
//                 }
//                 usedOnLevel.clear();
//             }
//             string word=top.back();
//             // if at any level we get the ans
//             if(word==endWord){
//                 if(ans.size()==0){
//                     ans.push_back(top);
//                 }else if(ans[0].size()==top.size()){
//                     ans.push_back(top);
//                 }
//             }
            
//             for(int i=0;i<word.size();i++){
//                 char original =word[i];
//                 for(char ch='a';ch<='z';ch++){
//                     word[i]=ch;
//                     if(st.find(word)!=st.end()){
//                         top.push_back(word);
//                         q.push(top);
//                         usedOnLevel.push_back(word);
//                         top.pop_back();
//                     }
//                 }
//                 word[i]=original;
//             }
//         }
//         return ans;
        
//     }
// };