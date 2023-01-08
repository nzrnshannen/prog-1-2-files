#include <stdio.h>
int main()
{
	int n;
	printf ("Enter the number of elements: ");
	scanf ("%d", &n);
	
	int arr[n], i, j, flag = 0, nextElem, resultant[n];
	
	printf ("Input %d elements:\n", n);
	for(i=0; i<n; i++)
	{
		printf ("element - %d: ", i);
		scanf ("%d", &arr[i]);
	}
	
	printf("\nThe given array is: ");
	for(i=0; i<n; i++)
	{
		printf ("%3d", arr[i]);
	}
	printf("\n\nThe Next Bigger Elements are:\n");
	
	for(i=0; i<n; i++)
	{
		for(j=i+1; j<n; j++)
		{
			if (arr[i]<arr[j])
			{
				nextElem = arr[j];
				break;
			}
		}
		
		if (i==n-1)
		{
			printf ("Next bigger element of %d in the array is %d\n.", arr[i],-1);
			resultant[i] = -1;
		}
		else
		{
			printf ("Next bigger element of %d in the array is: %d\n", arr[i], nextElem);
			resultant[i] = nextElem;
		}
	}
	
	printf ("\nThe next bigger elements are:\n");
	for(i=0; i<n; i++)
	{
		printf ("%3d", resultant[i]);
	}
	printf ("\n");
	
	return 0;
}