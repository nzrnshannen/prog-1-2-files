#include <stdio.h>
//think of it that we're just solving for the index numbers/positions

int missingSmallElement (int arr1[], int low_index, int high_index)
{
	if (low_index > high_index)
	{
		return low_index;
	}
	
	int mid_index = low_index + (high_index - low_index)/2;
	
	//recursion:
	if (arr1[mid_index]==mid_index)
	{
		return missingSmallElement(arr1, mid_index+1, high_index);
	}
	else
	{
		return missingSmallElement(arr1, low_index, mid_index-1);
	}
}

int main()
{
	int arr1[] = {0, 1, 3, 4, 5, 6, 7, 9};
	int ctr = sizeof(arr1)/sizeof(arr1[0]);
	int i;
	
	printf ("The given array is: ");
	for (i=0; i<ctr; i++)
	{
		printf ("%d ", arr1[i]);
	}
	
	printf ("\n");
	
	int low_index = 0, high_index = ctr - 1;
	
	printf ("The missing smallest element is: %d", missingSmallElement(arr1, low_index, high_index));
	
	return 0;
}