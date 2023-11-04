class Solution
{
    public:
    //Function to check if two trees are identical.
    bool isIdentical(Node *r1, Node *r2)
    {
        //Your Code here
        if (r1==NULL && r2==NULL)
        return true;
        else if (r1!=NULL && r2==NULL)
        return false;
        else if (r2!=NULL && r1==NULL)
        return false;
      
          bool eqaul=r1->data==r2->data;
          bool left = isIdentical(r1->right,r2->right);
          bool right =isIdentical(r1->left, r2->left);
        if(eqaul&& left && right)
        return true;
        else 
        return false;
        
    }
};
