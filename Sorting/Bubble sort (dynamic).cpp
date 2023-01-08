#include <stdio.h>
#include <stdlib.h>
void printArray(int*, int);
void bubbleSort(int*, int);
int main()
{
	int i, n, *ptr;
	printf ("Enter number of elements: ");
	scanf ("%d", &n);
	ptr = (int*) malloc (sizeof(int)*n);
	printf ("Input %d elements in the array:\n", n);
	for(i=0; i<n; i++)
	{
		printf ("element - %d: ", i);
		scanf ("%d", (ptr+i));
	}
	
	printf ("\nGiven array: ");
	printArray(ptr, n);
	
	bubbleSort(ptr, n);
	printf ("\nSorted array: ");
	printArray(ptr, n);
	
	free(ptr);
	ptr = NULL;
	return 0;
}

void printArray(int *ptr, int n)
{
	int i;
	for(i=0; i<n; i++)
	{
		printf ("%d ", *(ptr+i));
	}
	printf ("\n");
}

void bubbleSort(int *ptr, int n)
{
	int i, j;
	
	for(i=0; i<n; i++)
	{
		for(j=0; j<n-1; j++)
		{
			int temp;
			if (*(ptr+j)>*(ptr+j+1))
			{
				temp = *(ptr+j);
				*(ptr+j) = *(ptr+j+1);
				*(ptr+j+1) = temp;
			}
		}
	}
}
