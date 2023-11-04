

/* A binary tree node has data, pointer to left child
   and a pointer to right child  
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
}; */


//Function to return a list containing the level order traversal in spiral form.
vector<int> findSpiral(Node *root)
{
    //Your code here
    vector<int>v;
     deque<Node*> dq;
 
    // Insert the root of the tree into the deque
    dq.push_back(root);
 
    // Create a  variable that will switch in each iteration
    bool reverse = false;
 
    // Start iteration
    while (!dq.empty()) {
 
        // Save the size of the deque here itself, as in
        // further steps the size of deque will frequently
        // change
        int n = dq.size();
 
        // If we are printing left to right
        if (reverse) {
 
            // Iterate from left to right
            while (n--) {
 
                // Insert the child from the back of the
                // deque Left child first
                if (dq.front()->left != NULL)
                    dq.push_back(dq.front()->left);
 
                if (dq.front()->right != NULL)
                    dq.push_back(dq.front()->right);
 
                // Print the current processed element
                     v.push_back(dq.front()->data);               
                  dq.pop_front();
            }
            // Switch reverse for next traversal
            reverse = !reverse;
        }
        else {
 
            // If we are printing right to left
            // Iterate the deque in reverse order and insert
            // the children from the front
            while (n--) {
                // Insert the child in the front of the
                // deque Right child first
                if (dq.back()->right != NULL)
                    dq.push_front(dq.back()->right);
 
                if (dq.back()->left != NULL)
                    dq.push_front(dq.back()->left);
 
                // Print the current processed element
                v.push_back(dq.back()->data);
                dq.pop_back();
            }
            // Switch reverse for next traversal
            reverse = !reverse;
        }
    }
        

    return v;
}
