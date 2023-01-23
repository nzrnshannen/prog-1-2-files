#include <stdio.h>
#include <stdlib.h>

struct node{
	int data;
	struct node *address;	
};

struct node *head, *currentNode, *prevNode, *nextNode, *newNode, *temp;

int main()
{
	head = NULL;
	int choice=1;
	do{
	
	input:
		newNode=(struct node*)malloc(sizeof(struct node));
		printf ("Enter data: ");
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
		
		printf ("\nDo you want to continue? [1] Yes   [2] No\n");
		printf ("\tChoice: ");
		scanf("%d", &choice);
		
		if(choice==1)
		{
			printf("\n");
			goto input;
		}
	
	}while(choice==1);
	
	temp = head;
	
	printf ("\nBefore reversing: ");
	while(temp!=NULL)
	{
		printf ("%d ", temp->data);
		temp = temp->address;
	}
	
	temp = head;
	
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
	
	temp = head;
	
	printf ("\n\nAfter reversing: ");
	while(temp!=NULL)
	{
		printf ("%d ", temp->data);
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