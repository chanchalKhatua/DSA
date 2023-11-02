Insert in Middle of Linked List


/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/

//Function to insert a node in the middle of the linked list.
Node* insertInMiddle(Node* head, int x)
{ 
    
	// Code here
	if(head==NULL)
	{
	    Node *newnode= new Node(x);
	    return newnode;
	}
	Node *newnode= new Node(x);
	Node *fast= head;
	Node*sec=head->next;
	while(sec!=NULL)
	{   if(sec->next==NULL)
	    break;
	    fast=fast->next;
	    sec=sec->next->next;
	}
	newnode->next=fast->next;
	fast->next=newnode;
	return head;
}
