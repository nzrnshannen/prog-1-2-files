#include <stdio.h>
#include <stdlib.h>
void printArray(int*, int);
void insertionSort(int*, int);
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
	
	insertionSort(ptr, n);
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

void insertionSort(int* ptr, int n)
{
	int i, j, key;
	
	for(i=1; i<n; i++)
	{
		key = *(ptr+i);
		for(j=i-1; j>=0 && *(ptr+j)>key; j--)
		{
			*(ptr+j+1) = *(ptr+j);
		}
		
		*(ptr+j+1) = key;
	}
}