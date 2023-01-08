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
void insertAnyPos();


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
	insertAnyPos();
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

void insertAnyPos()
{
	int i=1, pos;
	printf ("\nEnter any position: ");
	scanf ("%d", &pos);
	
	temp=head;
	while(i<pos-1)
	{
		temp=temp->next;
		i++;
	}
	
	newNode = (struct node*)malloc(sizeof(struct node));
	printf ("Enter data to be inserted at the given position: ");
	scanf ("%d", &newNode->data);
	
	if(pos==1)
	{
		newNode->next=head;
		head->prev=newNode;
		head=newNode;
	}
	else if(pos==n)
	{
		tail->next=newNode;
		newNode->prev=tail;
		tail=newNode;
	}
	else
	{
		newNode->prev = newNode->next = NULL;
		newNode->next=temp->next;
		newNode->prev=temp;
		temp->next=newNode;
		temp->next->prev=newNode;
	}

}