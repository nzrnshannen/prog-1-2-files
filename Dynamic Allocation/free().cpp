#include <stdio.h>
#include <stdlib.h>

//memory is fixed, unlike static memory allocation

int *input() //returning arrays as pointers
{
	int *ptr, i;
	ptr = (int*)malloc(5*sizeof(int));
	printf ("Enter 5 numbers:\n");
	for (i=0; i<5; i++)
	{
		scanf("%d", ptr + i);
	}
	
	return ptr; //returning the base address
}

int main()
{
	int i, sum = 0;
	int *ptr = input();
	
	for (i=0; i<5; i++)
	{
		sum += *(ptr+i);
	}
	
	printf ("Sum is: %d", sum);
//manually releasing the memory
	free(ptr); //releasing the memory at the end
	ptr = NULL; //this is important!

/*	
Test this while excluding and including ptr = NULL to see if there's some 
	value or anything printed.

	i = 0;
	printf("\n\n%d", *(ptr + i));
*/
	return 0;
}
