#include <stdio.h>
#include <stdlib.h>

struct node{
	int data;
	struct node *next;
};

struct node *head, *temp, *newNode, *nextNode;
int n;

void displayFunc();

int main()
{
	head=NULL;
	int i=1, pos;	
	printf ("Input the number of nodes: ");
	scanf ("%d", &n);
	
	while(i<=n)
	{
		newNode=(struct node*)malloc(sizeof(struct node));
		
		printf ("Data %d: ", i++);
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
	
	printf ("\nData entered in the list:\n");
	displayFunc();
	
	printf ("\nInput the position to insert a new node: ");
	scanf ("%d", &pos);
	
	newNode = (struct node*)malloc(sizeof(struct node));
	printf ("Input the data to be inserted in the middle: ");
	scanf ("%d", &newNode->data);
	newNode->next=NULL;
	
	i=1;
	
	printf ("\nInsertion completed successfully.\n");
	
	temp=head;
	while(i<pos-1)
	{
		temp=nextNode;
		i++;
	}
	
	newNode->next=temp->next;
	temp->next=newNode;
	
	printf ("\n\nThe new list is:\n");
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