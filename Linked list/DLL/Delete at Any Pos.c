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
void deleteAnyPos();

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
	printf ("\nNow deleting node at the given position...\n");
	printf ("Press any key to continue-  ");
	getch();
	deleteAnyPos();
	printf ("\nDeletion successful.\n");
	printf ("\nNew list:\n");
	displayFunc();
	
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

void deleteAnyPos()
{
	struct node *freeThisNode;
	int i=1, pos;
	printf ("\n\nEnter any position: ");
	scanf ("%d", &pos);
	
	temp=head;
	
	if(pos==1)
	{
		freeThisNode=head;
		head=head->next;
		head->prev=NULL;
	}
	else if(pos==n)
	{
		freeThisNode=tail;
		tail=tail->prev;
		tail->next=NULL;
	}
	else
	{
		while(i<pos)
		{
			temp=temp->next;
			i++;
		}		
		freeThisNode=temp;
		temp->prev->next=temp->next;
		temp->next->prev=temp->prev;
	}
	
	free(freeThisNode);
}

/*void deleteBeginning()
{
	struct node *freeThisNode;
	freeThisNode=head;
	head=head->next;
	head->prev=NULL;
	free(freeThisNode);
}*/