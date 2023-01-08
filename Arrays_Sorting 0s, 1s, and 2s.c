/*
	Sorting 0s, 1s and 2s
*/

#include <stdio.h>
int main()
{
	int n, countZero, countOne, countTwo;
	printf ("Enter number of elements: ");
	scanf("%d", &n);
	
	int i, arr[n];
	
	printf ("Input %d number of elements in the array:\n", n);
	for(i=0; i<n; i++)
	{
		
	enter_Element:
		printf ("element - %d: ", i+1);
		scanf ("%d", &arr[i]);
		
		if (arr[i] > 2)
		{
			printf ("\nelement %d is not eligible for this sorting. Try entering again.\n", i+1);
			goto enter_Element;
		}
		
		else
			continue;
	}
	
	countZero = countOne = countTwo = 0;
	
	printf ("\n\nThe given array is: ");
	for (i=0; i<n; i++)
	{
		printf ("%d ", arr[i]);
	}
	
	printf ("\n\n");
	
	int j;
	
	for (i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			if (arr[j]>arr[j+1])
			{
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}	
	}
	
	
	printf ("\n\nThe sorted array is: ");
	for(i=0; i<n; i++)
	{
		printf ("%d ", arr[i]);
	}
	
	return 0;
}