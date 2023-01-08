#include <stdio.h>
#include <stdlib.h>
void printArray(int*, int);
void selectionSort(int*, int);
int main()
{
	int i, n, *ptr;
	printf ("Enter number of elements: ");
	scanf ("%d", &n);
	ptr = (int*) malloc (sizeof(int)*n);
	printf ("Input %d elements in the array:\n ", n);
	for(i=0; i<n; i++)
	{
		printf ("element - %d: ", i);
		scanf ("%d", (ptr+i));
	}
	
	printf ("\nGiven array: ");
	printArray(ptr, n);
	
	selectionSort(ptr, n);
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

void selectionSort(int *ptr, int n)
{
	int i, j, temp, min_pos;
	
	for (i=0; i<n; i++)
	{
		min_pos = i;
		for(j=i+1; j<n; j++)
		{
			if (*(ptr+j)<*(ptr+min_pos))
			{
				min_pos = j;
			}
		}
		
		temp = *(ptr+min_pos);
		*(ptr+min_pos) = *(ptr+i);
		*(ptr+i) = temp;
	}
}