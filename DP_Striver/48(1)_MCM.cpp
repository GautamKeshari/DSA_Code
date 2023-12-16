// https://www.codingninjas.com/studio/problems/matrix-chain-multiplication_624880?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=PROBLEM

// int solve(int i,int j,int* arr){
//     if(i==j) return 0;

//     int mini=1e9;
    
//     for(int k=i;k<j;k++){
//         int steps=arr[i-1]*arr[k]*arr[j] + solve(i,k,arr) + 
//             solve(k+1,j,arr);
//         if(steps<mini) mini=steps;
//         // mini=min(mini,steps);
//     }
//     return mini;
// }

// int matrixChainMultiplication(int* arr, int n) {
//     return solve(1,n,arr);
// }