/*
	A C program wherein it will find the array's 2nd smallest element.
*/

#include <stdio.h>
int main()
{
	int arr[50], n, small, small2nd, i, j;
	
	printf ("Input the size of array: ");
	scanf ("%d", &n);
	printf ("Input %d elements in the array:\n", n);
	for (i=0; i<n; i++)
	{
		printf ("element - %d: ", i);
		scanf ("%d", &arr[i]);
	}
	
	//finding the smallest 
	
	i = 0;
	j = 0;
	small = arr[i];
	for (i=1; i<n; i++)
	{
		if (arr[i]<small)
		{
			small = arr[i];
			j = i;
		}
	}
	
	i = 0;
	j = 0;
	small2nd = 9999; //9999 is a dummy temporary value
	for (i=0; i<n; i++)
	{
		if (i==j)
		{
			continue;
		}
		
		else
		{
			if (arr[i]<small2nd)
			{
				small2nd = arr[i];
			}
		}
	}
	
	printf ("The second smallest element in the array is: %d", small2nd);
	
	return 0;
}