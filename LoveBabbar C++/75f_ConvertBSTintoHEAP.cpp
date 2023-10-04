// #include<bits/stdc++.h>
// using namespace std;

// class Node{
//     public:
//     int data;
//     Node* left, *right;

//     Node(int d){
//         this->data=d;
//         this->left=NULL;
//         this->right=NULL;
//     }
// };

// Node* insertIntoBST(Node* &root,int d){
//     if(root==NULL){
//         root=new Node(d);
//         return root;
//     }

//     if(root->data < d){
//         insertIntoBST(root->left,d);
//     }
//     if(root->data > d){
//         insertIntoBST(root->right,d);
//     }

//     return root;
// }

// int main(){
//     int n;
//     cin>>n;
//     Node *root=NULL;
//     while(n--){
//         int d; cin>>d;
//         insertIntoBST(root,d);
//     }
// }