#include <stdio.h>

struct Bank{
	int Account_no;
	char name[100];
	int balance;	
};

int main()
{
	struct Bank customer[3];
	int i;
	
	for(i=0; i<3; i++)
	{
		printf ("Enter Details of Customer %d\n", i+1);
		printf ("------------------------------\n");
		printf ("Account number: ");
		scanf ("%d", &customer[i].Account_no);
		printf ("Name: ");
		scanf (" %[^\n]s", customer[i].name);
		printf ("Balance: ");
		scanf ("%d", &customer[i].balance);
		printf ("\n----------------------------\n\n");
	}
	
	printf ("Customer Details whose Balance < Php 1000.\n");
	printf ("----------------------------------------------\n");
	
	for(i=0; i<3; i++)
	{
		if(customer[i].balance < 1000)
		{
			printf ("Account Number: %d\n", customer[i].Account_no);
			printf ("Name: %s\n", customer[i].name);
			printf ("Balance: %d\n", customer[i].balance);
			printf ("-----------------------------------------\n");
		}
	}
	
	return 0;
}