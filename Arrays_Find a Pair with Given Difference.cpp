#include <stdio.h>
#include <stdlib.h>

void findPair (int arr[], int n, int diff)
{
	int i, j, flag = -1;
	
	printf ("\nThe given difference is: %d\n", diff);
	
	for (i=0; i<n; i++)
	{
		for (j=i+1; j<n; j++)
		{
			if (arr[i] - arr[j] == diff)
			{
				printf ("\nThe pair are: (%d, %d)", arr[i], arr[j]);
				exit(1);
			}
		}
	}
	
	flag++;
	
	for(i=n-1; i>=0; i--)
	{
		for (j=i-1; j>=0; j--)
		{
			if (arr[i] - arr[j] == diff)
			{
				printf ("\nThe pair are: (%d, %d)", arr[i], arr[j]);
				exit(1);
			}
		}
	}
	
	flag++;
	
	if (flag == 1)
	{
		printf ("\nNo pairs were found for the diff.");
	}
	
}

int main()
{
	int n, i, j, diff;
	printf ("Enter number of elements: ");
	scanf ("%d", &n);
	printf ("Enter a diff: ");
	scanf ("%d", &diff);
	
	int arr[n];
	printf ("Input %d elements:\n", n);
	for (i=0; i<n; i++)
	{
		printf ("element - %d: ", i+1);
		scanf ("%d", &arr[i]);
	}
	
	printf ("\n\nThe given array: ");
	for (i=0; i<n; i++)
		printf ("%d ", arr[i]);
		
	
	printf ("\n\n");
	
	findPair(arr, n, diff);
	
}