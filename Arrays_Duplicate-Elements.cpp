#include <stdio.h>
int main()
{
	int arr1[100]; //original array
	int arr2[100]; //copies the original array
	int arr3[100]; //will serve as a 'flag'
	int n, mm = 1, ctr = 0;
	int i, j;
	
	printf ("Input the number of elements to be stored in the array: ");
	scanf ("%d", &n);
	
	printf ("Input %d elements in the array:\n", n);
	for (i=0; i<n; i++)
	{
		printf ("element - %d: ", i+1);
		scanf ("%d", &arr1[i]);
	}
	
	//copy the other array;
	for (i=0; i<n; i++)
	{
		arr2[i] = arr1[i]; //arr2 will have the same contents as arr1
		arr3[i] = 0; //arr3 will be filled with all zeroes
	}
	
	//mark the elements as duplicate
	for (i=0; i<n; i++)
	{
		for (j=0; j<n; j++) //1 element from arr1 is being compared to all elements using arr2
		{
			if (arr1[i]==arr2[j]) //arr2 used for traversing
			{
				arr3[j] = mm; //from 0 to mm value
				mm++; //post incrementing incase if there's a duplicate next loop of j
			}
		}
		
		mm = 1; //now comparing the next elements
	}
	
	for (i=0; i<n; i++)
	{
		if (arr3[i]==2)
		{
			ctr++;
		}
	}
	
	printf ("\n\nThe total number of duplicate elements found in the array is: %d", ctr);
	
	return 0;
}