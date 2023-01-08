#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void printArray(int arr[], int size)
{
	int i;
	for(i=0; i<size; i++)
	{
		printf ("%d ", arr[i]);
	}
	printf ("\n\n");
}

int main()
{
	int n, i, j, c;
	printf ("Input number of elements: ");
	scanf ("%d", &n);
	int arr[n];
	printf ("Input %d elements in the array:\n", n);
	for (i=0; i<n; i++)
	{
		printf ("element - %d: ", i+1);
		scanf ("%d", &arr[i]);
	}
	
	printf ("\n\n");
	printArray(arr, n);
	
	int repeating[n], max = 0, maximumNumber;
	for (i=0; i<n; i++)
	{
		c = 1;
		for(j=i+1; j<n; j++)
		{
			if(arr[i]==arr[j])
			{
				arr[j] = -1;
				c++;
			}
		}
		if (max<c)
		{
			max = c;
			maximumNumber = arr[i];
		}
		else if (max == c)
		{
			printf ("\nTwo numbers are equivalent.");
			exit(1);
		}
		
		repeating[i] = c;
		c = 0;
	}
	
	printf ("\nThe maximum number is: %d", maximumNumber);
	getch();
}