#include <stdio.h>
#include <stdlib.h>

struct node{
	int data;
	struct node *next;
};

void displayFunc();
int searchNode(int);

struct node *head, *temp, *newNode;
int main()
{
	head=NULL;
	int i=1, n, num;
	printf ("Enter number of nodes: ");
	scanf ("%d", &n);
	
	while(i<=n)
	{
		newNode = (struct node*)malloc(sizeof(struct node));
		printf ("Enter data for node %d: ", i++);
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
	
	printf ("\n\nLinked list: \n");
	displayFunc();
	
	printf("\n\nEnter number to be searched at: ");
	scanf ("%d", &num);
	
	int result = searchNode(num);
	
	if(result!=0)
	{
		printf ("\n\nElement found at node %d.\n", result);
	}
	else
	{
		printf ("\n\nElement not found.");
	}
	
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

int searchNode(int num)
{
	temp=head;
	int i=1;
	while(temp!=NULL)
	{
		if(temp->data==num)
		{
			return i;
		}
	
		temp = temp->next;
		i++;
	}
	
	return (0);
}