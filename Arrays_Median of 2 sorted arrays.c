#include <stdio.h>

int Median (int[], int);
void selectionSort (int[], int);

int main()
{
	int n1, n2, median1, median2;
	printf ("Enter size for the first array: ");
	scanf ("%d", &n1);
	int i, j, arr1[n1];
	printf ("Enter %d elements:\n", n1);
	for (i=0; i<n1; i++)
	{
		printf ("element - %d: ", i);
		scanf ("%d", &arr1[i]);
	}
	
	printf ("\nThe new sorted array is: ");
	selectionSort(arr1, n1);

	
	printf ("\n\nEnter size for the second array: ");
	scanf ("%d", &n2);
	int arr2[n2];
	printf ("Enter %d elements:\n", n2);
	for(j=0; j<n2; j++)
	{
		printf ("element - %d: ", j);
		scanf ("%d", &arr2[j]);
	}
	
	printf ("\nThe new sorted array is: ");
	selectionSort(arr2, n2);
	
	median1 = Median(arr1, n1);
	median2 = Median(arr2, n2);
	
	int median = (median1+median2)/2;
	printf ("\n\nThe Median of the 2 sorted arrays is: %d", median);
}

void selectionSort(int arr[], int size)
{
	int i, j;
		
	for (i=0; i<size; i++)
	{
		int min_pos = i;
		for (j=i+1; j<size; j++)
		{
			if (arr[j]<arr[min_pos])
			{
				min_pos = j;
			}
		}
		
		int temp;
		temp = arr[min_pos];
		arr[min_pos] = arr[i];
		arr[i] = temp;
	}
	
	for (i=0; i<size; i++)
	{
		printf ("%d ", arr[i]);
	}
	
	printf ("\n\n");
}

int Median(int arr[], int n)
{
	/*int sum = 0, i;
	for (i=0; i<n; i++)
	{
		sum += arr[i];
	*/
	
	return arr[n/2];
}