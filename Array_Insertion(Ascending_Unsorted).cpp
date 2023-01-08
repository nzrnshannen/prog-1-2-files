/*
	(UNSORTED) Inserting a value in an already-stored (assuming that is already is) array.
*/

#include<stdio.h>
int main()
{
	int arr[100];
	int n, i, inval, pos;
	printf ("Input the size of array: ");
	scanf ("%d", &n);
	
	printf ("Input %d elements in the array in ascending order:\n", n);
	
	for(i=0; i<n; i++)
	{
		printf ("element - %d: ", i);
		scanf ("%d", &arr[i]);
	}
	
	printf ("Input the value to be inserted: ");
	scanf ("%d", &inval);
	printf ("Input the position where the value is to be inserted: ");
	scanf ("%d", &pos);
	
	printf("The current list of the array:\n");
	for (i=0; i<n; i++)
	{
		printf ("%3d", arr[i]);
	}
	
	for (i=n+1; i>=pos; i--)
	{
		arr[i] = arr[i-1];
	}
	
	arr[pos] = inval;
	
	printf ("\nAfter inserting the element, the new list is:\n");
	for(i=0; i<n+1; i++)
	{
		printf("%3d", arr[i]);
	}
}

/*

ALTERNATIVE (made by me):

#include <stdio.h>
int main()
{
	int n;
	printf ("Input the size of array: ");
	scanf ("%d", &n);
	
	int arr[50];
	int i, j, insertValue, pos;
	
	printf ("Input %d elements in the array in ascending order:\n", n);
	
	for (i=0; i<n; i++)
	{
		printf ("element - [%d]: ", i);
		scanf ("%d", &arr[i]);
	}
	
	printf ("\nInput the value to be inserted: ");
	scanf ("%d", &insertValue);
	printf ("Input the position to where the value will be inserted: ");
	scanf ("%d", &pos);
	
	printf ("\n\nThe current list of the array:\n");
	for (i=0; i<n; i++)
	{
		printf ("%d ", arr[i]);
	}
	
	printf ("\n");
	
	int finalPos = pos - 1;
	
	for (i=n; i>finalPos; i--)
	{
		arr[i] = arr[i-1];
	}
	
	arr[i] = insertValue;

	
	printf ("\n");
	printf ("After inserting the element, the new list is:\n");
	for(i=0; i<n+1; i++)
	{
		printf ("%d ", arr[i]);
	}
	
	return 0;
}

*/