#include <stdio.h>
int main()
{
	int i, j, n;
	printf ("Input number of elements: ");
	scanf ("%d", &n);
	
	int arr[n];
	printf ("Input %d elements in the array:\n", n);
	for(i=0; i<n; i++)
	{
		printf ("element - %d: ", i+1);
		scanf ("%d", &arr[i]);
	}
	
	printf ("\nGiven array: ");
	for (i=0; i<n; i++)
		printf ("%d ", arr[i]);
	
	printf ("\n");
	
	int peak = 0;
	for (i=1; i<n; i++)
	{
		if (arr[i]>arr[i-1] && arr[i]>arr[i+1])
		{
			peak = i;
			break;
		}
	}
	
	printf ("\nThe index of the first peak element is: %d", peak);
	
	return 0;
}