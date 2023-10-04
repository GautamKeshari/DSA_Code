// https://practice.geeksforgeeks.org/problems/is-binary-tree-heap/1

// // User Function template for C++

// // Structure of node
// /*struct Node {
//     int data;
//     Node *left;
//     Node *right;

//     Node(int val) {
//         data = val;
//         left = right = NULL;
//     }
// };*/

// class Solution {
//   public:
//     void count(Node* root,int &totalNodes){
//         if(root==NULL){
//             return;
//         }
        
//         totalNodes++;
//         count(root->left,totalNodes);
//         count(root->right,totalNodes);
//     }
  
//     bool isCBT(Node* root,int totalNodes,int i){
//         if(root==NULL){
//             return true;
//         }
        
//         if(i >= totalNodes){
//             return false;
//         }else{
//             bool left=isCBT(root->left,totalNodes,2*i+1);
//             bool right=isCBT(root->right,totalNodes,2*i+2);
            
//             return left && right;
//         }
//     }
//     // check max heap or not
//     bool maxheap(Node* root){
//         // leaf node
//         if(root->left==NULL && root->right==NULL){
//             return true;
//             // if right child ==null
//         }
//         else if(root->right==NULL)
//         {
//             return (root->left->data < root->data);
//         }
//         else if(root->left && root->right)
//         {
//             return maxheap(root->left) && maxheap(root->right)&& (root->left->data < root->data && root->right->data <root->data );
//         }
//     }
    
//     bool isHeap(struct Node* root) {
//         if(root==NULL){
//             return true;
//         }
        
//         int totalNodes=0;
//         Node* temp=root;
        
//         count(temp,totalNodes);
        
//         return (isCBT(root,totalNodes,0) && (maxheap(root)));
//     }
// };