#include <stdio.h>
#include <stdlib.h>

struct node{
	int data;
	struct node *next;
};

struct node *head, *temp, *freeThisNode, *newNode;

void displayFunc();
void deleteBeginning();

int main()
{
	head=NULL;
	int i=1, n;
	printf ("Enter number of nodes: ");
	scanf ("%d", &n);
	
	while(i<=n)
	{
		newNode=(struct node*)malloc(sizeof(struct node));
		printf ("Enter data for node %d: ", i++);
		scanf("%d", &newNode->data);
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
	deleteBeginning();
	printf ("\n\nDeletion completed succesfully.\n");
	printf ("\nThe new list is:\n");
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
	
	temp=head;
}

void deleteBeginning()
{
	freeThisNode = head;
	head=head->next;
	free(freeThisNode);
}
