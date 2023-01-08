#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
	char string1[50];
	char *ptr = string1;
	int vowelCount, consoCount;
	vowelCount = consoCount = 0;
	
	printf ("Input a string: ");
	gets(string1);
	strlwr(string1);
	
	while(*ptr!=NULL)
	{
		if(isalpha(*ptr))
		{
			if(*ptr=='a' ||*ptr == 'e'|| *ptr == 'i'||*ptr == 'o'|| *ptr == 'u')
			{
				vowelCount++;
			}
			else
			{
				consoCount++;
			}
		}
		
		ptr++;
	}
	
	printf ("\nTotal number of vowels in the string: %d\n", vowelCount);
	printf ("Total number of consonants in the string: %d\n", consoCount);
	
	return 0;
}