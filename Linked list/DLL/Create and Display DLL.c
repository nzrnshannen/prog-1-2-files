#include <stdio.h>
#include <stdlib.h>

struct node{
	int data;
	struct node *prev;
	struct node *next;
};

struct node *head, *tail, *temp, *newNode;

void displayFunc();

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

	free(head);
	free(temp);
	free(newNode);
	free(tail);

	head=temp=newNode=tail=NULL;

	return 0;
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