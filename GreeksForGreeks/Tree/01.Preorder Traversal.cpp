

/* A binary tree node has data, pointer to left child
   and a pointer to right child  

/*
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
};
*/

//Function to return a list containing the preorder traversal of the tree.
void pre(Node* root,vector<int>&v)
{
  // Your code here
  if(root!=NULL)
  {
      v.push_back(root->data);
      pre(root->left,v);
      pre(root->right,v);
      
  }
  
}
vector<int>preorder(Node* root)
{
   vector<int>v;
   pre(root,v);
   return v;
    
}
