#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i, n;
	printf ("Enter the number of integers: ");
	scanf ("%d", &n);
	int *ptr = (int*)malloc(n*sizeof(int));
	
	if (ptr==NULL)
	{
		printf ("Memory not available.");
		exit(1);
	}
	
	for (i=0; i<n; i++)
	{
		printf ("Enter an integer: ");
		scanf ("%d", ptr + i); //this is how we store the value
		/*
			1000 (base)
			1004
			1008
			...
			
			ptr is already giving us an address, *ptr is a pointer, 
			if we say ptr, we mean i by address
		*/
	}
	
	for (i=0; i<n; i++)
	{
		printf ("%d ", *(ptr+i));
	}
	
	return 0;
}