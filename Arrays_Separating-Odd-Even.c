/*
	Separate odd and even integers in separate arrays.
*/

#include <stdio.h>
int main()
{
	int n;
	printf ("Input the number of elements to b stored in the array: ");
	scanf ("%d", &n);
	
	int arr1[n], evenArr[n], oddArr[n];
	int i, j =0, k=0;
	
	for (i=0; i<n; i++)
	{
		printf ("element - %d: ", i);
		scanf ("%d", &arr1[i]);
	}
	
	
	//calculations
	for (i=0; i<n; i++)
	{
		if (arr1[i]%2==0)
		{
			evenArr[j] = arr1[i];
			j++; //setting the limit for even/determining the length-1 of evenArr
		}
		else
		{
			oddArr[k] = arr1[i];
			k++; //setting the lmit for odd/determining the length-1 of oddArr
		}
	}
	
	printf ("\n\nThe Even elements are:\n");
	for (i=0; i<j; i++)
	{
		printf ("%d ", evenArr[i]);
	}
	
	printf ("\nThe Odd elements are:\n");
	for (i=0; i<k; i++)
	{
		printf ("%d ", oddArr[i]);
	}
	
	return 0;
}