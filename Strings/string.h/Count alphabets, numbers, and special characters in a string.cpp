/*
	A C program to count total number of alphabets, digits, and special characters 
	in a string.
*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
	char string1[100];
	int alphaCount, numCount, specialCount, i = 0;
	alphaCount = numCount = specialCount = 0; 
	
	printf ("Input a string: ");
	gets(string1);
	
	int stringLength = strlen(string1);
	
	char *ptr = string1;
	while (i<=stringLength)
	{
		if (isalpha(*ptr))
			alphaCount++;
		else if (isdigit(*ptr))
			numCount++;
		else
			specialCount++;
		
		ptr++;
		i++;
	}
	
	printf ("\nNumber of alphabets: %d\n", alphaCount);
	printf ("Number of digits: %d\n", numCount);
	printf ("Number of special characters: %d\n", specialCount);
	
	return 0;
}