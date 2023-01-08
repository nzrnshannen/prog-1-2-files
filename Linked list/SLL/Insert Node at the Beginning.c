#include <stdio.h>
#include <stdlib.h>

struct node{
	int data;
	struct node *next;
};

struct node *head, *temp, *newNode;
int n;

void displayFunc();

int main()
{
	head=NULL;
	int i=1;
	
	printf ("Input number of nodes: ");
	scanf ("%d", &n);
	
	while(i<=n)
	{
		newNode=(struct node*)malloc(sizeof(struct node));
		printf ("Input data for node %d: ", i++);
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
	
	printf ("\nData entered in the list are:\n");
	displayFunc();
	
	newNode = (struct node*)malloc(sizeof(struct node));
	printf ("\n\nInput data to insert at the beginning of the list: ");
	scanf ("%d", &newNode->data);
	newNode->next=NULL;
	
	printf ("\n");
	
	newNode->next=head;
	head = newNode;
	
	printf ("Data after inserted in the list are:\n");
	displayFunc();
	
	return 0;
}

void displayFunc()
{
	temp=head;
	
	while(temp!=NULL)
	{
		printf ("Data = %d\n", temp->data);
		temp=temp->next;
	}
}