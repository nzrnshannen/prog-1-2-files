#include <stdio.h>

void printArr(int[], int);

int main()
{
	int n;
	printf ("Enter number of elements: ");
	scanf ("%d", &n);
	
	int i, j, arr[n], flag = 0;
	
	printf ("Enter %d elements in the array:\n", n);
	for(i=0; i<n; i++)
	{
		printf ("element - %d: ", i);
		scanf ("%d", &arr[i]);
	}
	
	printf ("\nGiven array: ");
	printArr(arr, n);
	
	printf ("\n");
	
	for (i=0; i<n; i++)
	{
		for(j=i+1; j<n; j++)
		{
			if (arr[i]==arr[j])
			{
				flag = 1;
				arr[i] = -1;
				arr[j] = -1;
			}
		}
		
		if (flag == 0 && arr[i]!= -1)
		{
			printf ("%d ", arr[i]);
		}
		
		flag = 0;
	}
	
}

void printArr(int arr[], int n)
{
	for(int i=0; i<n; i++)
	{
		printf ("%d ", arr[i]);
	}
	printf ("\n");
}