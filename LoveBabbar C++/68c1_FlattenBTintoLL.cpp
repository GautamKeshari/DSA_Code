// https://practice.geeksforgeeks.org/problems/flatten-binary-tree-to-linked-list/1

// //{ Driver Code Starts
// //Initial Template for C++

// #include<bits/stdc++.h>
// using namespace std;

// struct Node {
// 	int key;
// Node *left, *right;
// };

// /* utility that allocates a new Node
//    with the given key  */
// Node* newNode(int key)
// {
// 	Node* node = new Node;
// 	node->key = key;
// 	node->left = node->right = NULL;
// 	return (node);
// }

// Node* buildTree(string str)
// {
// 	// Corner Case
// 	if (str.length() == 0 || str[0] == 'N')
// 		return NULL;

// 	// Creating vector of strings from input
// 	// string after spliting by space
// 	vector<string> ip;

// 	istringstream iss(str);
// 	for (string str; iss >> str; )
// 		ip.push_back(str);

// 	// Create the root of the tree
// 	Node* root = newNode(stoi(ip[0]));

// 	// Push the root to the queue
// 	queue<Node*> queue;
// 	queue.push(root);

// 	// Starting from the second element
// 	int i = 1;
// 	while (!queue.empty() && i < ip.size()) {

// 		// Get and remove the front of the queue
// 		Node* currNode = queue.front();
// 		queue.pop();

// 		// Get the current node's value from the string
// 		string currVal = ip[i];

// 		// If the left child is not null
// 		if (currVal != "N") {

// 			// Create the left child for the current node
// 			currNode->left = newNode(stoi(currVal));

// 			// Push it to the queue
// 			queue.push(currNode->left);
// 		}

// 		// For the right child
// 		i++;
// 		if (i >= ip.size())
// 			break;
// 		currVal = ip[i];

// 		// If the right child is not null
// 		if (currVal != "N") {

// 			// Create the right child for the current node
// 			currNode->right = newNode(stoi(currVal));

// 			// Push it to the queue
// 			queue.push(currNode->right);
// 		}
// 		i++;
// 	}

// 	return root;
// }

// void inorder(struct Node* root)
// {
// 	// base condition
// 	if (root == NULL)
// 		return;
// 	inorder(root->left);
// 	cout << root->key << " ";
// 	inorder(root->right);
// }


// // } Driver Code Ends
// //User function Template for C++

// class Solution
// {
//     public:
//     Node* solve(Node* root){
//         if(root==NULL){
//             return NULL;    
//         }
        
//         Node* rightNode = solve(root->right);
//         Node* leftNode = solve(root->left);
        
//         if(leftNode){
//             root->right=leftNode;
//             root->left=NULL;
//             while(leftNode->right!=NULL){
//                 leftNode=leftNode->right;
//             }
//             leftNode->right=rightNode;
//             leftNode->left=NULL;
//         }else{
//             root->right=rightNode;
//         }
//         return root;
//     }
    
//     void flatten(Node *root)
//     {
//         solve(root);
//     }
    
// //     The solve function is called recursively on the left and right subtrees of the current node. Assuming the tree has N nodes, each node is visited exactly once. Therefore, the time complexity of the recursion is O(N).

// // In the recursive calls, the left and right nodes are processed. The processing includes traversing the left subtree to find the rightmost node (leftNode) and updating the pointers. The traversal takes O(N) time as it visits each node once. Additionally, the while loop iterates until it reaches the rightmost node, which takes O(N) time in the worst case.

// // Since both the recursion and the while loop contribute to the time complexity, we can conclude that the overall time complexity of the flatten function is O(N).
// Space complexity=O(n);
// };

// //{ Driver Code Starts.
// int main() {

//     int t;
// 	cin >> t;
// 	getchar();

// 	while (t--)
// 	{

// 		string str;
// 		getline(cin, str);
	
// 		Node *root = buildTree(str);
// 		Solution ob;
// 		ob.flatten(root);
// 		inorder(root);


// 		cout << "\n";
// 	}

// 	return 0;
// }

// // } Driver Code Ends