vector<int> leftView(Node *root)
{
   // Your code here
   vector<int> v;
   if(!root)
   return v;
   
   queue<Node *> q;
   q.push(root);
   
   while(!q.empty())
   {
       v.push_back(q.front()->data);
       int n= q.size();
       while(n--)
       {
       Node* curr = q.front();
       q.pop();
       if(curr->left)
       q.push(curr->left);
       if(curr->right)
       q.push(curr->right);
       }
   }
   return v;
}
