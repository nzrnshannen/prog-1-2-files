/*
	Application of Unions: An array of mixed type data
*/

#include <stdio.h>
typedef union{
	int a;
	char b;
	double c;
}data;

int main()
{
	data arr[10];
	arr[0].b = 'c';
	arr[1].c = 3.14;
	arr[2].a = 9;
	
	printf ("%c\n", arr[0].b);
	printf ("%lf\n", arr[1].c);
	printf ("%d\n", arr[2].a);
	
	return 0;
}