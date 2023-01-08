//create a single linked list of 3 elements

//method no. 1 (not applicable when creating no. of nodes)
#include <stdio.h>
#include <stdlib.h>

struct node{
	int data;
	struct node *link;
};

int main()
{
	struct node *head = (struct node*)malloc (sizeof(struct node));
	head -> data = 45;
	head -> link = NULL;
	
	
	//creating 2nd node and making another pointer
	struct node *current = (struct node*)malloc(sizeof(struct node));
	current -> data = 98;
	current -> link = NULL;
	
	//linking the two nodes using the first node
	head -> link = current; 
	
	//creating 3rd node and making another pointer
	struct node *current2 = (struct node*)malloc(sizeof(struct node));
	current2 -> data = 3;
	current2 -> link = NULL;
	
	//linking the two nodes: the 2nd node is used to link to the 3rd node
	current -> link = current2;
	return 0;
}