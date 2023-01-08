//create a single linked list with 3 elements
//method 2: head -> link -> link ...

struct node{
	int data;
	struct node *link;
}
#include <stdio.h>
int main()
{
	//first node
	struct node *head = (struct node*) malloc (sizeof(struct node));
	head -> data = 45;
	head -> link = NULL;
	
	//second node
	struct node *current = (struct node*) malloc (sizeof(struct node));
	current -> data = 98;
	current -> link = NULL;
	//linking first node to the second node
	head -> link = current;
	
	//reusing the current pointer to create the third node
	current = (struct node*) malloc (sizeof(struct node)); //allocating memory for the third node
	current -> data = 3; //updating the data part
	current -> link = NULL; //updating the link part
	
	/*using the pointer, we can reach any node on the list
		1. we can reuse the pointer anytime
		2. The 2nd node is not lost, the current pointer is just pointing to the third node
	*/
	
	//linking the 3rd note to the second node
	head -> link -> link = current;
	
	/*
		IMPORTANT TAKEAWAYS
		
		a.) head -> link: gives the address of the next node (but we are still currently on the first node)
		b.) head -> link -> link = current; the link part in the second node will now have the address of
									third node
									
		We have now created linked lists using only one pointer. 
	
	*/
	
	return 0;
}