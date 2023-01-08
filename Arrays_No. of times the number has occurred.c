#include <stdio.h>

int searchNum (int arr[], int n, int search_num)
{
	int c = 0, i;
	
	for(i=0; i<n; i++)
	{
		if(search_num == arr[i])
			c++;
		else
			continue;
	}
	
	if (c!=0)
	{
		return c;
	}
	
	else
	{
		printf ("\n\nThe number %d can't be found in the given array.", search_num);
		return 0;
	}
}

int main()
{
	int n, search_num, i;
	printf ("Enter number of elements: ");
	scanf ("%d", &n);
	
	int arr[n];
	printf ("Input %d elements in the array:\n");
	for (i=0; i<n; i++)
	{
		printf ("element - %d: ", i+1);
		scanf ("%d", &arr[i]);
	}
	
	printf ("\n\nThe given array: ");
	for(i=0; i<n; i++)
	{
		printf ("%d ", arr[i]);
	}
	
	printf ("\n\n");
	
	printf ("Enter a number to search: ");
	scanf ("%d", &search_num);
	
	printf ("\n\nThe number %d occurs %d times in the given array.", search_num, searchNum(arr, n, search_num));
	
	return 0;
}