#include <stdio.h>
int main()
{
	int n;
	printf ("Input the number of elements to be stored in the array: ");
	scanf ("%d", &n);
	
	int arr[n], i, j, c = 0, dupCount = 0;
	printf ("Input %d elements in the array:\n");
	for(i=0; i<n; i++)
	{
		printf ("element - %d: ", i+1);
		scanf ("%d", &arr[i]);
	}
	
	for(i=0; i<n; i++)
	{
		c = 1;
		for(j=i+1; j<n; j++)
		{
			if (arr[i]==arr[j] && (arr[i] > 0 && arr[j]> 0))
			{
				c++;
				arr[i] = arr[j] = -1;
			}
		}
		
		if (c==2)
		{
			dupCount++;
		}
	}
	
	printf ("\nTotal number of duplicate elements found in the array is: %d", dupCount);
	
	return 0;
}