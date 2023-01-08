#include <stdio.h>

int main()
{
	int n;
	printf ("Input number of elements to store in the array: ");
	scanf ("%d", &n);
	
	int arr[n], i, j;
	printf ("Input %d number of elements in the array:\n", n);
	
	for (i=0; i<n; i++)
	{
		printf ("element - %d: ", i+1);
		scanf ("%d", &arr[i]);
	}
	
	int *ptr = arr;
	
	//sorting
	
	for (i=0; i<n; i++)
	{
		for (j=0; j<n-1; j++)
		{
			int temp;
			
			if (*ptr+j > *(ptr+(j+1)))
			{
				temp = *(ptr+j);
				*(ptr+j) = *(ptr+(j+1));
				*(ptr+(j+1)) = temp;
			}
		}
	}
	
	printf ("\n\nThe elements in the array after sorting:\n");
	for (i=0; i<n; i++)
	{
		printf ("%d ", arr[i]);
	}
	
	return 0;
}

