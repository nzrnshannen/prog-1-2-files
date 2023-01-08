#include <stdio.h>
#include <stdlib.h>

struct Point{
	int x;
	int y;
};

struct Point* fun(int a, int b) //struct Point* fun since *ptr is a VARIABLE under struct Point which use dynamic allocation
{
	struct Point *ptr = (struct Point*) malloc (sizeof(struct Point)); //sizeof(struct Point) since we are using pointer variable of a struct
	ptr->x = a;
	ptr->y = b + 5;
	
	return ptr; //ptr is POINTER 'VARIABLE', not a member that's why return type is struct Point*
}

void print(struct Point *ptr)
{
	printf ("%d %d\n", ptr->x, ptr->y);
}

int main()
{
	struct Point *ptr1, *ptr2;
	ptr1 = fun(2, 3); //pass by copy: fun(2, 3); ptr1 will have address of ptr and will have access to it
	ptr2 = fun(6, 9); //pass by copy: fun(6, 9); ptr2 will have address of ptr and will have access to it
	
	print(ptr1); //passing addresses of ptr1
	print(ptr2); //passing addresses of ptr2
	
	
	//deallocating
	free(ptr1);
	free(ptr2);
	
	return 0;
}