#include <stdio.h>
#include <stdlib.h>

struct node{
	int data;
	struct node *next;
};

struct node *head, *newNode, *temp, *freeThisNode;

void displayFunc();
void deleteAtPos(int);

int main()
{
	head=NULL;
	int i=1, n, pos;
	printf ("Enter number of nodes: ");
	scanf ("%d", &n);
	
	while(i<=n)
	{
		newNode = (struct node*)malloc(sizeof(struct node));
		printf ("Enter data for node %d: ", i++);
		scanf ("%d", &newNode->data);
		newNode->next=NULL;
		
		if(head==NULL)
		{
			head=temp=newNode;
		}
		else
		{
			temp->next=newNode;
			temp=newNode;
		}
	}
	
	printf ("\n\nData entered in the list are:\n");
	displayFunc();
	
	enterPos:
	printf ("\n\nInput the position of node to delete: ");
	scanf ("%d", &pos);
	
	if(pos>n)
	{
		printf ("\n\nInvalid input. Try again.\n\n");
		goto enterPos;
	}
	
	deleteAtPos(pos);
	printf ("\n\nDeletion completed successfully.\n\n");
	
	printf ("The new list are: \n");
	displayFunc();
	
	return 0;
}

void displayFunc()
{
	int i=1;
	temp=head;
	while(temp!=NULL)
	{
		printf ("Data %d = %d\n", i++, temp->data);
		temp=temp->next;
	}
}

void deleteAtPos(int pos)
{
	int i=1;
	temp=head;
	while(i<pos-1)
	{
		temp=temp->next;
		i++;
	}
	
	freeThisNode = temp->next;
	temp->next=freeThisNode->next;
	free(freeThisNode);
}