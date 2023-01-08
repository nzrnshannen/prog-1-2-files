#include <stdio.h>
void displayElements(int, int, int[]);

int main()
{
	int n;
	printf ("Input the number of elements to be stored in the array: ");
	scanf ("%d", &n);
	
	int arr[n];
	printf ("\nInput %d elements to be stored in the array:\n", n);
	for(int i=0; i<n ;i++)
	{
		printf ("element - %d: ", i);
		scanf ("%d", &arr[i]);
	}
	
	printf ("\nThe elements in the array are: ");
	displayElements(0, n, arr);
	
	return 0;
}

void displayElements(int i, int num, int arr[])
{
	if(i>=num)
	{
		return;
	}
	else
	{
		printf("%d ", arr[i]);
		displayElements(i+1, num, arr);
	}
}