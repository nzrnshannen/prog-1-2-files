#include <stdio.h>
int main()
{
	int arr1[] = {1, 2, 3, 4, 5, 1};
	int n = sizeof(arr1)/sizeof(arr1[0]);
	int i, j, arr2[n], repeat;
	int k = 0;
	
	printf ("The given array is: ");
	for (i=0; i<n; i++)
	{
		printf ("%d ", arr1[i]);
		arr2[i] = arr1[i];
	}
	
	printf ("\n\n");
	
	for (i=0; i<n; i++)
	{
		repeat = 1;
		for (j=i+1; j<n; j++)
		{
			if (arr1[i]==arr1[j])
			{
				repeat++;
			}
		}
		
		if (repeat>1) //if repeat is 2, meaning that value in index i has appeared twice or more in the array
		{
			arr2[k++] = arr1[i];
		}
	}
	
	printf ("\n\nThe repeating elements are: ");
	for (i=0; i<k; i++)
	{
		printf ("%d ", arr2[i]);
	}
	
	
	return 0;
}