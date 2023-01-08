#include <stdio.h>

void printArray(int[], int);
void quickSort (int[], int , int);
int partitionFunc(int[], int, int);
void swap (int*, int*);

int main()
{
	int n, i;
	printf ("Number of elements: ");
	scanf ("%d", &n);
	
	int arr[n];
	printf ("Enter %d elements in the array:\n", n);
	for (i=0; i<n; i++)
	{
		printf ("element - %d: ", i+1);
		scanf ("%d", &arr[i]);
	}
	
	printf ("\n\nThe given array is: ");
	printArray(arr, n);
	
	quickSort(arr, 0, n-1);
	
	printf ("\nThe sorted array is: ");
	printArray(arr, n);
}

void printArray(int arr[], int n)
{
	int i;
	for (i=0; i<n; i++)
	{
		printf ("%d ", arr[i]);
	}
	
	printf ("\n\n");
}

void quickSort(int arr[], int lb, int ub)
{
	int loc;
	
	if (lb < ub)
	{
		loc = partitionFunc(arr, lb, ub);
		
		quickSort(arr, lb, loc-1);
		quickSort(arr, loc+1, ub);
	}
}

int partitionFunc(int arr[], int lb, int ub)
{
	int pivot, start, end;
	
	pivot = arr[lb];
	start = lb;
	end = ub;
	
	while (start<end)	
	{
		while (arr[start]<=pivot)
		{
			start++;
		}
			
		while (arr[end]>pivot)
		{
			end--;
		}
		
		if (start<end)
			swap(&arr[start], &arr[end]);
	}
	
	//if (start>end)
		swap(&arr[lb], &arr[end]);
	
	return end;
}

void swap(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}