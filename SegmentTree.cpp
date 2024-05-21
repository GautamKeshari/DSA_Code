// #include<bits/stdc++.h>
// using namespace std;

// struct Node{
//     int total,start,end;          //startinterval,endinterval
//     Node *left,*right;

//     int findsum(vector<int> arr, int startInterval,int endInterval){
//         int summation=0;
//         for(int i=startInterval;i<=endInterval;i++){
//             summation+=arr[i];
//         }
//         return summation;
//     }


// };

// class SegmentTree{
//     private:
//     Node* root;

//     public:
//     SegmentTree(){
//         root=NULL;
//     }

//     Node* constructTree(vector<int> arr,int si,int ei){

//         Node* node=new Node();
//         node->start=si;
//         node->end=ei;
//         node->total=node->findsum(arr,si,ei);
            
//         if(si==ei){
//             //Leaf Node
//             return node;
//         }
//         int mid=si+(ei-si)/2;

//         //left Node
//         node->left=constructTree(arr,si,mid);
//         node->right=constructTree(arr,mid+1,ei);

//         return node;
//     }

//     void buildTree(vector<int> &arr){
//         root=constructTree(arr,0,arr.size()-1);
//     }

//     void display(Node* root){
//         string ans="";
//         cout<<"Interval [" << root->start << "," << root->end << "],sum=[" << root->total << "]";
//         cout<<ans<<"\n";

//         if(root->left){
//             cout<<root->total<<" -> left ";
//             display(root->left);
//         }
//         if(root->right){
//             cout<<root->total<<" -> right ";
//             display(root->right);
//         }
//     }

//     void display(){
//         display(root);
//     }

//     int updateTree(int index,int val,vector<int> &arr,Node* &root){
//         if(index>=root->start && index<=root->end) {
//             if(index==root->start && index==root->end){
//                 root->total=val;
//                 return root->total;
//             }else{
//                 int left=updateTree(index,val,arr,root->left); 
//                 int right=updateTree(index,val,arr,root->left); 
//                 root->total=left+right;
//                 return root->total;
//             }
//         }
//         return root->total;


//     }

//     void update(int index,int val,vector<int> &arr){
//         updateTree(index,val,arr,root);
//     }
     
// };

// int main(){
//     int n;
//     cin>>n;
//     vector<int> arr;
//     for(int i=0;i<n;i++){
//         int x; cin>>x;
//         arr.push_back(x);
//     }

//     SegmentTree *st;
//     st->buildTree(arr);

//     // st->display();

//     int index=0;cin>>index;
//     int val;cin>>val;
//     st->update(index,val,arr);

//     st->display();
//     return 0;
// }



#include <bits/stdc++.h>
using namespace std;

struct Node{
    int total,start,end;          //startinterval,endinterval
    Node *left,*right;

    int findsum(vector<int> arr, int startInterval,int endInterval){
        int summation=0;
        for(int i=startInterval;i<=endInterval;i++){
            summation+=arr[i];
        }
        return summation;
    }

};

class SegmentTree {
private:
    Node* root;

public:
    SegmentTree() {
        root = nullptr;
    }

    Node* constructTree(vector<int>& arr, int si, int ei) {
        Node* node = new Node();
        node->start = si;
        node->end = ei;
        node->total = node->findsum(arr, si, ei);

        if (si == ei) {
            // Leaf Node
            return node;
        }

        int mid = si + (ei - si) / 2;

        // Left Node
        node->left = constructTree(arr, si, mid);
        // Right Node
        node->right = constructTree(arr, mid + 1, ei);

        return node;
    }

    void buildTree(vector<int>& arr) {
        root = constructTree(arr, 0, arr.size() - 1);
    }

    void display(Node* root) {
        if (root == nullptr) return;

        cout << "Interval [" << root->start << "," << root->end << "], sum = " << root->total << endl;

        if (root->left) {
            display(root->left);
        }
        if (root->right) {
            display(root->right);
        }
    }

    void display() {
        display(root);
    }

    int updateTree(int index, int val, Node* root) {
        if (root == nullptr) return 0;

        if (root->start == root->end) {
            if (root->start == index) {
                root->total = val;
            }
            return root->total;
        }

        int mid = root->start + (root->end - root->start) / 2;

        if (index <= mid) {
            updateTree(index, val, root->left);
        } else {
            updateTree(index, val, root->right);
        }

        root->total = (root->left ? root->left->total : 0) + (root->right ? root->right->total : 0);
        return root->total;
    }

    void update(int index, int val, vector<int>& arr) {
        if (index < 0 || index >= arr.size()) return;

        arr[index] = val;
        updateTree(index, val, root);
    }
};

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    SegmentTree st;
    st.buildTree(arr);

    // Uncomment to display the initial tree
    // st.display();

    int index, val;
    cin >> index >> val;
    st.update(index, val, arr);

    st.display();
    return 0;
}
