#include <stdio.h>
#include <stdlib.h>

void printArray(int*, int);
int partitionFunc(int*, int, int);
void quickSort(int*, int, int);
void swapValues(int*, int*);

int main()
{
	int n, i;
	printf ("Enter number of elements: ");
	scanf("%d", &n);
	
	int *ptr= (int*)malloc(sizeof(int)*n);
	
	printf ("Enter %d elements in the array:\n", n);
	for(i=0; i<n; i++)
	{
		printf ("element - %d: ", i);
		scanf ("%d", ptr+i);
	}
	
	printf ("\nGiven array: ");
	printArray(ptr, n);
	
	quickSort(ptr, 0, n-1);
	
	printf ("Sorted array: ");
	printArray(ptr, n);
	
	
	free(ptr);
	ptr = NULL;
	
	return 0;
	
}

void printArray(int *arr, int n)
{
	for(int i =0; i<n; i++)
	{
		printf("%d ", *(arr+i));
	}
	printf ("\n");
}

void swapValues(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

void quickSort(int *arr, int lb, int ub)
{
	if(lb<ub)
	{
		int loc;
		loc = partitionFunc(arr, lb, ub);
		
		quickSort(arr, lb, loc-1);
		quickSort(arr, loc+1, ub);
	}
}

int partitionFunc(int *arr, int lb, int ub)
{
	int pivot, start, end;
	pivot = *(arr+lb);
	start = lb;
	end = ub;
	
	while(start<end)
	{
		while(*(arr+start)<=pivot)
		{
			start++;
		}
		while(*(arr+end)>pivot)
		{
			end--;
		}
		
		if (start<end)
		{
			swapValues(arr+start, arr+end);
		}
	}
	
	if (start>end)
	{
		swapValues(arr+lb, arr+end);
	}
	
	return end;
}
