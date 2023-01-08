#include <stdio.h>
#include <stdlib.h>

struct node{
	int data;
	struct node *next;
};

struct node *head, *temp, *newNode, *prevNode;

void displayFunc();
void deleteEnd();
int main()
{
	head=NULL;
	int i=1, n;
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
	
	printf("\nLinked list created: ");
	displayFunc();
	
	
	printf ("\n\nDeleted the end node successfully.\n\n");
	
	deleteEnd();
	printf ("\n\nNew linked list:\n");
	displayFunc();
	
	return 0;
	
}

void displayFunc()
{
	temp=head;
	int i=1;
	while(temp!=NULL)
	{
		printf ("Data %d = %d\n", i++, temp->data);
		temp=temp->next;
	}
}

void deleteEnd()
{
	struct node *freeThisNode;
	temp=head;
	while(temp->next!=NULL)
	{
		prevNode = temp;
		temp=temp->next;
	}
	
	freeThisNode = temp;
	prevNode->next = NULL;
	free(freeThisNode);
}