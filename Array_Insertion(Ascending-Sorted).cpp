/*
	(Sorted) Insertion in an already-sorted array
*/

#include <stdio.h>
int main()
{
	int arr1[100], i, n, p, inval;
	printf ("Input the size of array: ");
	scanf ("%d", &n);
	
	printf ("Input %d elements in the array in ascending order:\n", n);
	for (i=0; i<n; i++)
	{
		printf ("element - %d: ", i);
		scanf ("%d", &arr1[i]);
	}
	printf ("Input the value to be inserted: ");
	scanf ("%d", &inval);
	
	printf ("\nThe existing array list is:\n");
	for (i=0; i<n; i++)
	{
		printf ("%3d", arr1[i]);
	}
	
	//determining position
	for (i=0; i<n; i++)
	{
		if (inval < arr1[i])
		{
			p = i;
			break; //will go out of the loop since we have determined the position already
		}
		else
		{
			p = i+1;
		}
	}
	
	//move all data at the right side of the array
	
	arr1[n+1];
	for (i=n; i>p; i--) //will stop moving to the right side if 
		arr1[i] = arr1[i-1];
	
	arr1[p] = inval; //putting the value in the designated position
	
	printf ("\n\nAfter insertion, the list is:\n");
	for (i=0; i<=n; i++)
	{
		printf ("%3d", arr1[i]);
	}
	
}