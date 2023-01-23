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
void deleteMiddle();

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
	printf ("\nNow deleting node at the middle..\n");
	printf ("Press any key to continue-  ");
	getch();
	deleteMiddle();
	printf ("\nDeletion successful.\n");
	printf ("\nNew list:\n");
	displayFunc();

	free(head);
	free(tail);
	free(temp);
	free(newNode);

	head=tail=temp=newNode=NULL;
	
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

void deleteMiddle()
{
	struct node *freeThisNode;
	int i=1, pos;
	enterPos:
	printf ("\n\nEnter any position [middle]: ");
	scanf ("%d", &pos);
	
	temp=head;
	
	if(pos==1 || pos==n)
	{
		printf ("\n\nPosition entered not eligible for this program. Try again.\n\n");
		goto enterPos;
	}
	
	while(i<pos)
	{
		temp=temp->next;
		i++;
	}
	
	freeThisNode=temp;
	temp->prev->next=temp->next;
	temp->next->prev=temp->prev;
	free(freeThisNode);
}
