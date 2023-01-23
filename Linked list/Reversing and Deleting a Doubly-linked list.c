#include <stdio.h>
#include <stdlib.h>

struct node{
	int data;
	struct node *prev;
	struct node *next;	
};

void deleteAtBeginning();
void deleteAtEnd();
void deleteAtPos(int);
void displayFunc();
void pressAnyKey();
void reverseDLL();

struct node *head, *tail, *newNode, *temp, *currentNode, *nextNode;

int main()
{
	head = NULL;
	int i=1, pos, n;
	printf ("Enter number of nodes: ");
	scanf ("%d", &n);
	
	while(i<=n)
	{
		newNode=(struct node*)malloc(sizeof(struct node));
		printf ("Enter data %d: ", i++);
		scanf ("%d", &newNode->data);
		
		newNode->prev=NULL;
		newNode->next=NULL;
		
		if(head==NULL)
		{
			head=tail=newNode;
		}
		else
		{
			newNode->prev=tail;
			tail->next=newNode;
			tail=newNode;
		}
	}
	
	displayFunc();
	printf ("Now reversing the linked list...\n");
	reverseDLL();
	displayFunc();
	printf ("Now deleting the node at the beginning...\n");
	deleteAtBeginning();
	displayFunc();
	printf ("Now deleting the node at the end...\n");
	deleteAtEnd();
	displayFunc();
	
	enterPos:
	printf ("\nEnter a position: ");
	scanf ("%d", &pos);
	
	if(pos<=0 || pos>n)
	{
		printf ("\n\nInvalid position. Please try again.\n\n");
		goto enterPos;
	}
	
	printf ("Now deleting the node at the given position...\n");
	deleteAtPos(pos);
	displayFunc();
	
	free(head);
	free(temp);
	free(newNode);
	free(currentNode);
	free(nextNode);

	head=temp=newNode=currentNode=nextNode=NULL;
	
	return 0;
}

void deleteAtBeginning()
{
	struct node *freeThisNode;
	freeThisNode = head;
	head = head->next;
	head->prev = NULL;
	free(freeThisNode);
	pressAnyKey();
}

void deleteAtEnd()
{
	struct node *freeThisNode;
	freeThisNode = tail;
	tail = tail->prev;
	tail->next= NULL;
	free(freeThisNode);
	temp = head;
	pressAnyKey();
}


void deleteAtPos(int pos)
{
	int i=1;
	struct node *freeThisNode;
	
	temp = head;
	
	while(i<pos)
	{
		temp=temp->next;
		i++;
	}
	
	freeThisNode = temp;
	temp->prev->next = temp->next;
	temp->next->prev = temp->prev;
	free(freeThisNode);
	
	temp = head;
	pressAnyKey();
}

void displayFunc()
{
	temp = head;
	printf ("Now displaying the doubly-linked list...\n");
	int i =1;
	while(temp!=NULL)
	{
		printf ("Data %d: %d\n", i++, temp->data);
		temp = temp->next;
	}
	temp = head;
	pressAnyKey();
}

void pressAnyKey()
{
	printf ("\n\nPress any key to continue- ");
	getch();
	printf ("\n\n");
}

void reverseDLL()
{
	currentNode = head;
	while(currentNode!=NULL)
	{
		nextNode=currentNode->next;
		currentNode->next=currentNode->prev;
		currentNode->prev=nextNode;
		currentNode=nextNode;
	}
	
	currentNode = head;
	head = tail;
	tail = currentNode;
	
	pressAnyKey();
}