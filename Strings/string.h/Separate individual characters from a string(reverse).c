/*
	A C program to print the individual characters of string in reverse order.
*/

#include <stdio.h>
#include <string.h>

int main()
{
	char string1[100];
	printf ("Input the string: ");
	gets(string1);
	
	int stringLength = strlen(string1);
	
	int i;
	i = stringLength;

	while(i>=0)
	{
		printf ("%c ", string1[i-1]);
		i--;
	}
}