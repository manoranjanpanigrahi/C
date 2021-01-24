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

// Given a binary tree, print its nodes in inorder
void inorder(struct node* node) 
{ 
	if (node == 0) 
		return; 
   
	inorder(node->left);                                            //first recur on left child
	printf("%c  ", node->data);                                        //then print the data of node
	inorder(node->right);                                            //now recur on right child
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

	printf("\nInorder traversal of binary tree is : \n"); 
	inorder(root); 
	printf("\n");
} 
