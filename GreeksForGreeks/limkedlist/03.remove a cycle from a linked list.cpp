Node* getLastNode(Node* head) 
{
   Node* slow = head;
   Node* fast = head;
   // find the intersection point using Tortoise and Hare algorithm
   while (fast->next != NULL) 
   { 
       slow = slow->next; 
       fast = fast->next->next; 
       if (slow == fast) 
           break; 
   }
   //check if there is no loop
   if (fast->next == NULL) 
   {
       return NULL;
   }
   slow = head; 
   // run this loop till both the references are one short of the start of the loop
   while (slow->next != fast->next) 
   { 
       slow = slow->next; 
       fast = fast->next; 
   }
   // Now the fast pointer is pointing to the start of the loop 
   return fast;
}
Node* getLastNode = findStartOfLoop(head);
getLastNode->next = null;
