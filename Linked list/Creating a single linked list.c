#include <stdio.h>
#include <stdlib.h>

struct node{
	int data;
	struct node *address;
};

int main()
{
	struct node *head;
	head = (struct node*)malloc(sizeof(struct node));
	head->data = 45;
	head->address= NULL;
	
	struct node *current;
	current = (struct node*)malloc(sizeof(struct node));
	current->data = 98;
	current->address = NULL;
	
	head->address = current;
	
	current = (struct node*)malloc(sizeof(struct node))
	current->data = 3;
	current->address = NULL;
	
	head->address->address = current;
	
	return 0;
}

/*
	The head is used for accessing the nodes.
	The current is used as the second pointer and is responsible for creating nodes.


*/