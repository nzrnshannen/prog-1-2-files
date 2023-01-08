/*
 A C program to copy the strings and calculate length without using
 any string library functions.
*/

#include <stdio.h>

int main()
{
	char string1[50], string2[50];
	int count =0;
	printf ("Input the string: ");
	gets(string1);
	
	char *ptr = string1, i;
	while(*ptr != NULL)
	{
		string2[i++] = *ptr;
		ptr++;
		count++;
	}
	
	printf ("\nFirst string: %s\n", string1);
	printf ("Second string: %s\n", string2);
	printf ("Number of characters copied: %d\n", count);
	
	return 0;
}