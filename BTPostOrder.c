// C program for different tree traversals 
#include <stdio.h> 
#include <stdlib.h> 

struct node 
{ 
	int data; 
	struct node* left; 
	struct node* right; 
}; 

//function that allocates a new node with the given data and NULL left and right pointers.
struct node* newNode(int data) 
{ 
	struct node* node = (struct node*) 
	malloc(sizeof(struct node)); 
	node->data = data; 
	node->left = NULL; 
	node->right = NULL; 

	return(node); 
} 

//Given a binary tree, print its nodes according to the postorder traversal.
void postorder(struct node* node) 
{ 
	if (node == 0) 
		return; 
   
	postorder(node->left);                                             // first recur on left subtree
	postorder(node->right);                                           // then recur on right subtree 
	printf("%c  ", node->data);                                          // now deal with the node
} 

void main() 
{ 
	struct node *root   = newNode(65); 
	root->left			  = newNode(66); 
	root->right		     = newNode(67); 
	root->right->left   = newNode(70);
	root->right->right  = newNode(71);
	root->left->left	  = newNode(68); 
	root->left->right   = newNode(69); 

	printf("\nPostorder traversal of binary tree is \n"); 
	postorder(root); 
	printf("\n");
} 
