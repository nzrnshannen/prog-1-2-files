#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

struct node{
	int data;
	struct node *prev;
	struct node *next;
};

struct node *head, *tail, *temp, *newNode;
void displayFunc();
void insertEnd();

int main()
{
	head=NULL;
	int i=1, n;
	printf ("Input the number of nodes: ");
	scanf ("%d", &n);
	
	while(i<=n)
	{
		newNode=(struct node*)malloc(sizeof(struct node));
		printf ("Input data for node %d: ", i++);
		scanf ("%d", &newNode->data);
		newNode->prev=NULL;
		newNode->next=NULL;
		
		if(head==NULL)
		{
			head=tail=newNode;
		}
		else
		{
			tail->next=newNode;
			newNode->prev=tail;
			tail=newNode;
		}
	}
	
	printf ("\n\nData entered in the list are:\n");
	displayFunc();
	
	printf ("\nNow inserting node at the end...\n");
	printf ("Press any key to continue-  ");
	getch();
	insertEnd();
	printf ("\nInsertion successfully done.\n");
	printf ("New list:\n");
	displayFunc();

	free(head);
	free(temp);
	free(newNode);
	free(tail);

	head=temp=newNode=tail=NULL;

	return 0;
}

void displayFunc()
{
	temp=head;
	int i=1;
	while(temp!=NULL)
	{
		printf ("Data %d: %d\n", i++, temp->data);
		temp=temp->next;
	}
}

void insertEnd()
{
	newNode=(struct node*)malloc(sizeof(struct node));
	printf ("\nEnter data to be inserted at the end of the list: ");
	scanf ("%d", &newNode->data);
	newNode->prev = newNode->next = NULL;
	
	tail->next=newNode;
	newNode->prev=tail;
	tail=newNode;	
}