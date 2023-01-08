#include <stdio.h>

void printArray(int arr[], int n)
{
	int i;
	for (i=0; i<n; i++)
	{
		printf ("%d ", arr[i]);
	}
	
	printf ("\n\n");
}
int main()
{
	int n, i, j, c, size = 0, numbers[2];
	printf ("Number of elements to input: ");
	scanf ("%d", &n);
	int a[n], b[n];
	printf ("Input %d elements in the array:\n", n);
	for (i=0; i<n; i++)
	{
		printf ("element - %d: ", i+1);
		scanf ("%d", &a[i]);
		b[i]  = 0;
	}
	
	printf ("\n\nThe given array is: ");
	printArray(a, n);
	
	for (i=0; i<n; i++)
	{
		c = 1;
		for(j=i+1; j<n; j++)
		{
			if (a[i]!=0)
			{
				if (a[i]==a[j])
				{
					c++;
					a[j] = 0;
				}
			}
		}
		b[i] = c;
		size++;
	}
	
	int k = 0;
	j = 0;
//	printArray(a, n);

	for(i=0; i<n; i++)
	{
		if (a[i]!=0 && k < 2)
		{
			if (b[i]>1 && b[i]%2==1)
			{
				numbers[k++] = a[i];
			}
		}
	}
	
	printf ("\nThe two numbers that occur odd number of times: ");
	printArray(numbers, k);
	return 0;
}