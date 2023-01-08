/*=====================================================
	PROGRAM: MEDIAN OF 2 SORTED ARRAYS
	
	Created by: Shannen T. Nazareno
	Date: 10/17/2022
======================================================*/

#include <stdio.h>
void printArray(int[], int);
void sortFunc(int[], int);
int findMedian(int[], int);

int main()
{
	int n1, n2;
	
	input:
	printf ("Number of elements for array 1: ");
	scanf ("%d", &n1);
	printf ("Number of elements for array 2: ");
	scanf ("%d", &n2);
	
	if (n1!=n2)
	{
		printf ("\n\nInput not eligible for this program. Try again.\n\n");
		goto input;
	}
	
	int arr1[n1], arr2[n2];
	int i;
	printf ("\nEnter %d elements for array 1: \n", n1);
	for(i=0; i<n1; i++)
	{
		printf ("element - %d: ", i);
		scanf ("%d", &arr1[i]);
	}
	
	printf ("\nEnter %d elements for array 2:\n", n2);
	for(i=0; i<n2; i++)
	{
		printf ("element - %d: ", i);
		scanf ("%d", &arr2[i]);
	}
	
	printf ("\n==BEFORE SORTING==\n");
	printf ("Array 1: ");
	printArray(arr1, n1);
	printf ("Array 2: ");
	printArray(arr2, n2);
	
	sortFunc(arr1, n1);
	sortFunc(arr2, n2);
	
	printf ("\n==AFTER SORTING==\n");
	printf ("Array 1: ");
	printArray(arr1, n1);
	printf ("Array 2: ");
	printArray(arr2, n2);
	
	int median1, median2;
	
	median1 = findMedian(arr1, n1);
	median2 = findMedian(arr2, n2);
	printf ("\nMedian of array 1: %d\n", median1);
	printf ("Median of array 2: %d\n", median2);
	printf ("\nThe median of two sorted array is: %d", (median1+median2)/2);
	
	return 0;
	
}

void printArray(int arr[], int n)
{
	int i;
	for(i=0; i<n; i++)
	{
		printf ("%4d", arr[i]);
	}
	printf ("\n");
}

void sortFunc(int arr[], int n)
{
	int i, j, key;
	
	for(i=1; i<n; i++)
	{
		key = arr[i];
		for(j=i-1; j>=0 && arr[j]>key; j--)
		{
			arr[j+1] = arr[j];
		}
		
		arr[j+1] = key;
	}
}

int findMedian(int arr[], int n)
{
	int sum = 0;
	
	for(int i =0; i<n; i++)
	{
		sum+=arr[i];
	}
	
	return sum/n;
}