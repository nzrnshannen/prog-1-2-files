#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i;
	int *ptr = (int *)malloc(2*sizeof(int)); //2 * 4 = 8 bytes (meaming, 2 integers)
	
	if (ptr == NULL)
	{
		printf ("Memory not available.");
		exit(1);
	}
	
	printf ("Enter the two numbers:\n");
	for (i=0; i<2; i++)
	{
		scanf ("%d", ptr + i);
	}
	
	printf ("\n\nFirst set of integers: ");
	for (i=0; i<2; i++)
	{
		printf ("%d ", *(ptr+i));
	}
	
	//memory allocation for 2 more integers
	
//note: we should keep the count of the previously allocted memory:
	ptr = (int *) realloc(ptr, 4*sizeof(int)); //4 * 4 = 16 bytes (meaning, 4 integers: the previous will still be stored and 2 new integers will be stored)
	if (ptr == NULL)
	{
		printf ("Memory not available.");
		exit(1);
	}
	
	printf ("\n\nEnter 2 more integers: \n");
	for (i=2; i<4; i++)
	{
		scanf ("%d", ptr + i);
	}
	
	printf ("\nNew set of integers: ");
	for (i=0; i<4; i++)
	{
		printf ("%d ", *(ptr+i));
	}
}