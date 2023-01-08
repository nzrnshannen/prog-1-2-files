#include <stdio.h>
void findMajElem(int *arr, int n)
{
	int i, IndexOfMajElem = 0, ctr = 1;
	
	for (i=1; i<n; i++)
	{
		if (arr[IndexOfMajElem]==arr[i])
			ctr++;
		else 
			ctr--;
			
		if (ctr == 0)
		{
			IndexOfMajElem = i;
			ctr = 1;
		}
	}
	
	ctr = 0;
	
	for (i=0; i<n; i++)
	{
		if (arr[i] == arr[IndexOfMajElem])
			ctr++;
	}
	
	if (ctr>(n/2))
		printf ("Majority Element: %d\n", arr[IndexOfMajElem]);
	else
		printf ("There are no Majority elements in the given array.");
		
}
int main()
{
	int arr1[] = {4, 4, 4, 8};
	int i, ctr;
	
	ctr = sizeof(arr1)/sizeof(arr1[0]);
	printf ("The given array is: ");
	for(i=0; i<ctr; i++)
	{
		printf ("%d ", arr1[i]);
	}
	
	printf ("\n");
	findMajElem(arr1, ctr);

	return 0;
}