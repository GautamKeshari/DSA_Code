#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node* left;
    Node* right;

    Node(int d){
        this->data=d;
        this->left=NULL;
        this->right=NULL;   
    }    
};

Node* insertIntoBST(Node* &root,int data){
    //for root node
    if(root == NULL){
        root = new Node(data);
        return root;
    }

    if(root->data > data){
        // insert in right part
        root->left = insertIntoBST(root->left,data);
    }
    if(root->data < data){
        // insert in left part
        root->right = insertIntoBST(root->right,data);
    }

    return root;
}

void takeInput(Node* &root){
    int data;
    cin>>data;

    while(data!=-1){
        insertIntoBST(root,data);
        cin>>data;
    }
}

void levelordertraversal(Node* root){
    queue<Node*> q;           // ******Here we make queue of nodes.
    q.push(root);
    q.push(NULL);   //there is a root always present in a binary tree,so,we push NULL in every binary tree for root node.

    // If we get NULL we have to jump on the next line.

    while(!q.empty()){
        Node *temp=q.front();
        q.pop();

        // if(q.front()==NULL){
        if(temp==NULL){         //purana level complete ho chuka hai.
            cout<<endl;
            if(!q.empty()){      //queue still have some child nodes,means we have to put separator again in queue.
                q.push(NULL);
            }
        }else{
            cout<<temp->data<<" ";
            if(temp->left){
                q.push(temp->left);
            }

            if(temp->right){
                q.push(temp->right);
            }
        }

    }
    cout<<endl;
}

void inorder(Node* root){          // Left -> Node-value ->Right
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

void preorder(Node* root){          // Node-value -> Left -> Right
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

void postorder(Node* root){          // Left ->Right -> Node-value 
    if(root==NULL){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}

int minVal(Node* root){
    Node* temp=root;
    
    if(temp==NULL) return 0;

    while(temp->left!=NULL){
        temp=temp->left;
    }
    return temp->data;
}
int maxVal(Node* root){
    Node* temp=root;

    if(temp==NULL) return 0;

    while(temp->right!=NULL){
        temp=temp->right;
    }
    return temp->data;
}

Node* delFromBST(Node* root,int val){
    if(root==NULL)
        return NULL;
        
    if(root->data == val){
        //0 child
        if(root->left==NULL && root->right==NULL){
            delete root;
            return NULL;
        }
        //1 child

        //only left child exist
        if(root->left!=NULL && root->right==NULL){
            Node* temp=root->left;
            delete root;
            return temp;
        }
        if(root->left==NULL && root->right!=NULL){
            Node* temp=root->right;
            delete root;
            return temp;
        }

        //2 child
        if(root->left!=NULL && root->right!=NULL){
            int max=maxVal(root->left);
            root->data=max;
            root->left = delFromBST(root->left,max);
            return root;
        }

    }else if(root->data > val){
        root->left= delFromBST(root->left,val);
        return root;      //doubt
    }else{
        root->right= delFromBST(root->right,val);
        return root;     //doubt
    }

}

Node* inPre(Node* root,int key){
    if(root==NULL){
        return NULL;
    }
    Node* temp=root;
    Node* ans=NULL;
    while(temp){
        if(temp->key<key){
            ans=temp;
            temp=temp->right;
        }else{
            temp=temp->left;
        }
    }
    return ans;
}

// inorder successor
Node* inSuc(Node* root,int key){   //just greater value than key in inorder traversal of BST
    if(root==NULL){
        return NULL; 
    }
    Node* temp=root;
    Node* ans=NULL;
    while(temp!=NULL){
        if(temp->data > key){
            ans=temp;
            temp=temp->left;
        }else{
            temp=temp->right;
        }
        
    }
    return ans;
}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    Node* root=NULL;
    cout<<"Enter data to create BST: "<<endl;
    takeInput(root);
    cout<<"Level order traversal is: "<<endl;
    levelordertraversal(root);

    cout<<"Inorder traversal is: "<<endl;
    inorder(root);
    cout<<endl;
    cout<<"Preorder traversal is: "<<endl;
    preorder(root);
    cout<<endl;
    cout<<"Postorder traversal is: "<<endl;
    postorder(root);
    cout<<endl;

    cout<<"Minimum value is: "<<endl;
    cout<<minVal(root)<<endl;

    cout<<"Maximum value is: "<<endl;
    cout<<maxVal(root)<<endl;
    //inorder successor
    int key;
    cin>>key;
    cout<<"Inorder Successor of "<<key <<" is: "<<inSuc(root,key)->data <<endl;
    cout<<"Inorder Predecessor of "<<key <<" is: "<<inPre(root,key)->data <<endl;

    // **** DELETION IN BST ****
    int element;
    cin>>element;
    cout<<"Delete "<<element<<" from BST: ";
    delFromBST(root,element);
    cout<<endl<<"AFTER DELETION :"<<endl;

    cout<<"Level order traversal is: "<<endl;
    levelordertraversal(root);

    cout<<"Inorder traversal is: "<<endl;
    inorder(root);
    cout<<endl;
    cout<<"Preorder traversal is: "<<endl;
    preorder(root);
    cout<<endl;
    cout<<"Postorder traversal is: "<<endl;
    postorder(root);
    cout<<endl;

    cout<<"Minimum value is: "<<endl;
    cout<<minVal(root)<<endl;

    cout<<"Maximum value is: "<<endl;
    cout<<maxVal(root)<<endl;
    //inorder successor
    
    cout<<"Inorder Successor of "<<key <<" is: "<<inSuc(root,key)->data <<endl;
    cout<<"Inorder Predecessor of "<<key <<" is: "<<inPre(root,key)->data <<endl;
}