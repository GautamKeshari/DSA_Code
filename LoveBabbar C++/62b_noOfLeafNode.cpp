// https://www.codingninjas.com/codestudio/problems/count-leaf-nodes_893055?source=youtube&campaign=LoveBabbar_Codestudio&utm_source=youtube&utm_medium=affiliate&utm_campaign=LoveBabbar_Codestudio&leftPanelTab=1


// /**********************************************************

//     Following is the Binary Tree Node class structure:

//     template <typename T>
//     class BinaryTreeNode {
//       public :
//         T data;
//         BinaryTreeNode<T> *left;
//         BinaryTreeNode<T> *right;

//         BinaryTreeNode(T data) {
//                 this -> data = data;
//                 left = NULL;
//                 right = NULL;
//         }
//     };
    
// ***********************************************************/

// void inorder(BinaryTreeNode<int> *root,int &count){
//     if(root==NULL){
//         return;
//     }

//     inorder(root->left,count);

//     if(root->left==NULL && root->right==NULL){
//         count++;
//     }

//     inorder(root->right,count);

//     // return count;
// }

// int noOfLeafNodes(BinaryTreeNode<int> *root){
//     // Write your code here.
//     int count=0;
//     inorder(root,count);

//     return count;
    
// }

