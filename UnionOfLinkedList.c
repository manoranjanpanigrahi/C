#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
 
/* Link list node */
struct node
{
   int data;
   struct node* next;
};
 
/* A utility function to insert a node at the beginning of a linked list*/
void push(struct node** head_ref, int new_data);
 
/* A utility function to check if given data is present in a list */
bool isPresent(struct node *head, int data);
 
/* Function to get union of two linked lists head1 and head2 */
struct node *getUnion(struct node *head1, struct node *head2)
{
   struct node *result = NULL;
   struct node *t1 = head1, *t2 = head2;
 
   // Insert all elements of list1 to the result list
   while (t1 != NULL)
   {
      push(&result, t1->data);
      t1 = t1->next;
   }
 
   // Insert those elements of list2 which are not
   // present in result list
   while (t2 != NULL)
   {
      if (!isPresent(result, t2->data))
         push(&result, t2->data);
      t2 = t2->next;
   }
 
   return result;
}

void push (struct node** head_ref, int new_data)
{
   /* allocate node */
   struct node* new_node = (struct node*) malloc(sizeof(struct node));
      
   /* put in the data */
   new_node->data = new_data;
 
   /* link the old list off the new node */
   new_node->next = (*head_ref);
 
   /* move the head to point to the new node */
   (*head_ref) = new_node;
}
 
void printList (struct node *node)
{
    while (node != NULL)
   {
      printf (" %d ", node->data);
      node = node->next;
   }
   printf("\n");
}
 
bool isPresent (struct node *head, int data)
{
    struct node *t = head;
    while (t != NULL)
   {
      if (t->data == data)
         return 1;
      t = t->next;
   }
   return 0;
}

int main()
{
   /* Start with the empty list */
   struct node* head1 = NULL;
   struct node* head2 = NULL;
   struct node* unin = NULL;
  
  //elements of 1st linked list
   push (&head1, 7);
   push (&head1, 5);
   push (&head1, 3);
   push (&head1, 1);
   push (&head1, 20);
   

   //elements of 2nd linked list
   push (&head2, 6);
   push (&head2, 25);
   push (&head2, 32);
   push (&head2, 11);
   push (&head2, 9);
   
   
   unin = getUnion (head1, head2);
 
   printf ("\n Linked List A is : \n");
   printList (head1);
 
   printf ("\n Linked List B is: \n");
   printList (head2);
 
   printf ("\n Linked List D ( output ) is: \n");
   printList (unin);
 
   return 0;
}