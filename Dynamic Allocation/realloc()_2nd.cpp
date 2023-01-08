#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n;
	printf ("Enter size: ");
	scanf ("%d", &n);
	
	int *ptr1 = (int*)malloc(sizeof(int)*n);
	printf ("Enter %d values:\n", n);
	for(int i =0; i<n; i++)
	{
		printf ("element - %d: ", i);
		scanf ("%d", (ptr1+i));
	}
	
	printf ("\nArray: ");
	for(int i = 0; i<n; i++)
	{
		printf ("%d ", *(ptr1+i));
	}
	
	printf ("\n\nNow using realloc...\n");
	printf ("Enter new size: ");
	scanf ("%d", &n);
	int *ptr2 = (int*)realloc(ptr1, n*sizeof(int));
	printf ("Enter %d values:\n", n);
	for(int i =0; i<n; i++)
	{
		printf ("element - %d: ", i);
		scanf("%d", (ptr2+i));
	}
	
	printf ("\nArray: ");
	int i = 0;
	for(i; i<n; i++)
	{
		printf ("%d ", *(ptr2+i));
	}
	
	int add;
	printf ("\nNumber of elements that you'd like to add: ");
	scanf ("%d", &add);
	int *ptr3 = (int*)realloc(ptr2, (n+add)*sizeof(int));
	
	printf ("Input %d elements:\n", add);
	for(i; i<n+add; i++)
	{
		printf ("element - %d: ", i);
		scanf ("%d", (ptr3+i));
	}
	
	printf ("Array: ");
	for(i=0; i<n+add; i++)
	{
		printf ("%d ", *(ptr3+i));
	}
	printf ("\n");
	return 0;
}