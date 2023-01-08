#include <stdio.h>
#include <stdlib.h>

struct Point{
	int x;
	int y;
};

struct Point *fun(int a, int b) //since we are returning a pointer, the function should be *
{
	struct Point *ptr = (struct Point*)malloc(sizeof(struct Point));
	ptr->x = a; //ptr->x will now have the value of a
	ptr->y = b + 5; //ptr->y will now have the value of n
	
	return ptr; //ptr is an address of some variable
}

void printFunc(struct Point *ptr)
{
	printf ("%d %d\n", ptr->x, ptr->y);
}

int main()
{
	struct Point *ptr1, *ptr2; //both variables point to struct Point
	ptr1 = fun(2, 3); 
	ptr2 = fun(6,9);
	
	printFunc(ptr1);
	printFunc(ptr2);
	
	free(ptr1);
	free(ptr2);
	
	ptr1 = NULL;
	ptr2 = NULL;
}
