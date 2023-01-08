#include <stdio.h>
#include <stdlib.h>

struct node{
	int data;
	struct node *next;
};

struct node *head, *temp, *newNode;
int n;

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
	
	printf("\n\nData entered in the list are:\n");
	
	temp=head;
	
	while(temp!=NULL)
	{
		printf ("Data = %d\n", temp->data);
		temp=temp->next;
	}
	
	printf ("\n\nTotal number of nodes: %d", n);
	return 0;
}