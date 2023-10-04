// https://www.codingninjas.com/codestudio/problems/flatten-bst-to-a-sorted-list_1169459?leftPanelTab=0

// #include <bits/stdc++.h> 
// /************************************************************

//     Following is the Binary Tree node structure
    
//     template <typename T>
//     class TreeNode {
//         public :
//         T data;
//         TreeNode<T> *left;
//         TreeNode<T> *right;

//         TreeNode(T data) {
//             this -> data = data;
//             left = NULL;
//             right = NULL;
//         }

//         ~TreeNode() {
//             if(left)
//                 delete left;
//             if(right)
//                 delete right;
//         }
//     };

// ************************************************************/
// void inorder(TreeNode<int>* root,vector<TreeNode<int>*> &inorderVal){
        
//         if(root==NULL){
//             return;
//         }
//         inorder(root->left,inorderVal);
//         inorderVal.push_back(root);
//         inorder(root->right,inorderVal);
        
//     }
// TreeNode<int>* flatten(TreeNode<int>* root)
// {
//     if(root==NULL){
//         return NULL;
//     }
//     vector<TreeNode<int>*> inorderVal;
//     inorder(root,inorderVal);

//     TreeNode<int>* temp = inorderVal[0];
//     TreeNode<int>* ans = temp;

//     int size=inorderVal.size();
//     for(int i=1;i<size;i++){
//         temp->left=NULL;
//         temp->right=inorderVal[i];

//         temp=temp->right;
//     }

//     temp->left=NULL;
//     temp->right=NULL;

//     return ans;
// }
