#include <stdio.h>
int *ascendingSort(int[], int);
int *descendingSort(int[], int);

int main()
{
	int n;
	printf ("How many elements would you like to input? ");
	scanf ("%d", &n);

	int i, j, arr[n];
	
	printf ("\nInput %d elements in your array:\n", n);
	for(i=0; i<n; i++)
	{
		printf ("element - %d: ", i);
		scanf ("%d", &arr[i]);
	}
	
	printf ("\nYour unsorted array is:\n");
	for (i=0; i<n; i++)
	{
		printf ("%d ", arr[i]);
	}
	
	printf ("\n");
choice:
	char choice;
	int *result;
	
	printf ("\nChoose an option:\n");
	printf ("\t[A] Ascending\n\t[B] Descending\n");
	printf ("\tChoice: ");
	scanf (" %c", &choice);
	
	if (choice == 'A' || choice == 'a')
	{
		result = ascendingSort(arr, n);
		
		printf ("\nThe sorted array in ascending order:\n");
		for (i=0; i<n; i++)
		{
			printf ("%d ", *(result+i));
		}
	}
	
	else if (choice == 'B' || choice == 'b')
	{
		result = descendingSort(arr, n);
		
		printf ("\nThe sorted array in descending order:\n");
		for (i=0; i<n; i++)
		{
			printf ("%d ", *(result+i));
		}
	}
	
	else
	{
		printf ("\n\nInvalid input. Try again.\n");
		goto choice;
	}
	
	return 0;
}

int *ascendingSort (int arr[], int n)
{
	int i, j;
	
	for (i=0; i<n; i++)
	{
		int min_pos = i;
		for (j=i+1; j<n; j++) //determining the position of the minimum
		{
			if (arr[j]<arr[min_pos])
			{
				min_pos = j;
			}
		}
		
		if (min_pos!=999) //dummy value :))
		{
		//value at minimum position will be compared to the element at index[i]
			int temp = arr[i];
			arr[i] = arr[min_pos];
			arr[min_pos] = temp;
		}
	}
	
	return arr;
}

int *descendingSort (int arr[], int n)
{
	int i, j;
	
	for(i=0; i<n; i++)
	{
		int max_pos = i;
		
		for (j=i+1; j<n; j++)
		{
			if (arr[j]>arr[max_pos])
			{
				max_pos = j;
			}
		}
		
		if (max_pos!=9999) //dummy value :))
		{
			int temp = arr[i];
			arr[i] = arr[max_pos];
			arr[max_pos] = temp;
		}
	}
	
	return arr;
}
