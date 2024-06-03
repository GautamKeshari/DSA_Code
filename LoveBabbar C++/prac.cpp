#include <bits/stdc++.h>
using namespace std;

struct Node{
	int data;
	Node* left,*right;

	Node(int d){
		this->data=d;
		this->left=NULL;
		this->right=NULL;
	}
};

class Tree{
	private:
		Node* root;

	public:
		Tree(){
			root=NULL;
		}

		Node* constructTree(vector<int> &arr, int ind, int n){
			if(ind>=n || arr[ind]==-1) return NULL;

			Node* node=new Node(arr[ind]);

			if((2*ind+1)<n && arr[2*ind+1]!=-1) node->left=constructTree(arr,2*ind+1,n);
			if((2*ind+2)<n && arr[2*ind+2]!=-1) node->right=constructTree(arr,2*ind+2,n);

			return node;
		}

		Node* buildTree(vector<int> &arr,int n){
			root=constructTree(arr,0,n);
		}

		void display(Node* root){
			if (root == nullptr) return;
			cout << root->data <<endl;

			if (root->left) {
				cout<<root->data<<"->left ";
				display(root->left);
			}
			if (root->right) {
				cout<<root->data<<"->right ";
				display(root->right);
			}
		}

		void display() {
        	display(root);
    	}
};

int main() {

	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

	int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

	Tree t;
	t.buildTree(arr,n);

	t.display();

	return 0;
}
