#include <stdio.h>

void printArray(int[], int);
void segregateArr(int[], int, int, int);


int main()
{
	int n, i, evenCount,oddCount;
	evenCount = oddCount;
	
	printf ("Enter number of elements: ");
	scanf ("%d", &n);
	
	int arr[n];
	
	printf ("Enter %d elements:\n", n);
	for(i=0; i<n; i++)
	{
		printf ("element - %d: ", i);
		scanf ("%d", &arr[i]);
		
		if (arr[i]%2==0)
			evenCount++;
		else
			oddCount++;
	}
	
	printf ("\nGiven array: ");
	printArray(arr, n);
	
	segregateArr(arr, evenCount, oddCount, n);
	
	printf ("New array: ");
	printArray(arr, n);
	
	return 0;
}
 
void printArray(int arr[], int size)
{
	for(int i= 0; i<size; i++)
		printf ("%d ", arr[i]);
		
	printf ("\n");
}

void segregateArr(int arr[], int n1, int n2, int size)
{
	int i, j, k;
	i = j = k = 0;
	int even[n1], odd[n2];
	
	for (i=0; i<size; i++)
	{
		if (arr[i]%2==0)
		{
			even[j] = arr[i];
			j++; 
		}
		
		if (j==n1)
		{
			break;
		}
	}
	
	for(i=0; i<size; i++)
	{
		if(arr[i]%2==1)
		{
			odd[k] = arr[i];
			k++;
		}
		
		if (k==n2)
		{
			break;
		}
	}
	
	i = j = k = 0;
	
	while (i<n1)
	{
		arr[k] = even[i];
		i++;
		k++;
	}
	
	while (j<n2)
	{
		arr[k] = odd[j];
		j++;
		k++;
	}	
}

