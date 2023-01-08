/*	
	A C program to find the length of a string without using the library function.
*/

#include <stdio.h>
int main()
{	
	char string1[100];
	int count = 1;
	printf ("Input the string: ");
	gets(string1);
	
	char *ptr = string1;
	
	while(*ptr != NULL)
	{
		count++;
		ptr++;
	}
	
	
	printf ("Length of the string is: %d", count);
	return 0;
}