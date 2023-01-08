/*	
	A C program to separate the individual characters from a string.
*/

#include <stdio.h>
int main()
{	
	char string1[100];
	printf ("Input the string: ");
	gets(string1);
	
	char *ptr = string1;
	
	printf ("\nThe characters of the string are: \n");
	while(*ptr != NULL)
	{
		printf ("%c ", *ptr);
		ptr++;
	}
	
	

}