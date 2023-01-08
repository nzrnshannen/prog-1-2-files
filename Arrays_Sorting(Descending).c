/*
	Sorting elements in descending order using the bubble sort.
*/

#include <stdio.h>
int main()
{
	int n;
	int i, j;
	printf ("Input the size of array: ");
	scanf ("%d", &n);
	
	int arr[n];
	printf ("Input %d elements in the array:\n", n);
	
	for (i=0; i<n; i++)
	{
		printf ("element - %d: ", i);
		scanf ("%d", &arr[i]);
	}
	
	for (i=0; i<n; i++)
	{
		for (j=0; j<n-1; j++)
		{
			if (arr[j]<arr[j+1])
			{
				int temp;
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
	
	printf ("Elements of the array in sorted descending order:\n");
	
	for (i=0; i<n; i++)
	{
		printf ("%d ", arr[i]);
	}
	
}