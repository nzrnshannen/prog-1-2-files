/*
	A program in C to find the maximum and minimum element in an array.
*/

#include <stdio.h>
int main()
{
	int n;
	printf ("Input the number of elements to be stored in the array: ");
	scanf ("%d", &n);
	printf("Input %d elements in the array:\n", n);
	
	int arr[n];
	int i;
	
	for (i=0; i<n; i++)
	{
		printf("element - %d: ", i);
		scanf ("%d", &arr[i]);
	}
	
	int min, max;
	
	i=0;
	min = max = arr[i];
	
	for (i=1; i<n; i++)
	{
		if (arr[i]< min)
		{
			min = arr[i];
		}
		
		if (arr[i]>max)
		{
			max = arr[i];
		}
	}
	
	printf ("\nMaximum element is: %d", max);
	printf ("\nMinimum element is: %d", min);
}

/*
UPDATED PROGRAM


#include <stdio.h>

void minMax (int[], int, int *, int* );

int main()
{
	int n, min, max;
	printf ("Input number of elements to be stored in the array: ");
	scanf ("%d", &n);
	
	int arr[n], i;
	printf ("Input %d elements in the array:\n", n);
	
	for (i=0; i<n; i++)
	{
		printf ("element - %d: ", i);
		scanf("%d", &arr[i]);
	}
	
	minMax(arr, n, &min, &max);
	
	printf ("\n\nMaximum element: %d\nMinimum element: %d", max, min);
	
	return 0;
}

void minMax (int arr[], int n, int *min, int *max)
{
	int i=0;
	
	*min = arr[i];
	for (i=1; i<n; i++)
	{
		if (arr[i]<*min)
			*min = arr[i];
	}
	
	i = 0;
	*max = arr[i];
	for (i=1; i<n; i++)
	{
		if(arr[i]>*max)
			*max = arr[i];
	}
	
}


*/