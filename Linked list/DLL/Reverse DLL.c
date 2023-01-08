#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

struct node{
	int data;
	struct node *prev;
	struct node *next;
};

struct node *head, *tail, *temp, *newNode, *currentNode, *nextNode, *prevNode;

void displayFunc();
void reverseOrder();

int main()
{
	head=NULL;
	int i=1, n;
	
	printf ("Input the number of nodes: ");
	scanf("%d", &n);
	while(i<=n)
	{
		newNode=(struct node*)malloc(sizeof(struct node));
		printf("Input data for node %d: ", i++);	
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
	
	printf ("\nData entered on the list are: \n");
	displayFunc();
	
	printf ("\n\nNow reversing the list...\n");
	printf ("\nPress any key to continue- ");
	getch();
	reverseOrder();
	printf ("\nReverse operation successfully done.\n\n");
	printf ("\nNew list:\n");
	displayFunc();
}

void displayFunc()
{
	int i=1;
	temp=head;
	while(temp!=NULL)
	{
		printf ("node %d: %d\n", i++, temp->data);
		temp=temp->next;
	}
}

void reverseOrder()
{
	currentNode=nextNode=head;
	prevNode=NULL;
	
	while(currentNode!=NULL)
	{
		nextNode=nextNode->next;
		currentNode->next=prevNode;
		prevNode=currentNode;
		currentNode=nextNode;
	}
	
	currentNode=head;
	head=tail;
	tail=currentNode;
}