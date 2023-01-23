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
int findMax();

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
	
	printf ("\nFinding the maximum value in the list...\n");
	printf ("Press any key to continue-  ");
	getch();
	
	int max = findMax();
	
	printf ("\n\nThe maximum number in the list: %d\n", max);
	
	free(head);
	free(temp);
	free(newNode);
	free(tail);

	head=temp=newNode=tail=NULL;
	
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

int findMax()
{
	temp=head;
	int maximumNum=0;
	
	while(temp!=NULL)
	{
		if(temp->data>maximumNum)
		{
			maximumNum = temp->data;
		}
		
		temp=temp->next;
	}
	
	return maximumNum;
}
