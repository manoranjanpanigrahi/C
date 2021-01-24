#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *rlink,*llink;
};
typedef struct node n;
void display();
n *deleteaft();
int main()
{
	n *ptr,*head=NULL,*current;
	int ch,sw,fh=0;
	while(1)
	{
		ptr=(n*)malloc(sizeof(n));
		printf("\nEnter the data: ");
		scanf("%d",&ptr->data);
		ptr->rlink=NULL;
		ptr->llink=NULL;
		if(head==NULL)
		{
			head=ptr;
			current=ptr;
		}
		else
		{
			current->rlink=ptr;
			ptr->llink=current;
			current=ptr;
		}
		fh++;
		printf("\nDo you want to continue? Y=1 / N=0 : ");
		scanf("%d",&ch);
		if(ch!=1)
			break;
	}
	while(1)
	{
		printf("\n\n1.Display\n2.Delete after a given data\n3.Exit");
		printf("\nENTER A CHOICE: ");
		scanf("%d",&sw);
		switch(sw)
		{
			case 1:
				display(head);
				break;
			case 2:
				head=deleteaft(head);
				break;
         case 3:
            exit(0);
			default:
				printf("Enter proper choice");
		}
	}
}
void display(n*head)
{
	n* x;
	x=head;
	printf("\n");
	printf("The list is :");
	while(x!=NULL)
	{
		printf(" %d ",x->data);
		x=x->rlink;
	}
}
n *deleteaft(n *head)
{
	n *x,*y;
	x=head;
	int i,j;
	printf("\nEnter the data after which the data is to be deleted: ");
	scanf("%d",&i);
	while(x->data!=i)		
	{
		x=x->rlink;
	}
	x->rlink->rlink->llink=x;
	x->rlink=x->rlink->rlink;
	x->rlink->rlink=NULL;
	x->rlink->llink=NULL;
		
	return head;
	printf("head is : %d", head);
}