#include <stdio.h>
int main()
{
	int arr[] = {5, 3, 10, 9, 6, 13};
	int i, j, flag = -1;
	int n = sizeof(arr)/sizeof(arr[0]);
	int bigArr[n], bigElement;
	
	printf ("\nThe given array is: ");
	
	for (i=0; i<n; i++)
	{
		printf ("%d ", arr[i]);
	}
	printf ("\n");

	printf ("\nNext Bigger Elements are:\n");
	
	for (i=0; i<n; i++)
	{
		for (j=i+1, bigElement = flag; j<n; j++)
		{
			if(arr[i]<arr[j])
			{	
				bigElement = arr[j]; //bigElement will be the value in arr[j]
				bigArr[i] = bigElement; 
				break;
			}
		}
		
		//will store consecutively values of bigElement upon loop of i
		bigArr[i] = bigElement;
		printf ("Next bigger element of %d in the array is: %d\n", arr[i], bigElement);
	}


	printf ("\n\n");
	printf ("Next bigger elements array: \n");
	for (i=0; i<n; i++)
	{
		printf ("%d ", bigArr[i]);
	}
}