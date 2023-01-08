#include <stdio.h>
#include <ctype.h>

int main()
{
	int i, j, n, c =1, countNum[2], k = 0;
	printf ("Number of elements: ");
	scanf ("%d", &n);
	
	int arr[n], copy[n];
	printf ("Enter %d elements in the array:\n",n);
	for(i=0; i<n; i++)
	{
		printf ("element - %d: ", i);
		scanf ("%d", &arr[i]);
		
		copy[i] = arr[i];
	}
	
	printf("\nGiven array: ");
	for(i=0; i<n; i++)
	{
		printf ("%d ", copy[i]);
	}
	
	printf("\n");
	
	for(i=0; i<n && k < 2; i++)
	{
		for(j=i+1; j<n; j++)
		{
			if(copy[i]==copy[j])
			{
				if(copy[i]!=-1)
				{
					c++;
					copy[j] = -1;
				}
			}
		}
		
		if (c%2==1)
		{
			countNum[k] = copy[i];
			k++;
		}
		c=1; 	
	}
	
	printf ("\nThe two numbers occuring odd number of times are: ");
	for(i=0; i<2; i++)
	{
			printf ("%d ", countNum[i]);
	}
}