// https://practice.geeksforgeeks.org/batch/cip-1/track/DSA-Foundation-Tree/problem/foldable-binary-tree
// Given a binary tree, check if the tree can be folded or not. A tree can be folded if left and right subtrees 
// of the tree are structure wise mirror image of each other. An empty tree is considered as foldable.
// Consider the below trees:
// (a) and (b) can be folded.
// (c) and (d) cannot be folded.


// (a)
//        10
//      /    \
//     7      15
//      \    /
//       9  11
// (b)
//         10
//        /  \
//       7    15
//      /      \
//     9       11
// (c)
//         10
//        /  \
//       7   15
//      /    /
//     5   11
// (d)
//          10
//        /   \
//       7     15
//     /  \    /
//    9   10  12
bool solve(Node* a, Node* b){
    if(!a or !b) return a == b;
    return solve(a->left, b->right) and solve(a->right, b->left);
}
//Function to check whether a binary tree is foldable or not.
bool IsFoldable(Node* root)
{
    // Your code goes here
     if(!root) return true;
    return solve(root->left, root->right);
}
