#include <stdio.h>
void printArray(int[], int);
void segregateFunc(int[], int, int, int);

void segregateFunc(int arr[], int n, int n0, int n1)
{
	int i, j, k;
	int Left[n0], Right[n1];
	
	for (i=0; i<n; i++)
	{
		if(arr[i]==0)
		{
			Left[j++] = arr[i];
		}
	}
	
	for (i=0; i<n; i++)
	{
		if (arr[i]==1)
		{
			Right[k++] = arr[i];
		}
	}
	
	k = 0;
	
	int segregate[n];
	
	for (i=0; i<n0; i++)
	{
		segregate[k++] = Left[i];
	}
	
	for (j = 0; j < n1; j++)
	{
		segregate[k++] = Right[j];
	}
	
	printf ("\n");
	
	for (i=0; i<n; i++)
	{
		arr[i] = segregate[i];
	}
}


void printArray(int arr[], int size)
{
	int i;
	for (i=0; i<size; i++)
	{
		printf ("%d ", arr[i]);
	}
	printf ("\n");
}

int main()
{
	int n;
	printf ("Enter number of elements: ");
	scanf ("%d", &n);
	
	int arr[n], n0, n1, i = 0, j = 0, k = 0, segregate[n];
	printf ("Input %d elements for the array:\n", n);
	for (i=0; i<n; i++)
	{
		input:
		printf ("element - %d: ", i+1);
		scanf ("%d", &arr[i]);
		
		if (arr[i]!= 0 && arr[i]!= 1)
		{
			printf ("\nWrong input located in element [%d]. Try again.\n", i+1);
			goto input;
		}
		else
		{
			if (arr[i]==0)
				n0++;
			else
				n1++;
		}
	}

	
	printf ("\n\nThe given array: ");
	printArray(arr, n);
	
	segregateFunc(arr, n, n0, n1-1);
	printf ("\n\nThe segregated array: ");
	printArray(arr, n);
	
	return 0;
}