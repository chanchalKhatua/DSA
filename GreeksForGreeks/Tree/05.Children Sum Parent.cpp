/*Complete the function below

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

class Solution{
    public:
    //Function to check whether all nodes of a tree have the value 
    //equal to the sum of their child nodes.
    int isSumProperty(Node *root)
    { 
     // Add your code here
     if (root==NULL)
     return 1;
     if(root->right==NULL && root->left==NULL){
           return 1;
       }
     int left=0;
     int right=0;
if(root->left==NULL)
   left=0;
   else
    left=root->left->data;
   if(root->right==NULL)
    right=0;
   else
    right=root->right->data;
   int ans=left+right;
   if(root->data!=ans)
   return 0;
  return isSumProperty(root->left) && isSumProperty(root->right);
   
    }
};
