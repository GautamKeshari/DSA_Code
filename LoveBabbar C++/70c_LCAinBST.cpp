// // https://practice.geeksforgeeks.org/problems/lowest-common-ancestor-in-a-bst/1

// Given a Binary Search Tree (with all values unique) and two node values. Find the Lowest Common Ancestors of the two nodes in the BST.

// //Function to find the lowest common ancestor in a BST. 
// Node* LCA(Node *root, int n1, int n2)
// {
//     if(root==NULL){
//         return NULL;
//     }
//     // if(root->data==n1 || root->data==n2){
//     //     return root;
//     // }
    
//     while(root!=NULL){
//         int val=root->data;
//         if(val > n1 && val > n2){
//             root = root->left;
//         }else if(val < n1 && val < n2){
//             root = root->right;
//         }else{
//             return root;
//         }
//     }
// }