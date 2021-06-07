//
Level order traversal :


vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> v;
        if(root == NULL)
            return v;
        queue<TreeNode*>q;
        q.push(root);
        vector<int> temp;
        while(!q.empty())
        {
            int n = q.size();
            for(int i=0;i<n;i++)
            {
            TreeNode* curr = q.front();
            q.pop();
            temp.push_back(curr->val);
            if(curr->left)
                q.push(curr->left);
            if(curr->right)
                q.push(curr->right);
            }
            v.push_back(temp);
            temp.clear();
        }
        return v;
    }



    //Count nodes 

    int countNodes(TreeNode* root) {
        if(root == NULL)
            return 0;
        return 1+ countNodes(root->left) + countNodes(root->right);
    }



    //height

    int height(struct Node* node){
        if(node == NULL)
            return 0;
        int lh = height(node->left);
        int rh = height(node->right);
        
        return 1 + max(lh,rh);
    }

    // function should print the nodes at k distance from root
vector<int> Kdistance(struct Node *root, int k)
{
  vector<int> v;
  queue<Node  *> q;
  q.push(root);
  while(!q.empty())
  {
     int n = q.size();
     for(int i=0;i<n;i++)
     {
      Node * curr = q.front();
      if(k==0)
        v.push_back(curr->data);
      q.pop();
     
      if(curr->left)
        q.push(curr->left);
      if(curr->right)
        q.push(curr->right);
     }
     k--;
  }
  return v;
}


// function should return level of the target node
    int getLevel(struct Node *node, int k)
    {
    	queue<Node *> q;
    	q.push(node);
    	int c = 1;
    	while(!q.empty())
    	{
    	    int n = q.size();
    	    while(n--)
    	    {
    	    Node* curr = q.front();
    	    if(curr->data == k)
    	        return c;
    	    q.pop();
    	    if(curr->left)
    	        q.push(curr->left);
    	    if(curr->right)
    	        q.push(curr->right);
    	    }
    	   c++;
    	}
    	return 0;
    }

    //diamter of a binary tree
    int height(Node * node){
        if(!node)
            return 0;
        return 1 + max(height(node->left), height(node->right));
    }
    int diameter(Node* root)
    {
        if(!root)
            return 0;
        int opt1 = 1 + height(root->left)+ height(root->right);
        int opt2 = diameter(root->left);
        int opt3 = diameter(root->right);
        return max(opt1, max(opt2, opt3));
    }

    complexity - O(n * h)
    h = logn, h = n (skewed)

    //time saving approcah diamter

    //Function to return the diameter of a Binary Tree.
     pair<int, int> heightDiameter(Node * node){
          
       
        if(!node){
            pair<int, int> p;
            p.first = 0;
            p.second = 0;
            return p;
        }
        
         pair<int, int> leftAns = heightDiameter(node->left);
         pair<int, int> rightAns = heightDiameter(node->right);
         int ld = leftAns.second;
         int lh = leftAns.first;
         
         int rd = rightAns.second;
         int rh = rightAns.first;
        
         int height = 1 + max(lh, rh);
         int diameter = max(1+lh+rh, max(ld, rd));
         pair<int, int> p;
         p.first = height;
         p.second = diameter;
         return p;
        
    }
    int diameter(Node* root)
    {
        if(!root)
            return 0;
        return heightDiameter(root).second;
        //return max(opt1, max(opt2, opt3));
    }