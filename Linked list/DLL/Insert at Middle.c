#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

struct node{
	int data;
	struct node *prev;
	struct node *next;
};

struct node *head, *tail, *temp, *newNode;
int n;

void displayFunc();
void insertMiddle();


int main()
{
	head=NULL;
	int i=1;
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
	
	printf ("\nNow inserting node at the given position...\n");
	printf ("Press any key to continue-  ");
	getch();
	insertMiddle();
	printf ("\nInsertion successfully done.\n");
	printf ("New list:\n");
	displayFunc();

	free(head);
	free(temp);
	free(tail);
	free(newNode);

	head=temp=tail=newNode=NULL;

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

void insertMiddle()
{
	int i=1, pos;
	
	enterPos:
	printf ("\nEnter a position [middle]: ");
	scanf ("%d", &pos);
	
	if(pos==1 || pos==n)
	{	
		printf ("\n\nPosition given not eligible for this program. Try again.\n\n");
		goto enterPos;
	}

	temp=head;
	
	while(i<pos-1)
	{
		temp=temp->next;
		i++;
	}
	
	newNode = (struct node*)malloc(sizeof(struct node));
	printf ("Enter data to be inserted at the given position: ");
	scanf ("%d", &newNode->data);
	
	newNode->next=newNode->prev=NULL;
	
	newNode->next = temp->next;
	newNode->prev=temp;
	temp->next=newNode;
	temp->next->prev=newNode;

}