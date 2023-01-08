/*
mergeSort(a, lb, ub)
{
	if (lb<ub)
	{
		mid = (lb + ub) / 2
		
		mergeSort(a, lb, mid)
		mergeSort(a, mid+1, ub)
		
		merge (a, lb, mid, ub)
	}
	
	
	1. 
}

*/


#include <stdio.h>

void mergeSort (int[], int, int);
void merge(int[], int, int, int);
void printArray(int[], int);

int main()
{
	int n, i;
	printf ("Input number of elements: ");
	scanf ("%d", &n);
	
	int arr[n];
	printf ("Enter %d elements in the array:\n", n);
	for (i=0; i<n; i++)
	{
		printf ("element - %d: ", i+1);
		scanf ("%d", &arr[i]);
	}
	printf ("\n");	
	printf ("The given array is: ");
	printArray(arr, n);
	
	mergeSort(arr, 0, n-1);
	printf ("\nThe list after using merge sort: ");
	printArray(arr, n);
}

void printArray(int arr[], int n)
{
	int i;
	for(i=0; i<n; i++)
	{
		printf ("%d ", arr[i]);
	}
	printf ("\n\n");
}

void mergeSort(int arr[], int lb, int ub)
{
	if (lb<ub)
	{
		int mid;
		mid = (lb+ub)/2;
		
		mergeSort(arr, lb, mid);
		mergeSort(arr, mid+1, ub);
		
		merge(arr, lb, mid, ub);
	}
}

void merge(int arr[], int lb, int mid, int ub)
{
	int i, j, k;
	int n1, n2;
	n1 = mid - lb + 1; //size for left sub-array
	n2 = ub - mid;

	
	int Left[n1], Right[n2];

	for (i=0; i<n1; i++)
		Left[i] = arr[lb + i];
	
	for (j=0; j<n2; j++)
		Right[j] = arr[mid+1+j];
	
	i = 0;
	j =  0;
	k = lb;
	
	while (i<n1 && j<n2)
	{
		if (Left[i]<=Right[j])
		{
			arr[k] = Left[i];
			i++;
		}
		else
		{
			arr[k] = Right[j];
			j++;
		}
		k++;
	}
	
	if (i > n1)
	{
		while (j<n2)
		{
			arr[k] = Right[j];
			j++;
			k++;
		}
	}
	
	else
	{
		while (i<n1)
		{
			arr[k] = Left[i];
			i++;
			k++;
		}
	}
}