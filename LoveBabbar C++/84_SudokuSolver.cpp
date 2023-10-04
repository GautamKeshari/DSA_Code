// https://practice.geeksforgeeks.org/problems/solve-the-sudoku-1587115621/1

// //{ Driver Code Starts
// #include <bits/stdc++.h>
// using namespace std;
// // UNASSIGNED is used for empty cells in sudoku grid 
// #define UNASSIGNED 0  

// // N is used for the size of Sudoku grid.  
// // Size will be NxN  
// #define N 9  


// // } Driver Code Ends
// class Solution 
// {
// private:
//     bool isSafe(int val,int grid[N][N],int row,int col){
//         for(int i=0;i<9;i++){
//             // row-check
//             if(grid[row][i]==val){
//                 return false;
//             }
            
//             if(grid[i][col]==val){
//                 return false;
//             }
            
//             if(grid[3*(row/3)+i/3][3*(col/3)+i%3] == val){
//                 return false;
//             }
//         }
//         return true;
//     }
    
//     bool solve(int grid[N][N]){
//         int n=9;
        
//         for(int row=0;row<9;row++){
//             for(int col=0;col<9;col++)
//             {
//                 if(grid[row][col]==0)
//                 {
//                     for(int val=1;val<=9;val++){
//                         if(isSafe(val,grid,row,col)){
//                             grid[row][col]=val;
//                             // now we again check that is there any row or col having grid value to be 0
//                             if(solve(grid)) return true;
//                             // backtrack
//                             grid[row][col]=0;
//                         }
//                     }
//                     // if we check all the values and do not get the solution ,then return false;
//                     return false;
//                 }
//             }
//         }
//         // if from above everything coming true ,then just return true;
//         return true;
//     }
// public:
//     //Function to find a solved Sudoku. 
//     bool SolveSudoku(int grid[N][N])  
//     { 
//         return solve(grid);
//     }
    
//     //Function to print grids of the Sudoku.
//     void printGrid (int grid[N][N]) 
//     {
//         for(int i=0;i<9;i++){
//             for(int j=0;j<9;j++){
//                 cout<<grid[i][j]<<" ";
//             }
//             // cout<<endl;
//         }
//     }
// };

// //{ Driver Code Starts.

// int main() {
// 	int t;
// 	cin>>t;
// 	while(t--)
// 	{
// 		int grid[N][N];
		
// 		for(int i=0;i<9;i++)
// 		    for(int j=0;j<9;j++)
// 		        cin>>grid[i][j];
		        
// 		Solution ob;
		
// 		if (ob.SolveSudoku(grid) == true)  
//             ob.printGrid(grid);  
//         else
//             cout << "No solution exists";  
        
//         cout<<endl;
// 	}
	
// 	return 0;
// }
// // } Driver Code Ends