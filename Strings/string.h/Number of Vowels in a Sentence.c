#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
	char string1[100], c;
	int i=0, vowelCount =0 ;
	
	printf ("Enter a sentence: ");
	
	while((c=getchar())!='\n')
	{
		string1[i] = c;
		i++;
	}
	string1[i] = '\0';
	
	strlwr(string1);
	
	char *ptr;
	ptr = string1;
	
	while(*ptr!=NULL)
	{
		if(*ptr=='a' || *ptr=='e' || *ptr == 'i' || *ptr == 'o' || *ptr == 'u')
		{
			vowelCount++;
		}
		ptr++;
	}
	
	printf ("\nNumber of vowels in the sentence '%s': %d", string1, vowelCount);
	
	return 0;
}