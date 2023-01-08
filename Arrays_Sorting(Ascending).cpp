/*
	Sorting in ascending order using the bubble sort.
*/

#include <stdio.h>
int main()
{
	int i, j;
	int n;
	printf ("Input the size of array: ");
	scanf ("%d", &n);
	
	int arr[n];
	for (i=0; i<n; i++)
	{
		printf ("element - %d: ", i);
		scanf ("%d", &arr[i]);
	}
	
	for (i=0; i<n; i++)
	{
		for (j=0; j<n-1; j++)
		{
			if (arr[j]>arr[j+1])	
			{
				int temp;
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
	
	printf ("\nElements of array in sorted ascending order:\n");
	
	for (i=0; i<n; i++)
	{
		printf ("%5d", arr[i]);
	}
}