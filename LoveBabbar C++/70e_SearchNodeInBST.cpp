// https://practice.geeksforgeeks.org/problems/search-a-node-in-bst/1

// // Function to search a node in BST.
// bool search(Node* root, int x) {
//     if(root==NULL){
//         return false;
//     }
    
//     if(root->data==x){
//         return true;
//     }
//     queue<Node* >q;
//     q.push(root);
    
//     while(!q.empty()){
//         Node *temp=q.front();
//         q.pop();
        
//         if(temp->data==x){
//             return true;
//         }
        
//         if(temp->data > x){
//             //means we traverse left side
//             if(temp->left!=NULL){
//                 q.push(temp->left);
//             }else{
                
//                 return false;
//             }
//         }
//         if(temp->data < x){
//             //means we traverse right side
//             if(temp->right!=NULL){
//                 q.push(temp->right);
//             }else{
                
//                 return false;
//             }
//         }
//     }
// }