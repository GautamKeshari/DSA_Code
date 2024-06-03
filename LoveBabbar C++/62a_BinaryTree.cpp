#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* left;
    node* right;

    node(int d){
        this->data=d;
        this->left=NULL;
        this->right=NULL;
    }
};

node* buildTree(node* root){
    cout<<"Enter the data: "<<endl;
    int data;
    cin>>data;
    root=new node(data);     //this representing the 11th line => node(data).

    if(data==-1){
        return NULL;
    }

    cout<<"Enter the data for inserting the node in left node of "<<data<<endl;
    root->left=buildTree(root->left);

    cout<<"Enter the data for inserting the node in right node of "<<data<<endl;
    root->right=buildTree(root->right);

    return root;
}


// We can also use this level order traversal ,but it gives correct output in a single line. 

// void levelordertraversal(node* root){
//     queue<node*> q;
//     q.push(root);    

//     while(!q.empty()){
//         node *temp=q.front();
//         q.pop();

//         cout<<temp->data<<" ";
//             if(temp->left){
//                 q.push(temp->left);
//             }

//             if(temp->right){
//                 q.push(temp->right);
//             }
//     }
// }

int height(node* root)
{
    if (root == NULL)
        return 0;
    else
    {
        /* compute the height of each subtree */
        int lheight = height(root->left);
        int rheight = height(root->right);
 
        /* use the larger one */
        if (lheight > rheight)
            return(lheight + 1);
        else return(rheight + 1);
    }
}

void levelordertraversal(node* root){
    queue<node*> q;           // ******Here we make queue of nodes.
    q.push(root);
    q.push(NULL);   //there is a root always present in a binary tree,so,we push NULL in every binary tree for root node.

    // If we get NULL we have to jump on the next line.

    while(!q.empty()){
        node *temp=q.front();
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

void inorder(node* root){          // Left -> Node-value ->Right
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

void preorder(node* root){          // Node-value -> Left -> Right
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

void postorder(node* root){          // Left ->Right -> Node-value 
    if(root==NULL){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}

void reverseLevelOrderTraversal(node *root)
{
    queue<node*>q;
    stack<int> st;
    
    q.push(root);
    
    while(!q.empty()){
        node* temp=q.front();
        st.push(temp->data);
        q.pop();
        
        if(temp->right){
            q.push(temp->right);
        }
        if(temp->left){
            q.push(temp->left);
        }
    }

    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
}

// We can build tree by two ways => 
// 1.From Recursion => buildTree(root)
// 2.Using iterative approach(Using Queue) => buildFromLevelOrder(root)


void buildFromLevelOrder(node* &root){     //here we have to build tree,if root=NULL.
    queue<node*> q;
    cout<<"Enter the data: "<<endl;
    int data;
    cin>>data;
    root=new node(data);
    q.push(root);

    while(!q.empty()){
        node *temp =q.front();
        q.pop();

        cout<<"Enter left node for "<<temp->data<<endl;
        int leftdata;
        cin>>leftdata;
        if(leftdata!=-1){
            temp->left=new node(leftdata);
            q.push(temp->left);
        }

        cout<<"Enter right node for "<<temp->data<<endl;
        int rightdata;
        cin>>rightdata;
        if(rightdata!=-1){
            temp->right=new node(rightdata);
            q.push(temp->right);
        }
    }
}

int main(){

    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif

    node* root =NULL;
    // 10 15 25 -1 -1 35 65 -1 -1 -1 20 45 -1 -1 60 -1 -1
    root=buildTree(root);

    cout<<"Level order Traversal is: "<<endl;
    levelordertraversal(root);

    cout<<endl<<"Inorder Traversal is: "<<endl;
    inorder(root);
    cout<<endl<<"preorder Traversal is: "<<endl;
    preorder(root);
    cout<<endl<<"Postorder Traversal is: "<<endl;
    postorder(root);
    cout<<endl<<"Reverse Level Order Traversal is: "<<endl;
    reverseLevelOrderTraversal(root);
}
