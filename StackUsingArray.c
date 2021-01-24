#include<stdio.h>
#include<stdlib.h>  
#include<stdbool.h>
#define MAXSIZE 10                                  //macro to set the MAXSIZE of the stack
 
int Top=-1, stack[MAXSIZE];
void Push();
void Pop();
void show();
int main()
{
    int choice;
    while(1)    
    {
        printf("\n1.Push\n2.Pop\n3.Show\n4.End ");
        printf("\n\nEnter the choice : ");
        scanf("%d",&choice);
        switch(choice)                                              //ask user to choose an option
        {
            case 1: Push();
                    break;
            case 2: Pop();
                    break;
            case 3: show();
                    break;
            case 4: exit(0);
            default: printf("\n Invalid choice!! \n");
        }
    }
}
bool isfull()                                             //function to check if the stack is full.
{
   if(Top == MAXSIZE)
      printf("\n STACK IS FULL!!! ");
   else
      return false;
}
  
void Push()                                                             //push elements to the stack
{
    if(isfull)
    {
        int x;
        printf("\nEnter element to be inserted to the stack : ");
        scanf("%d",&x);
        Top=Top+1;
        stack[Top]=x;
    }
}
  
void Pop()                                                              //pop elements to the stack
{
   bool isempty();                                        //function to check if the stack is empty.
    {   
        if(Top == -1)
            printf("\nError: STACK IS EMPTY!!!..NO ELEMENT TO POP \n");
        else
        {
            printf("\nPOPPED ELEMENT IS :  %d\n",stack[Top]);
            Top=Top-1;
        }
    }
}
  
void show()                                                             //show elements in the stack
{
    bool isempty();
    {
        if(Top == -1)
            printf("\nError: STACK IS EMPTY!!!..NO ELEMENT TO SHOW \n");
        else
        {
            printf("\nElements present in the stack: \n");
            for(int i=Top;i>=0;--i)
                printf("%d\n",stack[i]);
        }
    }
}