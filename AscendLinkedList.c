#include <stdio.h>
#include<stdlib.h>
   
struct node
{  
   int data;  
   struct node *next;  
};      

struct node *head, *tail = NULL;           //Represent the head and tail of the singly linked list  
  
void addNode(int data)                                   //addNode() will add a new node to the list
{  
    //Create a new node  
    struct node *newNode = (struct node*)malloc(sizeof(struct node));  
    newNode->data = data;  
    newNode->next = NULL;  
      
    if(head == NULL)                                                 //Checks if the list is empty  
    {  
      //If list is empty, both head and tail will point to new node  
      head = newNode;  
      tail = newNode;  
    }  
    else
   {  
      //newNode will be added after tail such that tail's next will point to newNode  
      tail->next = newNode;  
      tail = newNode;                                    //newNode will become new tail of the list 
   }  
}  
    //sortList() will sort nodes of the list in ascending order  
   void sortList()
   {  
      struct node *current = head, *index = NULL;                 //Node current will point to head 
      int temp;  
          
      if(head == NULL) 
      {  
           return;  
      }  
      else 
      {  
         while(current != NULL)
          {  
          //Node index will point to node next to current  
            index = current->next;
            while(index != NULL)
             { //If current node's data is greater than index's node data,swap the data b/w them  
               if(current->data > index->data)
               { 
                  temp = current->data;  
                  current->data = index->data;  
                  index->data = temp;  
               }  
                  index = index->next;  
             }  
               current = current->next;  
         }      
      }  
   }  

void display()                          //display() will display all the nodes present in the list
 {  
    struct node *current = head;                                  //Node current will point to head
    if(head == NULL) {  
        printf("List is empty \n");  
        return;  
    }  
    while(current != NULL)
     {  
        printf("%d ", current->data);                  //Prints each node by incrementing pointer 
        current = current->next;  
    }  
    printf("\n");  
}  
      
int main()  
{     
   addNode(13);                                                            //Adds data to the list
   addNode(71);  
   addNode(12);  
   addNode(19);  
   addNode(25);
   addNode(9);
   addNode(22);
   addNode(17);
   addNode(32);
   addNode(46); 
     
   printf("\nOriginal Linkdes list A: \n");                             //Displaying original list 
   display();

   sortList();    

   printf("\nLinked List A after sorting in ascending order is: \n");         //Dis. sorted list   
   display();
   return 0;  
}