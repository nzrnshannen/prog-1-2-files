#include <stdio.h>
void printArray(int[], int);
void sort(int[], int);

int main()
{
	int i, j, n;
	printf ("Number of elements: ");
	scanf ("%d", &n);
	int arr[n];
	
	printf ("Input %d elements in the array:\n", n);
	for (i=0; i<n; i++)
	{
		printf ("element - %d: ", i+1);
		scanf ("%d", &arr[i]);
	}
	
	printf ("\n\nThe given array: ");
	printArray(arr, n);
	
	sort(arr, n);
	printf ("\n\n");
	printArray(arr, n);
	
}

void printArray(int arr[], int n)
{
	int i;
	for (i=0; i<n;i++)
	{
		printf ("%d ", arr[i]);
	}
	printf ("\n\n");
}

void sort(int arr[], int n)
{
	int i, j;
	
	for (i=0; i<n; i++)
	{
		for(j=i+1; j<n; j++)
		{
			int temp;
			if (arr[i]==0)
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}