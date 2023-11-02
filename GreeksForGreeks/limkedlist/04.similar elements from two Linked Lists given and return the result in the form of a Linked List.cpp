Node* getIntersection(Node* head1, Node* head2)
{
       unordered_map < int > m;
       Node* n1 = head1;
       Node* n2 = head2;
       Node* head = NULL;

       // loop stores all the elements of list1 in hset
       while (n1) 
       {
           m[n1->value] = 1;
           n1 = n1->next;
       }

       // For every element of list2 present in hset
       // loop inserts the element into the result
       while (n2 != null) 
       {
           if (m[n2->value] == 1)
           {
               Node* temp = new Node();
               temp->value = n2->value;
               temp->next = head;
               head = temp;
           }
           n2 = n2->next;
       }
       return head;
}
