//counting vowels and consonants on a given string

#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
	char string[100];
	printf ("Input a string: ");
	gets (string);
	int i, vowCount, consoCount;
	
	int len = strlen(string);
	vowCount = consoCount = 0;
	
	strlwr(string);
	
	printf ("string: %s, length: %d\n\n", string, len);
	
	i = 0;
	
	*(string+len) = '\0';
	for (i=0; i<len; i++)
	{
		//printf ("%c\n", *(string+i));
		
		if (isalpha(*string+i) && *(string+i)!=NULL)
		{
			if (*(string+i)=='a'||*(string+i)=='e' || *(string+i)=='i' || *(string+i)=='o' || *(string+i)=='u')
			{
				vowCount++;
			}
			
			else if (*(string+i)==' ')
			{
				continue;
			}
			
			else
			{
				consoCount++;
			}
		}
		else
			continue; 
	}
	
	printf ("\nNumber of vowels: %d\nNumber of consonants: %d", vowCount, consoCount);

	
	return 0;

}