#include <stdio.h>

int findMaximum(int[], int);

int main()
{
	int n;
	printf ("Enter number of elements: ");
	scanf ("%d", &n);
	
	int arr[n], i;
	printf ("Enter %d elements in the array:\n", n);
	for(i=0; i<n; i++)
	{
		printf ("element - %d: ", i);
		scanf ("%d", &arr[i]);
	}
	
	printf ("\nGiven array: ");
	for(i=0; i<n; i++)
	{
		printf ("%4d", arr[i]);
	}
	printf ("\n");
	
	int result = findMaximum(arr, n);
	
	printf ("\nDifference: %d", result);
	
	return 0;
}

int findMaximum(int arr[], int n)
{
	int i, j, diff = 0;
	
	for(i=0; i<n; i++)
	{
		for(j=i+1; j<n; j++)
		{
			if(diff<(arr[i]-arr[j]))
			{
				diff = arr[i] - arr[j];
			}
		}
	}
	
	
	for(i=0; i<n; i++)
	{
		for(j=n-i-1; j>=0; j--)
		{
			if(diff<arr[j]-arr[i])
			{
				diff = arr[j] - arr[i];
			}
		}
	}
	
	return diff;
}