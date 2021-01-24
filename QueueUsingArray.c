#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#define MAXSIZE 10                                                       //set queue size to 10

int queue[MAXSIZE],Rear = - 1,Front = - 1;
void enqueue();
void dequeue();
void show();
void main()
{
    int ch;
    while (1)
    {
        printf("\n1.Enqueue\n");                                                       
        printf("2.Dequeue\n");
        printf("3.Display \n");
        printf("4.Exit\n");
        printf("\nEnter your choice of operations : ");
        scanf("%d", &ch);
        switch (ch)                                                //ask user to choose an option
        {
            case 1:
            enqueue();
            break;
            case 2:
            dequeue();
            break;
            case 3:
            show();
            break;
            case 4:
            exit(0);
            default:
            printf("Incorrect choice \n");
        } 
    } 
} 

bool isfull()                                                  //function to check if queue if full
{
   if(Rear == MAXSIZE - 1)
      printf("\n QUEUE IS FULL \n");
   else
      return false;
}

void enqueue()                                                    //inserts elements to the queue
{
    int insert_item;
    if (isfull)
    {
       if (Front == - 1)
        Front = 0;
        printf("\nElement to be inserted in the Queue : ");
        scanf("%d", &insert_item);
        Rear = Rear + 1;
        queue[Rear] = insert_item;
    }
} 
   
void dequeue()                                                    //removes elements from he queue
{
   bool isempty();
   {
      if (Front == - 1 || Front > Rear)
      {
         printf("\nError: QUEUE IS EMPTY!!!..NO ELEMENT TO DEQUEUE \n");
         return ;
      }
      else
      {
         printf("\nElement deleted from the Queue: %d \n", queue[Front]);
         Front = Front + 1;
      }
   }
} 
  
void show()                                                      //displays the elemets of the queue
{
   bool isempty();
   {
      if (Front == - 1)
         printf("\nError: QUEUE IS EMPTY!!!..NO ELEMENT TO SHOW \n");
      else
      {
         printf("\nElements present in the Queue: \n");
         for (int i = Front; i <= Rear; i++)
               printf("%d \n", queue[i]);
         printf("\n");
      }
   }
}