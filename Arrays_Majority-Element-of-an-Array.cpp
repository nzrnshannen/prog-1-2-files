#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int findMajorityElement(int arr[], int n)
{
	int i, j, limit, c, maxCount = 0, majorityElem;
	
	limit = n/2;
	
	for (i=0; i<n ;i++)
	{	
		for (j=i+1, c = 0; j<n; j++)
		{
			if (arr[i]==arr[j])
			{
				c++;
			}
		}
		
		if (c>maxCount)
		{
			maxCount = c;
			majorityElem = arr[i];
		}
	}
	
	if (maxCount<limit)
	{
		printf ("\n\nThere are no majority elements.\n");
		exit(0);
	}
	else
	{
		return majorityElem;
	}
}

int main()
{
	int n, i;
	printf ("Enter no. of elements: ");
	scanf ("%d", &n);
	int arr[n];
	
	printf ("\nInput %d elements:\n", n);
	for (i=0; i<n; i++)
	{
		printf ("element - %d: ", i+1);
		scanf ("%d", &arr[i]);
	}
	
	printf ("\nThe given array is: ");
	
	for (i=0; i<n; i++)
	{
		printf ("%d ", arr[i]);
	}
	
	printf ("\n\n");
	
	int result = findMajorityElement(arr, n);

	printf ("The majority of the element: %d", result);
	
	getch();
	
	return 0;
}