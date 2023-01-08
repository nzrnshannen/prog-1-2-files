#include <stdio.h>
#include <stdlib.h>

void printArray(int[], int);
int *concatenateArray(int[], int[], int, int);

int main()
{
	int n1, n2;
	printf ("Enter size of the first array: ");
	scanf ("%d", &n1);
	printf ("Enter size of the second array: ");
	scanf ("%d", &n2);
	
	int Left[n1], Right[n1];
	int i;
	
	printf ("\nEnter %d elements for the first array: \n", n1);
	for(i=0; i<n1; i++)
	{
		printf ("element - %d: ", i+1);
		scanf ("%d", &Left[i]);
	}
	
	printf ("\nEnter %d elements for the second array: \n", n2);
	for(i=0; i<n2; i++)
	{
		printf ("element - %d: ", i+1);
		scanf ("%d", &Right[i]);
	}
	
	printf ("\n\nFirst array: ");
	printArray(Left, n1);
	printf ("\nSecond array: ");
	printArray(Right, n2);
	
	int *ptr = concatenateArray(Left, Right, n1, n2);
	printf ("\n\nAfter concatenating: ");
	printArray(ptr, n1+n2);

	free(ptr);
	ptr = NULL;
	return 0;
}

void printArray(int arr[], int n)
{
	int i;
	for(i=0; i<n; i++)
	{
		printf ("%d ", arr[i]);
	}
}

int *concatenateArray(int arr1[], int arr2[], int n1, int n2)
{
	int i, j;
	int n = n1+n2;
	
	
	int *resultantArr = (int*)malloc(sizeof(int)*(n1+n2));
	
	int k = 0;
	
	for(i=0; i<n1; i++)
	{
		resultantArr[k++] = arr1[i];
	}
	
	for(j=0; j<n2; j++)
	{
		resultantArr[k++] = arr2[j];
	}
	
	
	return resultantArr;
}

