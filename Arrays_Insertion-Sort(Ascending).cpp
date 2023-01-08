#include <stdio.h>
int main()
{
	int n;
	printf ("Input the size of array: ");
	scanf ("%d", &n);
	
	int i, j, arr[n], insertValue;
	
	printf ("Input %d elements in the array in :\n", n);
	for (i=0; i<n; i++)
	{
		printf ("element - %d: ", i);
		scanf ("%d", &arr[i]);
	}
	
	printf ("Input the value to be inserted: ");
	scanf ("%d", &insertValue);
	
	printf ("\nThe existing array list is: ");
	for (i=0; i<n; i++)
	{
		for (j=0; j<n-1; j++)
		{
			if (arr[j]>arr[j+1])
			{
				int temp;
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
	
	for (i=0; i<n; i++)
	{
		printf ("%d ", arr[i]);
	}
	
	int newSize;
	
	newSize = sizeof(arr)/sizeof(arr[0]);
	newSize+=1;
	arr[newSize];
	
	arr[newSize-1] = insertValue;
	
	for (i=0; i<newSize; i++)
	{
		for (j=0; j<newSize-1; j++)
		{
			if (arr[j]>arr[j+1])
			{
				int temp;
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1]= temp;
			}
		}
	}
	
	printf ("\nAfter doing the insertion: ");
	
	for (i=0; i<newSize; i++)
	{
		printf ("%d ", arr[i]);
	}
	return 0;
}