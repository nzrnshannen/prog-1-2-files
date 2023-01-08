#include <stdio.h>
#include <stdlib.h>

void printArray(int*, int);
void shellSort(int*, int);
void swapValues(int*, int*);

int main()
{
	int n, i;
	printf ("Enter number of elements: ");
	scanf ("%d", &n);
	
	int *ptr = (int*) malloc (sizeof(int)*n);
	
	printf ("Enter %d elements for the array:\n", n);
	for(i=0; i<n; i++)
	{
		printf ("element - %d: ", i);
		scanf ("%d", (ptr+i));
	}
	
	printf ("\nGiven array: ");
	printArray(ptr, n);
	
	shellSort(ptr, n);
	
	printf ("\nSorted array: ");
	printArray(ptr, n);
	
	free(ptr);
	ptr = NULL;
	
	return 0;
}

void printArray(int *ptr, int n)
{
	for(int i =0; i<n; i++)
	{
		printf ("%3d", *(ptr+i));
	}
}

void shellSort(int *ptr, int n)
{
	int i, j, gap;
	
	for(gap=n/2; gap>=1; gap/=2)
	{
		for(j=gap; j<n; j++)
		{
			for(i=j-gap; i>=0; i=i-gap)
			{
				if(*(ptr+i+gap)<*(ptr+i))
				{
					swapValues((ptr+i), (ptr+i+gap));
				}
				else
				{
					break;
				}
			}
		}
	}
}

void swapValues(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
