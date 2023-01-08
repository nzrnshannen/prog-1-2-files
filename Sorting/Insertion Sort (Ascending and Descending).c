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
	
	for (i=1; i<n; i++)
	{
		int key = arr[i];
		
		for (j=i-1; j>=0 && arr[j]>key; j--)
		{
			arr[j+1] = arr[j];
		}
		
		arr[j+1] = key;
	}
	
	return arr;
}

int *descendingSort (int arr[], int n)
{
	int i, j;
	
	for (i=1; i<n; i++)
	{
		int key = arr[i];
		
		for (j=i-1; j>=0 && arr[j]<key; j--)
		{
			arr[j+1] = arr[j];
		}
		
		arr[j+1] = key;
	}
	
	return arr;
}
