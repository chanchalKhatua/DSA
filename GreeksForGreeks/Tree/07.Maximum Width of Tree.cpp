/*  Structure of a Binary Tree

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

class Solution {
  public:
    // Function to get the maximum width of a binary tree.
    int getMaxWidth(Node* root) {

        // Your code here
    queue<Node*>q;
    int m=0;
        int count=0;
        if(root==NULL)
        return 0;
        if(root->left==NULL && root->right==NULL)
        return 1;
        q.push(root);
        q.push(NULL);
        while(!q.empty())
        {
            Node* curr=q.front();
            q.pop();
            if(curr==NULL)
            {   m=max(m,count);
                count=0;
                
                if(!q.empty())
                 q.push(NULL);
            }
            else
            {
                count++;
            
            if(curr->left!=NULL)
            q.push(curr->left);
            if(curr->right!=NULL)
            q.push(curr->right);
            }
            
        }
        return m;
    }
};
