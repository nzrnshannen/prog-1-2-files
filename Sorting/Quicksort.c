#include <stdio.h>

void swap(int *a, int *b)
{	
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

int partition (int arr[], int lb, int ub)
{
	int pivot = arr[lb];
	int start = lb;
	int end = ub;
	
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
	
	if (start>end)
		swap(&arr[lb], &arr[end]);
	
	return end;
}
void quicksort(int arr[], int lb, int ub)
{
	int loc;
	
	if (lb<ub)
	{
		loc = partition(arr, lb, ub);
		
		quicksort(arr, lb, loc - 1);
		quicksort(arr, loc+1, ub);
		
	}
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
int main()
{
	int n;
	printf ("Enter number of elements: ");
	scanf ("%d", &n);
	
	int arr[n], i, j;
	
	for (i=0; i<n; i++)
	{
		printf ("element - %d: ", i+1);
		scanf ("%d", &arr[i]);
	}
	
	printf ("\nThe given unsorted array is: ");
	printArray(arr, n);
	
	quicksort(arr, 0, n-1);
	
	printf ("\n\nThe sorted aray is: ");
	printArray(arr, n);
}