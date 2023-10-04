// https://www.codingninjas.com/studio/problems/frog-jump_3621012

// #include <bits/stdc++.h> 
// int funct(int index,vector<int> &heights){
//     if(index==0){
//         return 0;
//     }
//     int left=funct(index-1,heights)+abs(heights[index]-heights[index-1]);
//     int right=INT_MAX;
//     if(index>1){
//         right=funct(index-2,heights)+abs(heights[index]-heights[index-2]);
//     }

//     return min(left,right);
// }

// int frogJump(int n, vector<int> &heights)
// {
//     return funct(n-1,heights); // we use n-1 because we have to reach (n-1)th index in 0 base indexing. hieghts array is 0 based indexing  
// }