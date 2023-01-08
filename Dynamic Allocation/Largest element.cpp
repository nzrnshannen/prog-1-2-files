#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n, i;
	printf ("Input total number of elements (1 to 100): ");
	scanf ("%d", &n);
	

	int *ptr = (int*) malloc (sizeof(int)*n);
	
	if (ptr==NULL)
	{
		printf ("Cannot allocate memory from the heap.");
		exit(1);
	}
	
	printf ("\nInput %d elements:\n", n);
	
	for (i=0; i<n; i++)
	{
		printf ("Number %d: ", i+1);
		scanf ("%d", ptr+i);
	}
	
	int lrg;
	
	i =0;
	
	lrg = *(ptr+i);
	
	for(i=1; i<n; i++)
	{
		if (*(ptr+i)>lrg)
			lrg = *(ptr+i);
	}
	
	printf ("\n\nThe largest element is: %.2f", (float)lrg);
	
	free(ptr);
	ptr = NULL;
	
	return 0;
	
}