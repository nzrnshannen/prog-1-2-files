#include <stdio.h>
int main()
{
	int n;
	printf ("Input the number of elements to store in the array: ");
	scanf ("%d", &n);
	int i, arr[n];
	for(i=0; i<n; i++)
	{
		printf ("element - %d: ", i+1);
		scanf ("%d", &arr[i]);
	}
	
	int *ptr = arr, sum = 0;
	
	printf ("\n");
	
	for (i = 0; i < n; i++)
	{
		sum += *(ptr+i);
	}
	
	printf ("The sum of array is: %d", sum);
	
	return 0;
}