// https://practice.geeksforgeeks.org/problems/find-smallest-range-containing-elements-from-k-lists/1

// //{ Driver Code Starts
// #include<bits/stdc++.h>
// using namespace std;
// #define N 1000


// // } Driver Code Ends
// // you are required to complete this function 
// // function should print the required range

// class node{
//     public:
//     int data;
//     int row;
//     int col;
    
//     node(int data,int i,int j){
//         this->data=data;
//         this->row=i;
//         this->col=j;
//     }
// };

// class compare{
//     public:
//     bool operator()(node* a,node* b){
//         return a->data > b->data;
//     }
// };

// class Solution{
//     public:
//     pair<int,int> findSmallestRange(int KSortedArray[][N], int n, int k)
//     {
//         int mini=INT_MAX;
//         int maxi=INT_MIN;
//         priority_queue<node*,vector<node *>,compare >minHeap;
//         // step1 => create a min heap for starting element of each list and tracking mini and maxi value
//         for(int i=0;i<k;i++){
//             int element=KSortedArray[i][0];
//             mini=min(mini,element);
//             maxi=max(maxi,element);
//             minHeap.push(new node(element,i,0));
//         }
        
//         int start=mini,end=maxi;
//         // process minheap for finding smallest range
//         while(!minHeap.empty()){
//             // mini fetch
//             node* temp = minHeap.top();
//             minHeap.pop();
            
//             mini= temp->data;
            
//             // range or answer updation
//             if(maxi-mini < end-start){
//                 start=mini;
//                 end=maxi;
//             }
//             // next element exist or not
//             if(temp->col + 1< n){
//                 maxi=max(maxi,KSortedArray[temp->row][temp->col + 1]);
//                 minHeap.push(new node(KSortedArray[temp->row][temp->col + 1],temp->row,temp->col+1));
//             }else{
//                 break;
//             }
//         }
        
//         pair<int,int> ans;
//         ans.first=start;
//         ans.second=end;
//         // returning the range of final answer
//         return ans;
        
//     }
// };

// //{ Driver Code Starts.
// int main()
// {
//     int t;
//     cin>>t;
//     while(t--)
//     {
//         int n, k;
//         cin>>n>>k;
//         int arr[N][N];
//         pair<int,int> rangee;
//         for(int i=0; i<k; i++)
//             for(int j=0; j<n; j++)
//                 cin>>arr[i][j];
//         Solution obj;
// 	    rangee = obj.findSmallestRange(arr, n, k);
// 	    cout<<rangee.first<<" "<<rangee.second<<"\n";
//     }   
// 	return 0;
// }


// // } Driver Code Ends