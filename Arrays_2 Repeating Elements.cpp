#include <stdio.h>
int main()
{
	int n;
	printf ("Enter number of elements: ");
	scanf ("%d", &n);
	
	int i, j, flag = 0, arr[n], c = 2, k;
	printf ("Enter %d elements:\n", n);
	for(i=0; i<n; i++)
	{
		printf ("element - %d: ", i);
		scanf ("%d", &arr[i]);
	}
	
	printf ("\nGiven array:\n");
	for(i=0; i<n; i++)
	{
		printf ("%d ", arr[i]);
	}
	
	printf ("\n\nTwo repeating elements are: ");
	
	for(i=0; i<n; i++)
	{
		for(j=i+1; j<n; j++)
		{
			if(arr[i]==arr[j])
			{
				printf ("%d ", arr[i]);
				arr[i] = -1;
				c++;
			}
		}
		
		if (c==2)
		{
			break;
		}
	}
	
}
