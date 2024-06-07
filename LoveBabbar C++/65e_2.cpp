// bool solve(Node *root, int &k, int node,int &ans){
//     if(root==NULL) return false;
//     if(root->data==node) return true;
//     bool left=solve(root->left,k,node,ans);
//     bool right=solve(root->right,k,node,ans);
//     if(left || right){
//         k--; if(k==0) ans=root->data;
//         return 1;
//     }else{
//         return 0;
//     }
// }

// int kthAncestor(Node *root, int k, int node)
// {
//     int ans=-1;
//     solve(root,k,node,ans);
//     return ans;
// }
