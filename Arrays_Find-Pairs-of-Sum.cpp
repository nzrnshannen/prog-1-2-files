#include <stdio.h>
int main()
{
	int n;
	printf ("Input number of elements for the array: ");
	scanf ("%d", &n);
	
	int arr[n];
	printf ("Enter %d elements:\n", n);
	int i, sum, j;
	for(i=0;i<n;i++)
	{
		printf ("element - %d: ", i+1);
		scanf ("%d", &arr[i]);
	}
	
	printf ("\nEnter a sum: ");
	scanf ("%d", &sum);
	
	for (i=0; i<n-1; i++)
	{
		for (j=i+1; j<n; j++)
		{
			if (arr[i]+arr[j]==sum)
			{
				printf ("\nPair of elements can make the given sum by the values: %d %d (index %d and %d).", arr[i], arr[j], i, j);
				return 0;
			}
		}
	}
	
	printf ("\n\nNo pairs can be found."); //means we didn't find any pairs for the sum
	
	return 0;
}