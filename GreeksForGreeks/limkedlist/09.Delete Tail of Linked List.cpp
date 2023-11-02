//User function Template for C++

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

Node * deleteTail(Node *head)
{
    //Your Code here
    if(head==NULL)
    return head;
    if(head->next==NULL)
    {
        head=NULL;
        return head;
    }
    Node *curr= head;
    while(curr->next->next!=NULL)
    {
       curr=curr->next; 
    }
    curr->next=NULL;
    return head;
}
