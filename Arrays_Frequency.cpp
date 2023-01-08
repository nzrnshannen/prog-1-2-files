/*
	A program that counts the frequency of each value entered.
*/
#include <stdio.h>
int main()
{
	int arr1[100], fr1[100];
	int n, i, j, ctr;
	
	printf ("Input the number of elements to be stored in the array: ");
	scanf ("%d", &n);
	
	printf ("Input %d elements in the array:\n", n);
	for (i=0; i<n; i++)
	{
		printf ("element - %d: ", i);
		scanf ("%d", &arr1[i]);
		fr1[i] = -1; 
	}
	
	
	//calculations
	for (i=0; i<n; i++)
	{
		ctr = 1; //all numbers by default has a frequency of 1
		for (j=i+1; j<n; j++)
		{
			if (arr1[i]==arr1[j])
			{
				ctr++;
				fr1[j] = 0; //marked as 0 if we see some repeating number
			}
		}
		
		if (fr1[i]!=0) //-1 indicating number of various digits (not the repeating number)
		{
			fr1[i]=ctr;
		}
	}
	
	//printing
	
	printf ("\nThe frequency of all elements of array: \n");
	for(i=0; i<n; i++)
	{
		if (fr1[i]!=0)
			printf("%d occurs %d times\n", arr1[i], fr1[i]);
	}
}