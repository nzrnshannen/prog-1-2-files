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
	
	int *ptr = arr;
	
	printf ("\n");
	int t = 1;
	printf ("The elements of array in reverse order are:\n");	
	for (i=n-1; i>=0; i--)
	{
		printf ("element - %d: %d\n", t++ , *(ptr+i));
	}
	

	return 0;
}