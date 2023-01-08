#include <stdio.h>

void printArray(int[], int);
void shellSort(int[], int);
void swap(int *a, int *b);

int main()
{
	int n;
	printf ("Enter number of elements: ");
	scanf ("%d", &n);
	
	int i, arr[n];
	printf ("Input %d elements in the array:\n", n);
	for (i=0; i<n; i++)
	{
		printf ("element - %d: ", i+1);
		scanf ("%d", &arr[i]);
	}
	
	printf ("\nThe given array is: ");
	printArray(arr, n);
	
	shellSort(arr, n);
	
	printf ("The array after using shell sort is: ");
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

void shellSort(int arr[], int n)
{
	int i, j, gap;
	
	for (gap = n/2; gap >= 1; gap/=2)
	{
		for (j=gap; j<n; j++)
		{
			for (i=j-gap; i>=0; i = i- gap)
			{
				if (arr[i+gap]>arr[i])
				{
					break;
				}
				
				else
				{
					swap(&arr[i+gap], &arr[i]);
				}
			}
		}
	}
}

void swap(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}