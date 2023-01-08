/*
	A C program to find the second largest element in the array.
*/

#include <stdio.h>
int main()
{
	int arr1[50], n, i, j = 0, lrg, lrg2nd;
	
	printf ("Input the size of the array: ");
	scanf ("%d", &n);
	
	for(i=0; i<n; i++)
	{
		printf ("element - %d: ", i);
		scanf ("%d", &arr1[i]);
	}
	
	//finding location of the largest element in the array
	//traversing the whole array to locate the largest number and obtain its index (position - 1)
	lrg = 0;
	for (i=0; i<n; i++)
	{
		if (lrg < arr1[i])
		{
			lrg = arr1[i];
			j = i; //j will store the index of that largest element
		}
	}
	
	
	lrg2nd = 0;
	
	
	//traversing the whole array while locating the 2nd largest element
	for (i=0; i<n; i++)
	{
		if (i==j) //if i is equal to the index of that largest element
		{
		
		//this element in this index will not be compared to other elements
			i++; //ignoring the largest element using its index (pos-1)
			i--;
			
			//or use: continue; instead for this if else
		}
		
		else
		{
			if (lrg2nd < arr1[i])
			{
				lrg2nd = arr1[i];
			}
		}
	}
	
	printf ("\nThe second largest element in the array is: %d", lrg2nd);
	
	return 0;
}