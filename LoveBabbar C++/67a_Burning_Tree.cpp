// // https://practice.geeksforgeeks.org/problems/burning-tree/1

// //{ Driver Code Starts
// //Initial Template for C++

// #include <bits/stdc++.h>
// using namespace std;

// struct Node {
//     int data;
//     Node *left;
//     Node *right;

//     Node(int val) {
//         data = val;
//         left = right = NULL;
//     }
// };


// Node *buildTree(string str) {
//     // Corner Case
//     if (str.length() == 0 || str[0] == 'N')
//         return NULL;

//     // Creating vector of strings from input
//     // string after spliting by space
//     vector<string> ip;

//     istringstream iss(str);
//     for (string str; iss >> str;)
//         ip.push_back(str);

//     // Create the root of the tree
//     Node *root = new Node(stoi(ip[0]));

//     // Push the root to the queue
//     queue<Node *> queue;
//     queue.push(root);

//     // Starting from the second element
//     int i = 1;
//     while (!queue.empty() && i < ip.size()) {

//         // Get and remove the front of the queue
//         Node *currNode = queue.front();
//         queue.pop();

//         // Get the current Node's value from the string
//         string currVal = ip[i];

//         // If the left child is not null
//         if (currVal != "N") {

//             // Create the left child for the current Node
//             currNode->left = new Node(stoi(currVal));

//             // Push it to the queue
//             queue.push(currNode->left);
//         }

//         // For the right child
//         i++;
//         if (i >= ip.size())
//             break;
//         currVal = ip[i];

//         // If the right child is not null
//         if (currVal != "N") {

//             // Create the right child for the current Node
//             currNode->right = new Node(stoi(currVal));

//             // Push it to the queue
//             queue.push(currNode->right);
//         }
//         i++;
//     }

//     return root;
// }


// // } Driver Code Ends
// //User function Template for C++

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
// class Solution {
//   public:
//     //used to create mapping
//     //used to find the target node
//     Node* createParentNode(Node* root, int target, map<Node*, Node*> &nodeToParent){
//         Node* res=NULL;   //used for returning the target node;
        
//         queue<Node*>q;
//         q.push(root);
//         //in starting we make root parent as NULL
//         nodeToParent[root]=NULL;
        
//         while(!q.empty()){
//             Node* curr=q.front();
//             q.pop();
            
//             if(res==NULL){
//                 if(curr->data==target){
//                     res=curr;
//                 }
//             }
            
//             if(curr->left){
//                 q.push(curr->left);
//                 nodeToParent[curr->left]=curr;
                
//             }
//             if(curr->right){
//                 q.push(curr->right);
//                 nodeToParent[curr->right]=curr;
//             }
//         }
//         return res;
//     }
    
//     void burnTree(int &ans, Node* root, map<Node*, Node*> &nodeToParent){
//         map<Node*,bool> visited;
//         queue<Node* > q;
//         q.push(root);
//         visited[root]=true;
        
//         while(!q.empty()){
//             int size =q.size();
//             bool flag=false;
            
//             for(int i=0;i<size;i++){
//                 Node* temp=q.front();
//                 q.pop();
                
//                 if(temp->left && !visited[temp->left]){
//                     q.push(temp->left);
//                     visited[temp->left]=true;
//                     flag=true;
//                 }
//                 if(temp->right && !visited[temp->right]){
//                     q.push(temp->right);
//                     visited[temp->right]=true;
//                     flag=true;
//                 }
//                 if(nodeToParent[temp]!=NULL && !visited[nodeToParent[temp]]){
//                     q.push(nodeToParent[temp]);
//                     visited[nodeToParent[temp]]=true;
//                     flag=true;
//                 }   
//             }
            
//             if(flag==true){
//                 ans++;
//             }
            
//         }
//     }
  
//     int minTime(Node* root, int target) 
//     {
//         int ans=0;
//         map<Node*,Node*> nodeToParent;
        
//         Node* targetNode=createParentNode(root,target,nodeToParent);
//         //upto this we get target node and also mapping
        
//         burnTree(ans,targetNode,nodeToParent);
        
//         return ans;
//     }
// };

// //{ Driver Code Starts.

// int main() 
// {
//     int tc;
//     scanf("%d ", &tc);
//     while (tc--) 
//     {    
//         string treeString;
//         getline(cin, treeString);
//         // cout<<treeString<<"\n";
//         int target;
//         cin>>target;
//         // cout<<target<<"\n";

//         Node *root = buildTree(treeString);
//         Solution obj;
//         cout<<obj.minTime(root, target)<<"\n"; 

//         cin.ignore();

//     }


//     return 0;
// }

// // } Driver Code Ends