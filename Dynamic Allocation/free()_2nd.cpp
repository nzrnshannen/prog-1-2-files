#include <stdio.h>
#include <stdlib.h>
int *input()
{
	int *ptr, i;
	ptr = (int*)malloc(5*sizeof(int));
	printf ("Enter 5 numbers: ");
	for(i=0; i<5; i++)
		scanf ("%d", ptr+i);
	return ptr;
	//we can return ptr since we used ptr to store some memory in the heap
	//ptr is not local to the *input() function
}

int main()
{
	int i, sum = 0;
	int *ptr = input(); //will have the address of the other ptr that stores the heap
	for(i=0; i<5; i++)
		sum+=*(ptr+i);
	
	printf ("\nSum is: %d", sum);
	free(ptr);
}