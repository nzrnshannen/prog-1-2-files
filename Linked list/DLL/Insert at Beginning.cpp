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
void insertBeginning();

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
	
	printf ("\nNow inserting node at the beginning...\n");
	printf ("Press any key to continue-  ");
	getch();
	insertBeginning();
	printf ("\nInsertion successfully done.\n");
	printf ("New list:\n");
	displayFunc();
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

void insertBeginning()
{
	newNode=(struct node*)malloc(sizeof(struct node));
	printf ("\nEnter new data to be inserted at the beginning: ");
	scanf ("%d", &newNode->data);
	newNode->prev = newNode->next = NULL;
	
	newNode->next=head;
	head->prev=newNode;
	head=newNode;
}