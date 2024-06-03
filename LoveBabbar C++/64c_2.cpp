// vector<int> verticalOrder(Node *root)
//     {
//         if(root==NULL) return {};
//         map<int,vector<int>> mpp;    //hd ,root->data
//         queue<pair<Node*,int>> q;  // node, hd
        
//         q.push({root,0});
//         while(!q.empty()){
//             Node* temp=q.front().first;
//             int hd=q.front().second;
            
//             q.pop();
            
//             mpp[hd].push_back(temp->data);
            
//             if(temp->left) q.push({temp->left,hd-1});
//             if(temp->right) q.push({temp->right,hd+1});
//         }
        
//         vector<int> ans;
//         for (auto it = mpp.begin(); it != mpp.end(); it++) {
//             for (auto x : it->second) {
//                 ans.push_back(x);
//             }
//         }
//         return ans;
//     }