/*
	A C program using insertion sort in a different function, and returning arrays as pointers.
*/

#include <stdio.h>
int *insertionSort(int[], int); //function prototype

int main()
{
	int n, i;
	printf ("How many elements would you like to input? ");
	scanf ("%d", &n);
	
	int arr[n];
	printf ("Input %d elements:\n", n);
	for (i=0; i<n; i++)
	{
		printf ("\telement [%d]: ", i);
		scanf ("%d", &arr[i]);
	}
	
	printf ("\n\nSorted array:\n");
	
	int *result = insertionSort(arr, n); //an address will be returned that's why result is declared as a pointer because it holds that address
	
	for(i=0; i<n; i++)
	{
		printf ("\tarr[%d]: %d\n", i, *result);
		result++;
	}
	
	return 0;
}

int *insertionSort(int arr[], int s) //arr[] is treated like a pointer
{
	int i, j;
	int key;

	for (i=1; i<s; i++)
	{
		key = arr[i];
		for(j=i-1; j>=0 && arr[j]>key; j--)
		{
			arr[j+1] = arr[j];
		}	
		
		arr[j+1] = key;
	}
	
	return arr; //returning the base address of arr
}