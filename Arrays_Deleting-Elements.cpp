#include <stdio.h>
int main()
{
	int n;
	printf ("Input the size of array: ");
	scanf ("%d", &n);
	
	int arr1[n];
	int i, pos;
	
	for(i=0; i<n; i++)
	{
		printf ("element - %d: ", i);
		scanf ("%d", &arr1[i]);
	}
	
	printf ("\nInput the position where to delete: ");
	scanf ("%d", &pos);
	
	i = 0;
	
	while (i!=pos-1) //if i is equal to that index (position - 1)
	{
		i++; //determining the index (position - 1)
		
		/*
		position 1 at index 0
		position 2 at index 1
		and so on...
		*/
	}
	
	while (i<n) //the ones who will be moved are the values only on the right side of the deleted portion
	{
		arr1[i] = arr1[i+1]; //replacing it with the right value
		i++;
		
		//last element will be 0 so we decrement n by 1 in order not to be included
		//in the printing
	}
	
//	printf ("\nlast element: %d\n\n", arr1[n-1]);
	n--; //decrementing n because we now have arr[n-1] 
	
	printf ("\nThe new list is: ");
	for (i=0; i<n; i++)
	{
		printf ("%d ", arr1[i]);
	}
	return 0;
}


