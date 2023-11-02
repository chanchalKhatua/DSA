
/*
struct Node
{
    int data;
    Node * next;
    Node (int x)
    {
        data=x;
        next=NULL;
    }
        
};

*/

Node * insertInSorted(Node * head, int data)
{
    //Your code here
    Node *newnode= new Node(data);
    Node *curr=head;
    if(head->data>=data)
    {
        newnode->next=head;
        head=newnode;
        return head;
    }
    while(curr->next!=NULL && curr->next->data<data)
    {
        
           curr=curr->next;
        
    }
    newnode->next=curr->next;
            curr->next=newnode;
            return head;
}
