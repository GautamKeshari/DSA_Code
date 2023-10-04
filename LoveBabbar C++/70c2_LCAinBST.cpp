// //Function to find the lowest common ancestor in a BST. 
// Node* LCA(Node *root, int n1, int n2)
// {
//     if(root==NULL){
//         return NULL;
//     }
//     if(root->data==n1 || root->data==n2){
//         return root;
//     }
    
//     int val=root->data;
//     //if both n1 and n2 greater than root->data
//     if(val > n1 && val > n2){
//         return LCA(root->left,n1,n2);
//     }else if(val < n1 && val < n2){
//         return LCA(root->right,n1,n2);
//     }else{
//         return root;
//     }
    
// }