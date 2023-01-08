/*
	1. No. of elements of both arrays are asked
	2. Calculating total size of the sizes and formulate into one
	3. Using bubble sort
*/

#include <stdio.h>
int main()
{
	int arr1[100], arr2[100], arr3[100];
	int s1, s2, s3;
	int i, j, k;
	
	printf ("MERGE TWO ARRAYS OF THE SAME SIZE SORTED IN DESCENDING ORDER\n\n");
	
	//for the first array
	printf ("Input the number of elements to be stored in the first array: ");
	scanf ("%d", &s1);
	printf ("Input %d elements in the array: \n", s1);
	for(i=0; i<s1; i++)
	{
		printf ("element - %d: ", i);
		scanf ("%d", &arr1[i]);
	}
	
	//for the second array
	printf ("Input the number of elements to be stored in the second array: ");
	scanf ("%d", &s2);
	printf ("Input %d elements in the array: \n", s2);
	for(i=0; i<s2; i++)
	{
		printf ("element - %d: ", i);
		scanf ("%d", &arr2[i]);
	}
	
	//merging
	s3 = s1 + s2;
	
	for (i=0; i<s1; i++)
	{
		arr3[i] = arr1[i];
	}
	
	for (j=0; j<s2; j++)
	{
		arr3[i] = arr2[j];
		i++;
	}
	
	//bubble sort
	 
	for (i=0; i<s3; i++)
	{
		for (k=0; k < s3-1; k++)
		{
			if (arr3[k]<=arr3[k+1])
			{
				j = arr3[k+1];
				arr3[k+1] = arr3[k];
				arr3[k]= j;
			}
		}
	}
	
	printf ("\n\nThe merged array in descending order is: \n");
	
	for (i=0; i<s3; i++)
	{
		printf ("%d ", arr3[i]);
	}
	
	printf ("\n\n");
}

/*
UPDATED PROGRAM

#include <stdio.h>
int main()
{
	int n1, n2, i;
	printf ("Input the number of elements to be stored in the first array: ");
	scanf ("%d", &n1);
	printf ("Input %d elements in the array:\n", n1);
	int arr1[n1];
	for(i=0; i<n1; i++)
	{
		printf ("element - %d: ", i);
		scanf ("%d", &arr1[i]);
	}
	
	printf ("\nInput the number of elements to be stored in the second array: ");
	scanf ("%d", &n2);
	printf ("Input %d elements in the array:\n", n2);
	int arr2[n2];
	for (i=0; i<n2; i++)
	{
		printf ("element - %d: ", i);
		scanf ("%d", &arr2[i]);
	}
	
	int n = n1+n2;
	int arr[n];
	int j;
	for (i=0; i<n1; i++)
	{
		arr[i] = arr1[i];
	}
	
	j = i;
	
	for (i=0; i<n2; i++)
	{
		arr[j++] = arr2[i];
	}
	
	printf ("\n");
	printf ("The unsorted merged array: ");
	for (i=0; i<n; i++)
	{
		printf ("%d ", arr[i]);
	}
	
	printf ("\n\n");
	
	for (i=0; i<n; i++)
	{
		int key = arr[i];
		for (j=i-1; j>=0 && arr[j]<key; j--)
		{
			arr[j+1] = arr[j];
		}
		
		arr[j+1] = key;
	}
	
	printf ("\n\nThe merged array in descending order is: ");
	for (i=0; i<n; i++)
	{
		printf ("%d ", arr[i]);
	}
}

*/