// /*
// struct Node {
//     int data;
//     Node *left;
//     Node *right;

//     Node(int val) {
//         data = val;
//         left = right = NULL;
//     }
// };
// */
// class Solution
// {
//     public:
//     //Function to return a list of integers denoting the node 
//     //values of both the BST in a sorted order.

    
//     void convertIntoSortedDLL(Node* root, Node* &head){
//         if(root==NULL){
//             return;
//         }
        
//         convertIntoSortedDLL(root->right,head);
        
//         root->right=head;
        
//         if(head!=NULL){
//             head->left=root;
//         }
        
//         head=root;
        
//         convertIntoSortedDLL(root->left,head);
        
//     }
    
//     Node* mergeDLL(Node* head1,Node* head2){
//         Node* head=NULL;
//         Node* tail=NULL;
        
//         while(head1!=NULL && head2!=NULL){
//             if(head1->data < head2->data){
//                 if(head==NULL){
//                     head=head1;
//                     tail=head1;
//                     head1=head1->right;
//                     //upto this head and tail is at 1st element
//                 }
//                 else
//                 {
//                     tail->right=head1;
//                     head1->left=tail;
//                     tail=head1;
//                     head1=head1->right;
//                 }
//             }else{
//                 if(head==NULL){
//                     head=head2;
//                     tail=head2;
//                     head2=head2->right;
//                 }
//                 else
//                 {
//                     tail->right=head2;
//                     head2->left=tail;
//                     tail=head2;
//                     head2=head2->right; 
//                 }
//             }
//         }
        
//         while(head1!=NULL){
//             tail->right=head1;
//             head1->left=tail;
//             tail=head1;
//             head1=head1->right;
//         }
        
//         while(head2!=NULL){
//             tail->right=head2;
//             head2->left=tail;
//             tail=head2;
//             head2=head2->right;
//         } 
        
//         return head;
//     }
    
//     vector<int> merge(Node *root1, Node *root2)
//     {
//         Node* head1=NULL;
//         Node* head2=NULL;
//         convertIntoSortedDLL(root1,head1);
//         head1->left=NULL;
        
//         convertIntoSortedDLL(root2,head2);
//         head2->left=NULL;
        
//         Node* finalList = mergeDLL(head1,head2);
//         Node* head=finalList;
//         vector<int> ans;
//         while(head!=NULL){
//             ans.push_back(head->data);
//             // finalList->left=NULL;
//             head=head->right;
//         }
        
//         return ans;
//     }
// };