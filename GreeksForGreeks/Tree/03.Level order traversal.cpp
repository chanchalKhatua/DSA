class Solution
{
    public:
    //Function to return the level order traversal of a tree.
    vector<int> levelOrder(Node* node)
    {
      //Your code her
     vector<int>v;
     queue<Node*>q;
     if (node!=NULL)
     {
     q.push(node);
     while(q.empty()==false)
     {
         Node* curr=q.front();
         q.pop();
         v.push_back(curr->data);
         if(curr->left!=NULL)
         q.push(curr->left);
         if(curr->right!=NULL)
         q.push(curr->right);
         
     }
     return v;
    }
    }
};
