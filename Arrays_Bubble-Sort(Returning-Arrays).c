/*
	Bubble Sort but returning arrays 
*/


#include <stdio.h>
int *bubbleSort(int[], int);
int main ()
{
	int i;
	int n;
	printf ("How many integers would you like to input? ");
	scanf ("%d", &n);
	
	int arr[n], size;
	
	printf ("Input %d integers: \n", n);
	for (i=0; i<n; i++)
	{
		printf ("element - %d: ", i);
		scanf ("%d", &arr[i]);
	}
	
	size = sizeof(arr)/sizeof(arr[0]);
	
	int *result = bubbleSort(arr, size);
	
	printf ("\nSorted list: ");
	
	for (*result = arr[0]; *result <= arr[size-1]; result++)
	{
		printf ("%d ", *result);
	}
	return 0;
}

int *bubbleSort (int arr[], int s)
{
	int i, j;
	
	for (i=0; i<s; i++)
	{
		for (j=0; j<s-1; j++)
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
	
	return arr;
}