#include <stdio.h>
void printArray(int[], int);
void uniqueElements(int[], int);

int main()
{
	int n, i;
	printf ("Number of elements: ");
	scanf ("%d", &n);
	int arr[n];
	printf ("Input %d elements in the array:\n", n);
	for(i=0; i<n; i++)
	{
		printf ("element - %d: ", i+1);
		scanf ("%d", &arr[i]);
	}
	
	printf ("\n");
	printf ("The given array: ");
	printArray(arr, n);
	
	uniqueElements(arr, n);
}

void printArray(int arr[], int n)
{
	int i;
	for (i=0; i<n; i++)
	{
		printf ("%d ", arr[i]);
	}
	printf ("\n\n");
}

void uniqueElements(int arr[], int n)
{
	int i, j, c;
	for (i=0; i<n; i++)
	{
		for(j=i+1; j<n; j++)
		{
			if(arr[i]==arr[j])
			{
				arr[j] = 0;
			}
		}
	}
	
	int unique[n];
	j =0;
	for (i=0;i<n; i++)
	{
		if(arr[i]!=0)
		{
			unique[j++] = arr[i];
		}
	}
	
	printf ("\nThe unique elements in the given array: ");
	printArray(unique, j);
	
}