#include <stdio.h>

void merge(int arr[], int lb, int mid, int ub)
{
	int i, j, k;
	int n1 = mid - lb + 1; //size of the left arr
	int n2 = ub - mid; //size of the right arr
	
	int Left[n1], Right[n2];
	
	//copy arrays
	for (i =0; i< n1; i++)
		Left[i] = arr[lb + i]; //for the left array
		
	for (j = 0; j <n2; j++) //for the right array
		Right[j] = arr[mid + 1 + j];
	
	i = 0; //initial index for 1st sub array (left array)
	j = 0; //initial index for 2nd sub array (right array)
	k = lb; //initial index merged
	
	while (i< n1 && j < n2)
	{
		if (Left[i]<=Right[j]) //if Left[i] elements are on the arr[k] already, loop stops
		{
			arr[k] = Left[i];
			i++;
		}
		else
		{
			arr[k] = Right[j]; //if Right[j] elements are on the arr[k] already, loop stops
			j++;
		}
		k++;
	}
	
	while (i < n1) //if there are still Left elements that are not on arr[k]
	{
		arr[k] = Left[i];
		i++;
		k++;
	}
	
	while (j<n2) //if there are still right elements that are not on arr[k]
	{
		arr[k] = Right[j];
		j++;
		k++;
	}
	
}

void mergeSort(int arr[], int lb, int ub)
{
	if (lb < ub)
	{
		int mid = (lb + ub) / 2; //dividing into two
		
		mergeSort (arr, lb, mid); //dividing elements on the left part
		mergeSort (arr, mid+1, ub); //dividing elements on the right part
		
		merge (arr, lb, mid, ub); //merging happens if done dividing
	}

}

void printArray(int arr[], int size)
{
	int i;
	for (i=0; i<size; i++)
	{
		printf ("%d ", arr[i]);
	}
	printf ("\n");
}

int main()
{
//	int arr[] = {15, 5, 24, 8, 1, 3, 16, 10, 20};
	//int arr_size = sizeof(arr)/sizeof(arr[0]);
	
	int n;
	printf ("Indicate number of elements: ");
	scanf ("%d", &n);
	
	int i, arr[n];
	
	printf ("Input %d elements: \n", n);
	for (i=0; i<n; i++)
	{
		printf ("Element - %d: ", i+1);
		scanf ("%d", &arr[i]);
	}

	int arr_size = n;
	
	printf ("\nGiven array is: ");
	
	printArray(arr, arr_size);
	
	mergeSort(arr, 0, arr_size-1);
	
	printf ("Sorted array is: ");
	printArray(arr, arr_size);
	
	return 0;
}