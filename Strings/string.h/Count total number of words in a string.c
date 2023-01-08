/*
	A C program to count the total number of words in a string.
*/

#include <stdio.h>
#include <string.h>

int main()
{
	int i, count = 0;
	char string1[100];
	printf ("Input the string: ");
	gets(string1);
	
	char *ptr = strtok(string1, " ");	
	while(ptr != NULL)
	{
		count++;
		ptr = strtok(NULL, " ");
	}
	
	printf ("\nTotal number of words in the string is: %d", count);
	
	return 0;
}