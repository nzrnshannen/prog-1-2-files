/*
 	A C program about insertion sort.
*/

#include <stdio.h>
int main()
{
	int i, j;
	int arr[] = {1, 3, 2, 5, 7, 8, 6};
	int key = 0;
	int n = sizeof(arr)/sizeof(arr[0]);
	for (i=1; i<n; i++)
	{
		key = arr[i]; //key will hold the 2nd element because element in the first index is sorted by default
		
		for (j = i - 1; j >= 0 && arr[j]>key; j--) //comparing values from right to left -> index[1] and index[0]
		{
			arr[j + 1] = arr[j]; //shifting elements that are greater than the key to the right
		}
		
		arr[j+1] = key;
	}
	
	printf ("\n");
	for (i=0; i<n; i++)
	{
		printf ("%d\n", arr[i]);
	}
	
	return 0;
}