#include <stdio.h>
#include <stdlib.h>

struct node{
	int data;
	struct node *next;
};

struct node *head, *temp, *newNode, *prevNode, *currentNode, *nextNode;
int n;

void displayFunc();
void reverseFunc();



int main()
{
	head=NULL;
	int i=1;
	printf ("Input the number of nodes: ");
	scanf ("%d", &n);
	
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
	
	printf ("\n\nData entered in the list are:\n");
	displayFunc();
	printf ("\n\nThe list in reverse: \n");
	reverseFunc();
	displayFunc();
	
}

void reverseFunc()
{
	prevNode=NULL;
	nextNode=currentNode=head;
	
	while(nextNode!=NULL)
	{
		nextNode=nextNode->next;
		currentNode->next = prevNode;
		prevNode=currentNode;
		currentNode=nextNode;
	}
	
	head=prevNode;
}
void displayFunc()
{
	temp=head;
	int i=1;
	
	while(temp!=NULL)
	{
		printf ("Data = %d\n", temp->data);
		temp=temp->next;
	}
	
	temp=head;
}