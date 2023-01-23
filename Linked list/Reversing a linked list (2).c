#include <stdio.h>
#include <stdlib.h>

struct node{
	int data;
	struct node *address;	
};

struct node *head, *newNode, *prevNode, *currentNode, *nextNode, *temp;

int main()
{
	head=NULL;
	int n, i=1;
	printf ("Enter number of nodes: ");
	scanf ("%d", &n);
	
	while(i<=n)
	{
		newNode = (struct node*)malloc(sizeof(struct node));
		printf ("Enter data %d: ", i);
		scanf ("%d", &newNode->data);
		newNode->address = NULL;
		
		if(head==NULL)
		{
			head = temp = newNode;
		}
		else
		{
			temp->address = newNode;
			temp = newNode;
		}
		i++;
	}
	
	temp = head;
	i = 1;
	printf ("\nDisplaying the newly-created linked list:\n");
	
	while(temp!=NULL)
	{
		printf ("Data %d: %d\n", i++, temp->data);
		temp = temp->address;
	}
	
	printf ("\n");
	
	prevNode = NULL;
	currentNode = nextNode = head;
	
	while(nextNode!=NULL)
	{
		nextNode = nextNode->address;
		currentNode->address = prevNode;
		prevNode = currentNode;
		currentNode = nextNode;
	}
	
	head = prevNode;
	
	
	printf ("Displaying the list in reverse order:\n");
	temp = head;
	i=1;
	while(temp!=NULL)
	{
		printf ("Data %d: %d\n", i++, temp->data);
		temp = temp->address;
	}
	
	free(head);
	free(temp);
	free(newNode);
	free(nextNode);
	free(prevNode);
	free(currentNode);

	head=temp=newNode=nextNode=prevNode=currentNode=NULL;
	
	return 0;
}