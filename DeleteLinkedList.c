#include <stdio.h>
#include <stdlib.h>

struct node                                               // Creating node with data and a pointer
{
   int data;
   struct node *next;
};

struct node *head = NULL;

void createList(int n);
void deletion_given_pos(int pos);
void displayList();

int main()
{
   int n, data, pos;
   printf("\nEnter the total number of nodes: ");
   scanf("%d", &n);
   createList(n);
   printf("\nThe List is \n");
   displayList();
   printf("\nEnter the position of the node to be deleted: ");                    
   scanf("%d",&pos);
   deletion_given_pos(pos);
   printf("\n\nAfter Deleting the node at given position, the List is\n");
   displayList();
   return 0;
}

void createList(int n)
{
   struct node *newNode, *temp;
   int data, i;
   head = (struct node *)malloc(sizeof(struct node));
   if(head == NULL)                                                      // When the list is empty
   {
      printf("Unable to allocate memory.");
   }
   else
   {
      printf("\nEnter the data of node 1: ");
      scanf("%d", &data);
      head->data = data;
      head->next = NULL;
      temp = head;
      for(i=2; i<=n; i++)
      {
         newNode = (struct node *)malloc(sizeof(struct node));
         if(newNode == NULL)
         {
            printf("Unable to allocate memory.");
            break;
         }
         else
         {
            printf("\nEnter the data of node %d: ", i);
            scanf("%d", &data);
            newNode->data = data;
            newNode->next = NULL;
            temp->next = newNode;
            temp = temp->next;
         }
      }
   }
}

void deletion_given_pos(int pos)                   //Function to delete the node at given position 
{
   if(head == NULL)                                                                    // Empty List
   {
      free(head);                                                                //Delete head
      head = NULL;                                                 // make the reference to NULL
   }
   struct node *temp = head,*prev_node;
   int count = 1;
   while(temp -> next != NULL && pos != count)
   {
      prev_node = temp;                                        // Tracking the (position - 1 )node
      temp = temp -> next; 
      count = count + 1;
   }
   if(pos == count)
   {
      prev_node -> next = temp -> next;  //Assigning the add of the node to be del to its prev node
      free(temp);                                                                // Delete the node
   }
}

void displayList()
{
   struct node *temp;
   if(head == NULL)
   {
      printf("List is empty.");
   }
   else
   {
      temp = head;
      while(temp != NULL)                                                         // Print the list
      {
         printf("%d\t", temp->data);
         temp = temp->next;
      }
   printf("\n");
   }
}