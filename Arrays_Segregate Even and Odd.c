#include <stdio.h>

void printArray(int[], int);
void segregateNumbers(int[], int, int, int);

int main()
{
	int n, i, n0, n1;
	printf ("Number of elements: ");
	scanf ("%d", &n);
	
	int arr[n];
	printf ("Enter %d elements in the array:\n", n);
	for (i=0; i<n; i++)
	{
		printf ("element - %d: ", i+1);
		scanf ("%d", &arr[i]);
		
		if (arr[i]%2==0)
		{
			n0++;
		}
		else
		{
			n1++;
		}
	}
	
	printf ("\nThe given array: ");
	printArray(arr, n);
	
	segregateNumbers(arr, n, n0, n1);
	printf ("The new array: ");
	printArray(arr, n);
	
}

void printArray(int arr[], int n)
{
	int i;
	for(i=0; i<n; i++)
	{
		printf ("%d ", arr[i]);
	}
	printf ("\n\n");
}

void segregateNumbers(int arr[], int n, int n0, int n1)
{
	int i, j, k;
	int Even[n0], Odd[n1];
	
	for (i=0; i<n; i++)
	{
		if(arr[i]%2==0)
		{
			Even[j++] = arr[i];
		}
	}
	
	j = 0;
	
	for (i=0; i<n; i++)
	{
		if (arr[i]%2==1)
		{
			Odd[j++] = arr[i];
		}
	}
	
	i = j = k = 0;
	
	while (i<n0 && j<n1)
	{
		if (Even[i]%2==0)
		{
			arr[k] = Even[i];
			i++;
		}
		else
		{
			arr[k] = Odd[j];
			j++;
		}
		k++;
	}
	
	while (i<n0)
	{
		arr[k] = Even[i];
		i++;
		k++;
	}
	
	while (j<n1)
	{
		arr[k] = Odd[j];
		j++;
		k++;
	}
}