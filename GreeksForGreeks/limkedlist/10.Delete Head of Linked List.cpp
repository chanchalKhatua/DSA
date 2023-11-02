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
//Complete this function
Node * deleteHead(Node *head)
{   if(head==NULL || head->next==NULL)
{     head= NULL;
     return head;
}
    Node *curr= head->next;
    head==NULL;
    return curr;
}
