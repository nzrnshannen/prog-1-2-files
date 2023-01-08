/*
	A C program to check if array 2 is a subset of array 1. 
*/
#include <stdio.h>
int main()
{
	int i, j, arr_size_one, arr_size_two, c = 0;
	printf ("Enter number of elements for array 1: ");
	scanf ("%d", &arr_size_one);
	
	int arr1[arr_size_one];
	printf ("Enter %d elements for array 1:\n", arr_size_one);
	for (i=0; i<arr_size_one; i++)
	{
		printf ("element - %d: ", i+1);
		scanf ("%d", &arr1[i]);
	}
	
	printf ("\nArray 1: ");
	for (i=0; i<arr_size_one; i++)
	{
		printf ("%d ", arr1[i]);
	}
	
arrayTwo:
	printf ("\n\nEnter number of elements for array 2: ");
	scanf ("%d", &arr_size_two);
	
	if (arr_size_two > arr_size_one)
	{
		printf ("Array not eligible for this program. Try entering a differet size.");
		goto arrayTwo;
	}
	
	int arr2[arr_size_two];
	printf ("Enter %d elements for array 2:\n", arr_size_two);
	for (i=0; i<arr_size_two; i++)
	{
		printf ("element - %d: ", i+1);
		scanf ("%d", &arr2[i]);
	}
	
	printf ("\nArray 2: ");
	for(i=0; i<arr_size_two; i++)
	{
		printf ("%d ", arr2[i]);
	}
	
	printf ("\n\n");
	int copy[arr_size_one];
	for (i=0; i<arr_size_one; i++)
	{
		copy[i] = arr1[i];
	}
	
	
	for (i=0; i<arr_size_two; i++)
	{
		for(j=0; j<arr_size_one; j++)
		{
			if (arr2[i]==copy[j])
			{
				c++;
				copy[j] = 0;
			}
		}
	}
	
	if (arr_size_two == c)
	{
		printf ("\nArray 2 is a subset of array 1.");
	}
	else
		printf ("\nArray 2 is not a subset of array 1.");
		
	
	return 0;
}