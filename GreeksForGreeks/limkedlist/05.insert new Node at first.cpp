struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};

class Solution{
  public:
    //Function to insert a node at the beginning of the linked list.
    Node *insertAtBegining(Node *head, int x) {
       // Your code here
       Node *newnode= new Node(x);
       if(head==NULL)
       return newnode;
       newnode->next=head;
       return newnode;
      
    }
