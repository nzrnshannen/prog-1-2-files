#include <stdio.h>

void printArray(int arr[], int n)
{
	int i;
	for (i=0; i<n; i++)
	{
		printf ("%d ", arr[i]);
	}
	printf ("\n");
}
int main()
{
	int n1, n2, i, j = 0, k = 0;
	
	printf ("Number of elements in array 1: ");
	scanf ("%d", &n1);
	
	int arr1[n1];
	printf ("Input %d elements in the array 1: \n", n1);
	for(i=0; i<n1; i++)
	{
		printf ("element - %d: ", i+1);
		scanf ("%d", &arr1[i]);
		k++;
	}
	
	printf ("\nNumber of elements in array 2: ");
	scanf ("%d", &n2);
	
	int arr2[n2];
	for(i=0; i<n2; i++)
	{
		printf ("element - %d: ", i+1);
		scanf ("%d", &arr2[i]);
		k++;
	}
	
	printf ("\nArray 1: ");
	printArray(arr1, n1);
	printf ("Array 2: ");
	printArray(arr2, n2);
	
	int arr[k];
	
	for (i=0; i<n1; i++)
		arr[j++] = arr1[i];
	
	for (i=0; i<n2; i++)
		arr[j++] = arr2[i];
	
	//printf ("%d", j);
	
	printf ("\n\nConcatenated array: ");
	printArray(arr, k);
	
	return 0;
}