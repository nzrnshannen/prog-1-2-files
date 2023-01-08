#include <stdio.h>
#include <stdlib.h>

//selection sort
int main()
{
	int n;
	printf ("Input the number of elements: ");
	scanf ("%d", &n);
	int *ptr = (int*)malloc(n*sizeof(int));
	
	int i, j;
	printf ("Enter %d elements:\n", n);
	for (i=0; i<n; i++)
	{
		printf ("Element - %d: ", i+1);
		scanf ("%d", (ptr+i));
	}
	
	//calculating
	
	for (i=0; i<n-1; i++)
	{
		int minPos = i;
		for (j=i+1; j<n; j++)
		{
			if (*(ptr+minPos)>*(ptr+j))
			{
				minPos = j;
			}
		}
		
		int temp;
		temp = *(ptr+i);
		*(ptr+i) = *(ptr+minPos);
		*(ptr+minPos) = temp;
	}
	
	printf ("\n\nAfter using selection sort:\n");
	
	for (i=0; i<n; i++)
	{
		printf ("%5d", *(ptr+i));
	}
	
	printf ("\n");
	
	free(ptr);
	ptr = NULL;
	
	return 0;
}