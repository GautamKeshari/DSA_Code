// https://www.codingninjas.com/codestudio/problems/subsequences-of-string_985087?leftPanelTab=0&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_16


// Subsequence:- A Subsequence of a string is the one which is generated by deleting 0 or more letters from the string and keeping the rest of the letters in the same order.

// #include <bits/stdc++.h> 

// void solve(string str,vector<string>& ans,string output,int index,int size){
//         // base case
//         if(index >= size){
//             if(output.size()==0) return;
            
//             ans.push_back(output);
//             return;
//         }
//         // exclude
//         solve(str,ans,output,index+1,size);

//         // include
//         output.push_back(str[index]);
//         solve(str,ans,output,index+1,size);
//     }
// vector<string> subsequences(string str){
// 	    string output;
//         int size=str.size();
//         int index=0;
//         vector<string > ans;
//         solve(str,ans,output,index,size);
//         return ans;
	
// }