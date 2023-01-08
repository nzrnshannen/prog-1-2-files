/*
	1. Checks the first index while traversing the whole index if it has some partnering numbers.
	2. The i will be representing each value from the index
	3. 2nd for loop will help in traversing throughout the entire array (for checking purposes)
	4. ctr will be initialized to 0 again upon moving on to the 2nd index (for the first for loop).
*/

#include <stdio.h>
int main()
{
	int arr1[100], n, ctr =0;
	int i, j, k;
	
	printf ("Input the number of elements to be stored in the array: ");
	scanf ("%d", &n);
	
	printf ("Input %d elements in the array:\n", n);
	
	//or arr1[n]
	
	for (i=0; i<n; i++)
	{
		printf ("element - %d: ", i);
		scanf ("%d", &arr1[i]);
	}
	
	printf ("\nThe unique elements found in the array are: \n");
	
	for(i=0; i<n;i++)
	{
		ctr=0;
		
		for (j=0, k=n; j<k+1; j++) //will still work without the k+1, just k only
		{
			if (i!=j)
			{
				if (arr1[i]==arr1[j])
				{
					ctr++;
				}
			}
		}
		
		if (ctr==0)
		{
			printf ("%d ", arr1[i]);
		}
	}
	
	return 0;
}