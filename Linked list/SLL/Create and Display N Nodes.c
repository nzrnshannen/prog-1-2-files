#include <stdio.h>
#include <stdlib.h>

struct node{
	int data;
	struct node *next;
};

struct node *head, *temp, *newNode;

int main()
{
	head=NULL;
	int i=1, n;
	
	printf("Input number of nodes: ");
	scanf ("%d", &n);
	
	printf ("\n");
	
	while(i<=n)
	{
		newNode = (struct node*)malloc(sizeof(struct node));
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
	
	i=1;
	
	printf ("\nData entered in the list: \n");
	temp=head;
	while(temp!=NULL)
	{
		printf ("Data %d: %d\n", i++, temp->data);
		temp=temp->next;
	}
	
	free(head);
	free(temp);
	
	return 0;
	
	
}