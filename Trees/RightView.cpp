vector<int> rightView(Node *root)
    {
       vector<int> ans;
       if(!root) return ans;
       
       queue<Node *> q;
       q.push(root);
       
       while(!q.empty()){
           ans.push_back(q.back()->data);
           int n = q.size();
           while(n--){
               Node * curr = q.front();
               q.pop();
               if(curr->left) q.push(curr->left);
               if(curr->right) q.push(curr->right);
           }
           
       }
    }