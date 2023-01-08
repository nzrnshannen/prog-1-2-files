/*
	C program to find maximum occuring character in a string.
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
	char string[50];
	int i, j, c = 0, maxCount = 0;
	char maxChar;
	
	printf ("Input a string: ");
	gets(string);
	int stringLength = strlen(string);
	
	for(i=0; i<stringLength; i++)
	{
		c = 1;
		for(j=i+1; j<stringLength; j++)
		{
			if(isalpha(string[i]))
			{
				if (string[i]==string[j])
				{
					c++;
					string[j] = '$';
				}
			}
		}
		
		if (maxCount<c)
		{
			maxCount = c;
			maxChar = string[i];
		}
		
	}
	
	printf ("\n\nThe highest frequency of character: '%c' appears number of times: %d", maxChar, maxCount);
	
	return 0;
}
