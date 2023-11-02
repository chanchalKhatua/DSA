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
void insertAtPosition(Node *head, int pos, int data)
{
    //Your code here
  Node* temp=new Node(data);
    Node* curr=head;
    for(int i=0;i<pos-1 && curr != NULL ;i++){
        curr=curr->next;
    }
        if(curr == NULL){
        return;
    }
        temp->next=curr->next;
        curr->next=temp;
}
