#include <stdio.h>
void findMajElem(int *arr, int n)
{
	int i, j, majorElem, count, maxCount = 0, key;
	
	for (i=0; i<n; i++) //for traversing
	{
		majorElem = arr[i];
		count = 0;
		
		for (j=0; j<n; j++)
		{
			if (arr[j]==majorElem)
			{
				count++;
			}
		}
		
		if (count > maxCount)
		{
			key = majorElem;
			maxCount = count;
		}
	}
	

	if ((n/2)<maxCount)
	{
		printf ("\nMajority element: %d, appeared %d times.", key, maxCount);
	}
	else
		printf ("There are no majority elements in the given array.");
}

int main()
{
	int n, i;
	printf ("How many elements would you like to input? ");
	scanf ("%d", &n);
	
	int arr[n];
	printf ("\nInput %d elements:\n", n);
	for (i=0; i<n; i++)
	{
		printf ("element - %d: ",i+1);
		scanf ("%d", &arr[i]);
	}
	
	printf ("\n");
	findMajElem(arr, n);
	
	return 0;
}