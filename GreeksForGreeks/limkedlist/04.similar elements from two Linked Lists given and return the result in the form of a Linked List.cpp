//What algorithm will you implement to find similar elements from two Linked Lists given and return the result 
// in the form of a Linked List? Assume there are no duplicates.
// Create an empty hash table and set the result list to NULL. While traversing List1, insert the element 
// in the hash table for each element visited in List1. While traversing List2, look for 
// the entries in the hash table for each 
// element visited in List2. If the element is already existing, 
// add it to the result list. If the element isn't present, it is to be ignored.

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
