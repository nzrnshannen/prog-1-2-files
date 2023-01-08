#include <stdio.h>

void swap(int*, int*, int*);

int main()
{
	int a, b, c;
	printf ("Input the value of the 1st element: ");
	scanf ("%d", &a);
	printf ("Input the value of the 2nd element: ");
	scanf ("%d", &b);
	printf ("Input the value of the 3rd element: ");
	scanf ("%d", &c);
	
	swap(&a, &b, &c);
	
	printf ("The values after swapping are:\n");
	printf ("element 1 = %d\nelement 2 = %d\nelement 3 = %d", a, b, c);
	
	return 0;
}

void swap (int *a, int *b, int *c)
{
	int temp;
	
	temp = *c;
	*c = *b;
	*b = *a;
	*a = temp;
	
}