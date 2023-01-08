#include <stdio.h>
#include <stdlib.h>
void printArray(int*, int);
void mergeSort(int*, int, int);
void merge(int*, int, int, int);

int main()
{
	int n, i;
	printf ("Enter number of elements:  ");
	scanf ("%d", &n);
	
	int *ptr = (int*)malloc(sizeof(int)*n);
	
	printf ("Enter %d elements for your array: \n", n);
	for(i=0; i<n; i++)
	{
		printf ("element - %d: ", i);
		scanf ("%d", ptr+i);
	}
	
	printf ("\nGiven array: ");
	printArray(ptr, n);
	
	mergeSort(ptr, 0, n-1);
	printf ("Sorted array: ");
	printArray(ptr, n);
	
	free(ptr);
	ptr = NULL;
	
	return 0;
}

void printArray(int *ptr, int n)
{
	for(int i =0; i<n; i++)
	{
		printf ("%d ", *(ptr+i));
	}
	printf("\n");
}

void mergeSort(int *ptr, int lb, int ub)
{
	if(lb<ub)
	{
		int mid = (lb+ub)/2;
		
		mergeSort(ptr, lb, mid);
		mergeSort(ptr, mid+1, ub);
		
		merge(ptr, lb, mid, ub);
	}
}

void merge(int *ptr, int lb, int mid, int ub)
{
	int n1, n2, i, j, k;
	n1 = mid - lb + 1;
	n2 = ub - mid;
	
	int *left = (int*)malloc(sizeof(int)*n1);
	int *right = (int*) malloc(sizeof(int*) * n2);
	
	for(i=0; i<n1; i++)
	{
		*(left+i) = *(ptr+ (i+lb));
	}
	
	for(j=0; j<n2; j++)
	{
		*(right+j) = *(ptr + (j+mid+1));
	}
	
	i = j = 0;
	k = lb;
	
	while(i<n1 && j<n2)
	{
		if(*(left+i)<*(right+j))
		{
			*(ptr+k) = *(left+i);
			i++;
		}
		else
		{
			*(ptr+k) = *(right+j);
			j++;
		}
		k++;
	}
	
	while(i<n1)
	{
		*(ptr+k) = *(left+i);
		i++, k++;
	}
	
	while(j<n2)
	{
		*(ptr+k) = *(right+j);
		j++, k++;
	}
	
	free(left);
	free(right);
	
	left = right = NULL;
}

